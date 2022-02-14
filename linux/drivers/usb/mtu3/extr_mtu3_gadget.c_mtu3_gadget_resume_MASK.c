
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtu3 {int lock; int g; TYPE_1__* gadget_driver; int dev; } ;
struct TYPE_2__ {int (* resume ) (int *) ;} ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct mtu3 *VAR_0)
{
 FUNC_0(VAR_0->dev, "gadget RESUME\n");
 if (VAR_0->gadget_driver && VAR_0->gadget_driver->resume) {
  FUNC_2(&VAR_0->lock);
  VAR_0->gadget_driver->resume(&VAR_0->g);
  FUNC_1(&VAR_0->lock);
 }
}
