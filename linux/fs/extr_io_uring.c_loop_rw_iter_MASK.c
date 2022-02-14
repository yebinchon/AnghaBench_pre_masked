
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kiocb {int ki_flags; int ki_pos; } ;
struct iovec {scalar_t__ iov_len; int iov_base; } ;
struct iov_iter {int dummy; } ;
struct file {TYPE_1__* f_op; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_2__ {scalar_t__ (* read ) (struct file*,int ,scalar_t__,int *) ;scalar_t__ (* write ) (struct file*,int ,scalar_t__,int *) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct iov_iter*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct iov_iter*) ;
 struct iovec FUNC_2 (struct iov_iter*) ;
 scalar_t__ FUNC_3 (struct file*,int ,scalar_t__,int *) ;
 scalar_t__ FUNC_4 (struct file*,int ,scalar_t__,int *) ;

__attribute__((used)) static ssize_t FUNC_5(int VAR_5, struct file *VAR_6, struct kiocb *VAR_7,
      struct iov_iter *VAR_8)
{
 ssize_t VAR_9 = 0;






 if (VAR_7->ki_flags & VAR_2)
  return -VAR_1;
 if (VAR_7->ki_flags & VAR_3)
  return -VAR_0;

 while (FUNC_1(VAR_8)) {
  struct iovec VAR_10 = FUNC_2(VAR_8);
  ssize_t VAR_11;

  if (VAR_5 == VAR_4) {
   VAR_11 = VAR_6->f_op->read(VAR_6, VAR_10.iov_base,
           VAR_10.iov_len, &VAR_7->ki_pos);
  } else {
   VAR_11 = VAR_6->f_op->write(VAR_6, VAR_10.iov_base,
            VAR_10.iov_len, &VAR_7->ki_pos);
  }

  if (VAR_11 < 0) {
   if (!VAR_9)
    VAR_9 = VAR_11;
   break;
  }
  VAR_9 += VAR_11;
  if (VAR_11 != VAR_10.iov_len)
   break;
  FUNC_0(VAR_8, VAR_11);
 }

 return VAR_9;
}
