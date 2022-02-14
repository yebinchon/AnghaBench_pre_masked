
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sqe_submit {int needs_lock; } ;
struct kiocb {int ki_flags; int ki_pos; struct file* ki_filp; } ;
struct iovec {int dummy; } ;
struct iov_iter {int dummy; } ;
struct io_kiocb {int flags; int result; int ctx; struct kiocb rw; } ;
struct file {int f_mode; TYPE_1__* f_op; } ;
typedef int ssize_t ;
struct TYPE_4__ {int i_sb; } ;
struct TYPE_3__ {scalar_t__ write_iter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct file*,struct kiocb*,struct iov_iter*) ;
 TYPE_2__* FUNC_3 (struct file*) ;
 int FUNC_4 (int ,struct io_kiocb*,size_t) ;
 int FUNC_5 (int ,int ,struct sqe_submit const*,struct iovec**,struct iov_iter*) ;
 int FUNC_6 (struct io_kiocb*,struct sqe_submit const*,int) ;
 int FUNC_7 (struct kiocb*,int) ;
 size_t FUNC_8 (struct iov_iter*) ;
 int FUNC_9 (struct iovec*) ;
 int FUNC_10 (int ,struct file*,struct kiocb*,struct iov_iter*) ;
 int FUNC_11 (int ,struct file*,int *,size_t) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static int FUNC_13(struct io_kiocb *VAR_10, const struct sqe_submit *VAR_11,
      bool VAR_12)
{
 struct iovec VAR_13[VAR_8], *VAR_14 = VAR_13;
 struct kiocb *VAR_15 = &VAR_10->rw;
 struct iov_iter VAR_16;
 struct file *VAR_17;
 size_t VAR_18;
 ssize_t VAR_19;

 VAR_19 = FUNC_6(VAR_10, VAR_11, VAR_12);
 if (VAR_19)
  return VAR_19;

 VAR_17 = VAR_15->ki_filp;
 if (FUNC_12(!(VAR_17->f_mode & VAR_2)))
  return -VAR_1;

 VAR_19 = FUNC_5(VAR_10->ctx, VAR_9, VAR_11, &VAR_14, &VAR_16);
 if (VAR_19 < 0)
  return VAR_19;

 if (VAR_10->flags & VAR_6)
  VAR_10->result = VAR_19;

 VAR_18 = FUNC_8(&VAR_16);

 VAR_19 = -VAR_0;
 if (VAR_12 && !(VAR_15->ki_flags & VAR_3)) {

  if (!VAR_11->needs_lock)
   FUNC_4(VAR_9, VAR_10, VAR_18);
  goto out_free;
 }

 VAR_19 = FUNC_11(VAR_9, VAR_17, &VAR_15->ki_pos, VAR_18);
 if (!VAR_19) {
  ssize_t VAR_20;
  if (VAR_10->flags & VAR_5) {
   FUNC_0(FUNC_3(VAR_17)->i_sb,
      VAR_7, 1);
   FUNC_1(FUNC_3(VAR_17)->i_sb,
      VAR_7);
  }
  VAR_15->ki_flags |= VAR_4;

  if (VAR_17->f_op->write_iter)
   VAR_20 = FUNC_2(VAR_17, VAR_15, &VAR_16);
  else
   VAR_20 = FUNC_10(VAR_9, VAR_17, VAR_15, &VAR_16);
  if (!VAR_12 || VAR_20 != -VAR_0) {
   FUNC_7(VAR_15, VAR_20);
  } else {




   if (!VAR_11->needs_lock)
    FUNC_4(VAR_9, VAR_10, VAR_18);
   VAR_19 = -VAR_0;
  }
 }
out_free:
 FUNC_9(VAR_14);
 return VAR_19;
}
