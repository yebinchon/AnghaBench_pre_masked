
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int * driver; int kobj; } ;
struct usb_udc {TYPE_3__* gadget; TYPE_5__ dev; TYPE_2__* driver; } ;
struct TYPE_6__ {int * driver; } ;
struct TYPE_8__ {TYPE_1__ dev; } ;
struct TYPE_7__ {int (* unbind ) (TYPE_3__*) ;int function; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*,char*,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (struct usb_udc*) ;

__attribute__((used)) static void FUNC_5(struct usb_udc *VAR_1)
{
 FUNC_0(&VAR_1->dev, "unregistering UDC driver [%s]\n",
   VAR_1->driver->function);

 FUNC_1(&VAR_1->dev.kobj, VAR_0);

 FUNC_3(VAR_1->gadget);
 VAR_1->driver->unbind(VAR_1->gadget);
 FUNC_4(VAR_1);

 VAR_1->driver = ((void*)0);
 VAR_1->dev.driver = ((void*)0);
 VAR_1->gadget->dev.driver = ((void*)0);
}
