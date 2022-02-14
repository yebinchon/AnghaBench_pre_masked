
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int speed; } ;
struct dwc2_hsotg {scalar_t__ lx_state; int num_of_eps; TYPE_5__** eps_out; TYPE_4__** eps_in; int lock; TYPE_3__ gadget; scalar_t__ enabled; TYPE_2__* driver; int dev; } ;
struct TYPE_10__ {int ep; } ;
struct TYPE_9__ {int ep; } ;
struct TYPE_6__ {int name; } ;
struct TYPE_7__ {TYPE_1__ driver; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct dwc2_hsotg*) ;
 int FUNC_2 (struct dwc2_hsotg*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

int FUNC_6(struct dwc2_hsotg *VAR_2)
{
 unsigned long VAR_3;

 if (VAR_2->lx_state != VAR_0)
  return 0;

 if (VAR_2->driver) {
  int VAR_4;

  FUNC_0(VAR_2->dev, "suspending usb gadget %s\n",
    VAR_2->driver->driver.name);

  FUNC_4(&VAR_2->lock, VAR_3);
  if (VAR_2->enabled)
   FUNC_1(VAR_2);
  FUNC_2(VAR_2);
  VAR_2->gadget.speed = VAR_1;
  FUNC_5(&VAR_2->lock, VAR_3);

  for (VAR_4 = 0; VAR_4 < VAR_2->num_of_eps; VAR_4++) {
   if (VAR_2->eps_in[VAR_4])
    FUNC_3(&VAR_2->eps_in[VAR_4]->ep);
   if (VAR_2->eps_out[VAR_4])
    FUNC_3(&VAR_2->eps_out[VAR_4]->ep);
  }
 }

 return 0;
}
