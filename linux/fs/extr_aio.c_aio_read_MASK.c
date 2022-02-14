
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kiocb {int ki_pos; struct file* ki_filp; } ;
struct iovec {int dummy; } ;
struct iov_iter {int dummy; } ;
struct iocb {int dummy; } ;
struct file {int f_mode; TYPE_1__* f_op; } ;
struct TYPE_2__ {int read_iter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct kiocb*,struct iocb const*) ;
 int FUNC_1 (struct kiocb*,int ) ;
 int FUNC_2 (int ,struct iocb const*,struct iovec**,int,int,struct iov_iter*) ;
 int FUNC_3 (struct file*,struct kiocb*,struct iov_iter*) ;
 int FUNC_4 (struct iov_iter*) ;
 int FUNC_5 (struct iovec*) ;
 int FUNC_6 (int ,struct file*,int *,int ) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct kiocb *VAR_5, const struct iocb *VAR_6,
   bool VAR_7, bool VAR_8)
{
 struct iovec VAR_9[VAR_4], *VAR_10 = VAR_9;
 struct iov_iter VAR_11;
 struct file *VAR_12;
 int VAR_13;

 VAR_13 = FUNC_0(VAR_5, VAR_6);
 if (VAR_13)
  return VAR_13;
 VAR_12 = VAR_5->ki_filp;
 if (FUNC_7(!(VAR_12->f_mode & VAR_2)))
  return -VAR_0;
 VAR_13 = -VAR_1;
 if (FUNC_7(!VAR_12->f_op->read_iter))
  return -VAR_1;

 VAR_13 = FUNC_2(VAR_3, VAR_6, &VAR_10, VAR_7, VAR_8, &VAR_11);
 if (VAR_13 < 0)
  return VAR_13;
 VAR_13 = FUNC_6(VAR_3, VAR_12, &VAR_5->ki_pos, FUNC_4(&VAR_11));
 if (!VAR_13)
  FUNC_1(VAR_5, FUNC_3(VAR_12, VAR_5, &VAR_11));
 FUNC_5(VAR_10);
 return VAR_13;
}
