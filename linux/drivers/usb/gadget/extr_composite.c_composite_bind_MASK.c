
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_gadget_driver {int dummy; } ;
struct usb_gadget {int ep0; } ;
struct usb_composite_driver {int (* bind ) (struct usb_composite_dev*) ;int name; scalar_t__ needs_serial; int dev; } ;
struct TYPE_2__ {int iSerialNumber; } ;
struct usb_composite_dev {TYPE_1__ desc; scalar_t__ use_os_string; int gstrings; int configs; struct usb_gadget* gadget; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct usb_composite_dev*,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct usb_composite_dev*,char*) ;
 int FUNC_3 (struct usb_gadget*,int) ;
 int FUNC_4 (struct usb_composite_driver*,struct usb_composite_dev*) ;
 int FUNC_5 (struct usb_composite_dev*,int ) ;
 struct usb_composite_dev* FUNC_6 (int,int ) ;
 int FUNC_7 (struct usb_gadget*,struct usb_composite_dev*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct usb_composite_dev*) ;
 struct usb_composite_driver* FUNC_10 (struct usb_gadget_driver*) ;
 int FUNC_11 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_12(struct usb_gadget *VAR_2,
  struct usb_gadget_driver *VAR_3)
{
 struct usb_composite_dev *VAR_4;
 struct usb_composite_driver *VAR_5 = FUNC_10(VAR_3);
 int VAR_6 = -VAR_0;

 VAR_4 = FUNC_6(sizeof *VAR_4, VAR_1);
 if (!VAR_4)
  return VAR_6;

 FUNC_8(&VAR_4->lock);
 VAR_4->gadget = VAR_2;
 FUNC_7(VAR_2, VAR_4);
 FUNC_1(&VAR_4->configs);
 FUNC_1(&VAR_4->gstrings);

 VAR_6 = FUNC_4(VAR_5, VAR_4);
 if (VAR_6)
  goto fail;





 VAR_6 = VAR_5->bind(VAR_4);
 if (VAR_6 < 0)
  goto fail;

 if (VAR_4->use_os_string) {
  VAR_6 = FUNC_5(VAR_4, VAR_2->ep0);
  if (VAR_6)
   goto fail;
 }

 FUNC_11(&VAR_4->desc, VAR_5->dev);


 if (VAR_5->needs_serial && !VAR_4->desc.iSerialNumber)
  FUNC_2(VAR_4, "userspace failed to provide iSerialNumber\n");

 FUNC_0(VAR_4, "%s ready\n", VAR_5->name);
 return 0;

fail:
 FUNC_3(VAR_2, 0);
 return VAR_6;
}
