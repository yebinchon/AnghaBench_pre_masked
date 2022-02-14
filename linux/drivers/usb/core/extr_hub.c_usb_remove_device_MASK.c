
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct usb_hub {int removed_bits; int intfdev; } ;
struct usb_device {int portnum; int parent; } ;


 int VAR_0 ;
 int FUNC_0 (struct usb_hub*,int ) ;
 int FUNC_1 (int ,int ) ;
 struct usb_interface* FUNC_2 (int ) ;
 int FUNC_3 (struct usb_interface*) ;
 int FUNC_4 (struct usb_interface*) ;
 struct usb_hub* FUNC_5 (int ) ;

int FUNC_6(struct usb_device *VAR_1)
{
 struct usb_hub *VAR_2;
 struct usb_interface *VAR_3;

 if (!VAR_1->parent)
  return -VAR_0;
 VAR_2 = FUNC_5(VAR_1->parent);
 VAR_3 = FUNC_2(VAR_2->intfdev);

 FUNC_3(VAR_3);
 FUNC_1(VAR_1->portnum, VAR_2->removed_bits);
 FUNC_0(VAR_2, VAR_1->portnum);
 FUNC_4(VAR_3);
 return 0;
}
