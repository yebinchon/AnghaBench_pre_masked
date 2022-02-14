
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_gadget_driver {scalar_t__ max_speed; int function; } ;
struct usb_gadget {int dummy; } ;
struct isp1760_udc {int connected; TYPE_1__* isp; int gadget; scalar_t__ devstatus; int lock; struct usb_gadget_driver* driver; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*) ;
 struct isp1760_udc* FUNC_2 (struct usb_gadget*) ;
 int FUNC_3 (struct isp1760_udc*) ;
 int FUNC_4 (struct isp1760_udc*,int ,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static int FUNC_8(struct usb_gadget *VAR_6,
        struct usb_gadget_driver *VAR_7)
{
 struct isp1760_udc *VAR_8 = FUNC_2(VAR_6);
 unsigned long VAR_9;


 if (VAR_7->max_speed < VAR_4) {
  FUNC_1(VAR_8->isp->dev, "Invalid gadget driver\n");
  return -VAR_3;
 }

 FUNC_5(&VAR_8->lock, VAR_9);

 if (VAR_8->driver) {
  FUNC_1(VAR_8->isp->dev, "UDC already has a gadget driver\n");
  FUNC_6(&VAR_8->lock, VAR_9);
  return -VAR_2;
 }

 VAR_8->driver = VAR_7;

 FUNC_6(&VAR_8->lock, VAR_9);

 FUNC_0(VAR_8->isp->dev, "starting UDC with driver %s\n",
  VAR_7->function);

 VAR_8->devstatus = 0;
 VAR_8->connected = 1;

 FUNC_7(&VAR_8->gadget, VAR_5);


 FUNC_4(VAR_8, VAR_1, VAR_0);

 FUNC_3(VAR_8);

 FUNC_0(VAR_8->isp->dev, "UDC started with driver %s\n",
  VAR_7->function);

 return 0;
}
