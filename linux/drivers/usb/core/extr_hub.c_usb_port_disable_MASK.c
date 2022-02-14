
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hub {int dummy; } ;
struct usb_device {int portnum; int parent; } ;


 int FUNC_0 (struct usb_hub*,int ,int ) ;
 struct usb_hub* FUNC_1 (int ) ;

int FUNC_2(struct usb_device *VAR_0)
{
 struct usb_hub *VAR_1 = FUNC_1(VAR_0->parent);

 return FUNC_0(VAR_1, VAR_0->portnum, 0);
}
