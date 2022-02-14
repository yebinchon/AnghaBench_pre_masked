
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {TYPE_1__* f_op; } ;
struct TYPE_2__ {int (* unlocked_ioctl ) (struct file*,unsigned int,unsigned long) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct file*,unsigned int,unsigned long) ;

long FUNC_1(struct file *VAR_2, unsigned int VAR_3, unsigned long VAR_4)
{
 int VAR_5 = -VAR_1;

 if (!VAR_2->f_op->unlocked_ioctl)
  goto out;

 VAR_5 = VAR_2->f_op->unlocked_ioctl(VAR_2, VAR_3, VAR_4);
 if (VAR_5 == -VAR_0)
  VAR_5 = -VAR_1;
 out:
 return VAR_5;
}
