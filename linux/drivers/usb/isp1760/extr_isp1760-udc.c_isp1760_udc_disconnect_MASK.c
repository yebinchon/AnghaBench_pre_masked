
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ state; int speed; } ;
struct isp1760_udc {int vbus_timer; TYPE_3__ gadget; TYPE_1__* driver; TYPE_2__* isp; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {int (* disconnect ) (TYPE_3__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,int ) ;

__attribute__((used)) static void FUNC_4(struct isp1760_udc *VAR_3)
{
 if (VAR_3->gadget.state < VAR_2)
  return;

 FUNC_1(VAR_3->isp->dev, "Device disconnected in state %u\n",
   VAR_3->gadget.state);

 VAR_3->gadget.speed = VAR_0;
 FUNC_3(&VAR_3->gadget, VAR_1);

 if (VAR_3->driver->disconnect)
  VAR_3->driver->disconnect(&VAR_3->gadget);

 FUNC_0(&VAR_3->vbus_timer);


}
