
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iov_iter {int dummy; } ;
struct file {TYPE_1__* f_op; } ;
typedef int ssize_t ;
typedef int rwf_t ;
typedef int loff_t ;
struct TYPE_2__ {int read_iter; } ;


 int VAR_0 ;
 int FUNC_0 (struct file*,struct iov_iter*,int *,int ) ;

ssize_t FUNC_1(struct file *VAR_1, struct iov_iter *VAR_2, loff_t *VAR_3,
  rwf_t VAR_4)
{
 if (!VAR_1->f_op->read_iter)
  return -VAR_0;
 return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
}
