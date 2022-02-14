
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file_lock {int dummy; } ;
struct file {TYPE_1__* f_op; } ;
struct TYPE_2__ {int (* lock ) (struct file*,unsigned int,struct file_lock*) ;} ;


 int FUNC_0 (struct file*,struct file_lock*,struct file_lock*) ;
 int FUNC_1 (struct file*,unsigned int,struct file_lock*) ;

int FUNC_2(struct file *VAR_0, unsigned int VAR_1, struct file_lock *VAR_2, struct file_lock *VAR_3)
{
 if (VAR_0->f_op->lock)
  return VAR_0->f_op->lock(VAR_0, VAR_1, VAR_2);
 else
  return FUNC_0(VAR_0, VAR_2, VAR_3);
}
