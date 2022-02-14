
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iovec {scalar_t__ iov_len; int iov_base; } ;
struct iov_iter {int dummy; } ;
struct file {TYPE_1__* f_op; } ;
typedef scalar_t__ ssize_t ;
typedef int rwf_t ;
typedef int loff_t ;
struct TYPE_2__ {scalar_t__ (* read ) (struct file*,int ,scalar_t__,int *) ;scalar_t__ (* write ) (struct file*,int ,scalar_t__,int *) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct iov_iter*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct iov_iter*) ;
 struct iovec FUNC_2 (struct iov_iter*) ;
 scalar_t__ FUNC_3 (struct file*,int ,scalar_t__,int *) ;
 scalar_t__ FUNC_4 (struct file*,int ,scalar_t__,int *) ;

__attribute__((used)) static ssize_t FUNC_5(struct file *VAR_3, struct iov_iter *VAR_4,
  loff_t *VAR_5, int VAR_6, rwf_t VAR_7)
{
 ssize_t VAR_8 = 0;

 if (VAR_7 & ~VAR_2)
  return -VAR_0;

 while (FUNC_1(VAR_4)) {
  struct iovec VAR_9 = FUNC_2(VAR_4);
  ssize_t VAR_10;

  if (VAR_6 == VAR_1) {
   VAR_10 = VAR_3->f_op->read(VAR_3, VAR_9.iov_base,
           VAR_9.iov_len, VAR_5);
  } else {
   VAR_10 = VAR_3->f_op->write(VAR_3, VAR_9.iov_base,
            VAR_9.iov_len, VAR_5);
  }

  if (VAR_10 < 0) {
   if (!VAR_8)
    VAR_8 = VAR_10;
   break;
  }
  VAR_8 += VAR_10;
  if (VAR_10 != VAR_9.iov_len)
   break;
  FUNC_0(VAR_4, VAR_10);
 }

 return VAR_8;
}
