
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dwc2_hsotg {scalar_t__ lx_state; int lock; scalar_t__ enabled; TYPE_2__* driver; int dev; } ;
struct TYPE_3__ {int name; } ;
struct TYPE_4__ {TYPE_1__ driver; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct dwc2_hsotg*) ;
 int FUNC_2 (struct dwc2_hsotg*) ;
 int FUNC_3 (struct dwc2_hsotg*,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

int FUNC_6(struct dwc2_hsotg *VAR_1)
{
 unsigned long VAR_2;

 if (VAR_1->lx_state == VAR_0)
  return 0;

 if (VAR_1->driver) {
  FUNC_0(VAR_1->dev, "resuming usb gadget %s\n",
    VAR_1->driver->driver.name);

  FUNC_4(&VAR_1->lock, VAR_2);
  FUNC_3(VAR_1, 0);
  if (VAR_1->enabled) {

   FUNC_1(VAR_1);
   FUNC_2(VAR_1);
  }
  FUNC_5(&VAR_1->lock, VAR_2);
 }

 return 0;
}
