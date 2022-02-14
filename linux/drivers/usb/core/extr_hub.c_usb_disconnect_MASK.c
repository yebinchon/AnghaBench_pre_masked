
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int kobj; } ;
struct usb_port {TYPE_2__ dev; } ;
struct usb_hub {int child_usage_bits; struct usb_port** ports; } ;
struct TYPE_8__ {int kobj; } ;
struct usb_device {int portnum; TYPE_1__ dev; int ep0; scalar_t__ parent; int devnum; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*,char*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_3 (struct usb_device*) ;
 int FUNC_4 (struct usb_device*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (struct usb_device*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,char*) ;
 scalar_t__ FUNC_13 (int,int ) ;
 int FUNC_14 (int,int ) ;
 int FUNC_15 (struct usb_device*,int ) ;
 int FUNC_16 (struct usb_device*) ;
 struct usb_hub* FUNC_17 (scalar_t__) ;
 int FUNC_18 (struct usb_device*) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (struct usb_device*,int ) ;
 int FUNC_21 (struct usb_device*) ;

void FUNC_22(struct usb_device **VAR_2)
{
 struct usb_port *VAR_3 = ((void*)0);
 struct usb_device *VAR_4 = *VAR_2;
 struct usb_hub *VAR_5 = ((void*)0);
 int VAR_6 = 1;





 FUNC_20(VAR_4, VAR_0);
 FUNC_1(&VAR_4->dev, "USB disconnect, device number %d\n",
   VAR_4->devnum);





 FUNC_5(&VAR_4->dev);

 FUNC_18(VAR_4);

 FUNC_3(VAR_4);





 FUNC_0(&VAR_4->dev, "unregistering device\n");
 FUNC_15(VAR_4, 0);
 FUNC_16(VAR_4);

 if (VAR_4->parent) {
  VAR_6 = VAR_4->portnum;
  VAR_5 = FUNC_17(VAR_4->parent);
  VAR_3 = VAR_5->ports[VAR_6 - 1];

  FUNC_12(&VAR_4->dev.kobj, "port");
  FUNC_12(&VAR_3->dev.kobj, "device");





  if (!FUNC_14(VAR_6, VAR_5->child_usage_bits))
   FUNC_6(&VAR_3->dev);
 }

 FUNC_19(&VAR_4->ep0);
 FUNC_21(VAR_4);





 FUNC_2(&VAR_4->dev);




 FUNC_9(VAR_4);


 FUNC_10(&VAR_1);
 *VAR_2 = ((void*)0);
 FUNC_11(&VAR_1);

 if (VAR_3 && FUNC_13(VAR_6, VAR_5->child_usage_bits))
  FUNC_7(&VAR_3->dev);

 FUNC_4(VAR_4);

 FUNC_8(&VAR_4->dev);
}
