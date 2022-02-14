
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {TYPE_1__* f_op; } ;
struct TYPE_2__ {int (* unlocked_ioctl ) (struct file*,unsigned int,unsigned long) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct file*,unsigned int,unsigned long) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_1, unsigned int VAR_2,
       unsigned long VAR_3)
{
 if (VAR_1->f_op->unlocked_ioctl)
  return VAR_1->f_op->unlocked_ioctl(VAR_1, VAR_2, VAR_3);

 return -VAR_0;
}
