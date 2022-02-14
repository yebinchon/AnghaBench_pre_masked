
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file_lock {int dummy; } ;
struct file {TYPE_1__* f_op; } ;
struct TYPE_2__ {int (* setlease ) (struct file*,long,struct file_lock**,void**) ;} ;


 int FUNC_0 (struct file*,long,struct file_lock**,void**) ;
 int FUNC_1 (long,struct file_lock*) ;
 int FUNC_2 (struct file*,long,struct file_lock**,void**) ;

int
FUNC_3(struct file *VAR_0, long VAR_1, struct file_lock **VAR_2, void **VAR_3)
{
 if (VAR_2)
  FUNC_1(VAR_1, *VAR_2);
 if (VAR_0->f_op->setlease)
  return VAR_0->f_op->setlease(VAR_0, VAR_1, VAR_2, VAR_3);
 else
  return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
}
