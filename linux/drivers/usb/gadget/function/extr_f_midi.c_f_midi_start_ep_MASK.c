
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_function {TYPE_1__* config; } ;
struct usb_ep {struct f_midi* driver_data; int name; } ;
struct usb_composite_dev {int dummy; } ;
struct f_midi {int gadget; } ;
struct TYPE_2__ {struct usb_composite_dev* cdev; } ;


 int FUNC_0 (struct usb_composite_dev*,char*,int ,int) ;
 int FUNC_1 (int ,struct usb_function*,struct usb_ep*) ;
 int FUNC_2 (struct usb_ep*) ;
 int FUNC_3 (struct usb_ep*) ;

__attribute__((used)) static int FUNC_4(struct f_midi *VAR_0,
      struct usb_function *VAR_1,
      struct usb_ep *VAR_2)
{
 int VAR_3;
 struct usb_composite_dev *VAR_4 = VAR_1->config->cdev;

 FUNC_2(VAR_2);

 VAR_3 = FUNC_1(VAR_0->gadget, VAR_1, VAR_2);
 if (VAR_3) {
  FUNC_0(VAR_4, "can't configure %s: %d\n", VAR_2->name, VAR_3);
  return VAR_3;
 }

 VAR_3 = FUNC_3(VAR_2);
 if (VAR_3) {
  FUNC_0(VAR_4, "can't start %s: %d\n", VAR_2->name, VAR_3);
  return VAR_3;
 }

 VAR_2->driver_data = VAR_0;

 return 0;
}
