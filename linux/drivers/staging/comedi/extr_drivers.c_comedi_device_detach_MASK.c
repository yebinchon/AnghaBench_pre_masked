
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int attached; int attach_lock; TYPE_1__* driver; int detach_count; int mutex; } ;
struct TYPE_2__ {int (* detach ) (struct comedi_device*) ;} ;


 int FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (struct comedi_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct comedi_device*) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct comedi_device *VAR_0)
{
 FUNC_3(&VAR_0->mutex);
 FUNC_0(VAR_0);
 FUNC_2(&VAR_0->attach_lock);
 VAR_0->attached = 0;
 VAR_0->detach_count++;
 if (VAR_0->driver)
  VAR_0->driver->detach(VAR_0);
 FUNC_1(VAR_0);
 FUNC_5(&VAR_0->attach_lock);
}
