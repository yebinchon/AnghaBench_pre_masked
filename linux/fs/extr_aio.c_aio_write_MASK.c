
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kiocb {int ki_flags; int ki_pos; struct file* ki_filp; } ;
struct iovec {int dummy; } ;
struct iov_iter {int dummy; } ;
struct iocb {int dummy; } ;
struct file {int f_mode; TYPE_1__* f_op; } ;
struct TYPE_4__ {int i_sb; int i_mode; } ;
struct TYPE_3__ {int write_iter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct kiocb*,struct iocb const*) ;
 int FUNC_4 (struct kiocb*,int ) ;
 int FUNC_5 (int ,struct iocb const*,struct iovec**,int,int,struct iov_iter*) ;
 int FUNC_6 (struct file*,struct kiocb*,struct iov_iter*) ;
 TYPE_2__* FUNC_7 (struct file*) ;
 int FUNC_8 (struct iov_iter*) ;
 int FUNC_9 (struct iovec*) ;
 int FUNC_10 (int ,struct file*,int *,int ) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static int FUNC_12(struct kiocb *VAR_7, const struct iocb *VAR_8,
    bool VAR_9, bool VAR_10)
{
 struct iovec VAR_11[VAR_5], *VAR_12 = VAR_11;
 struct iov_iter VAR_13;
 struct file *VAR_14;
 int VAR_15;

 VAR_15 = FUNC_3(VAR_7, VAR_8);
 if (VAR_15)
  return VAR_15;
 VAR_14 = VAR_7->ki_filp;

 if (FUNC_11(!(VAR_14->f_mode & VAR_2)))
  return -VAR_0;
 if (FUNC_11(!VAR_14->f_op->write_iter))
  return -VAR_1;

 VAR_15 = FUNC_5(VAR_6, VAR_8, &VAR_12, VAR_9, VAR_10, &VAR_13);
 if (VAR_15 < 0)
  return VAR_15;
 VAR_15 = FUNC_10(VAR_6, VAR_14, &VAR_7->ki_pos, FUNC_8(&VAR_13));
 if (!VAR_15) {







  if (FUNC_0(FUNC_7(VAR_14)->i_mode)) {
   FUNC_1(FUNC_7(VAR_14)->i_sb, VAR_4, 1);
   FUNC_2(FUNC_7(VAR_14)->i_sb, VAR_4);
  }
  VAR_7->ki_flags |= VAR_3;
  FUNC_4(VAR_7, FUNC_6(VAR_14, VAR_7, &VAR_13));
 }
 FUNC_9(VAR_12);
 return VAR_15;
}
