
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sqe_submit {int needs_lock; } ;
struct kiocb {int ki_pos; struct file* ki_filp; } ;
struct iovec {int dummy; } ;
struct iov_iter {int dummy; } ;
struct io_kiocb {int flags; int result; int ctx; struct kiocb rw; } ;
struct file {int f_mode; TYPE_1__* f_op; } ;
typedef int ssize_t ;
struct TYPE_2__ {scalar_t__ read_iter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct file*,struct kiocb*,struct iov_iter*) ;
 int FUNC_1 (int ,struct io_kiocb*,size_t) ;
 int FUNC_2 (int ,int ,struct sqe_submit const*,struct iovec**,struct iov_iter*) ;
 int FUNC_3 (struct io_kiocb*,struct sqe_submit const*,int) ;
 int FUNC_4 (struct kiocb*,int) ;
 size_t FUNC_5 (struct iov_iter*) ;
 int FUNC_6 (struct iovec*) ;
 int FUNC_7 (int ,struct file*,struct kiocb*,struct iov_iter*) ;
 int FUNC_8 (int ,struct file*,int *,size_t) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct io_kiocb *VAR_8, const struct sqe_submit *VAR_9,
     bool VAR_10)
{
 struct iovec VAR_11[VAR_7], *VAR_12 = VAR_11;
 struct kiocb *VAR_13 = &VAR_8->rw;
 struct iov_iter VAR_14;
 struct file *VAR_15;
 size_t VAR_16;
 ssize_t VAR_17, VAR_18;

 VAR_18 = FUNC_3(VAR_8, VAR_9, VAR_10);
 if (VAR_18)
  return VAR_18;
 VAR_15 = VAR_13->ki_filp;

 if (FUNC_9(!(VAR_15->f_mode & VAR_2)))
  return -VAR_1;

 VAR_18 = FUNC_2(VAR_8->ctx, VAR_3, VAR_9, &VAR_12, &VAR_14);
 if (VAR_18 < 0)
  return VAR_18;

 VAR_17 = VAR_18;
 if (VAR_8->flags & VAR_5)
  VAR_8->result = VAR_17;

 VAR_16 = FUNC_5(&VAR_14);
 VAR_18 = FUNC_8(VAR_3, VAR_15, &VAR_13->ki_pos, VAR_16);
 if (!VAR_18) {
  ssize_t VAR_19;

  if (VAR_15->f_op->read_iter)
   VAR_19 = FUNC_0(VAR_15, VAR_13, &VAR_14);
  else
   VAR_19 = FUNC_7(VAR_3, VAR_15, VAR_13, &VAR_14);
  if (VAR_10 && !(VAR_8->flags & VAR_6) &&
      (VAR_8->flags & VAR_4) &&
      VAR_19 > 0 && VAR_19 < VAR_17)
   VAR_19 = -VAR_0;

  if (!VAR_10 || VAR_19 != -VAR_0) {
   FUNC_4(VAR_13, VAR_19);
  } else {




   if (!VAR_9->needs_lock)
    FUNC_1(VAR_3, VAR_8, VAR_16);
   VAR_18 = -VAR_0;
  }
 }
 FUNC_6(VAR_12);
 return VAR_18;
}
