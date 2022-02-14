
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtu3 {int g; int lock; TYPE_1__* gadget_driver; int dev; } ;
struct TYPE_2__ {int (* disconnect ) (int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct mtu3*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;

void FUNC_6(struct mtu3 *VAR_1)
{
 FUNC_0(VAR_1->dev, "gadget DISCONNECT\n");
 if (VAR_1->gadget_driver && VAR_1->gadget_driver->disconnect) {
  FUNC_3(&VAR_1->lock);
  VAR_1->gadget_driver->disconnect(&VAR_1->g);
  FUNC_2(&VAR_1->lock);
 }

 FUNC_1(VAR_1);
 FUNC_5(&VAR_1->g, VAR_0);
}
