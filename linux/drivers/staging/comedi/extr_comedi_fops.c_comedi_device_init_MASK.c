
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {int minor; int attach_lock; int mutex; int spinlock; int refcount; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct comedi_device *VAR_0)
{
 FUNC_1(&VAR_0->refcount);
 FUNC_3(&VAR_0->spinlock);
 FUNC_2(&VAR_0->mutex);
 FUNC_0(&VAR_0->attach_lock);
 VAR_0->minor = -1;
}
