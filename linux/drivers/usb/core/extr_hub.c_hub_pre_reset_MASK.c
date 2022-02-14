
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct usb_hub {int in_reset; } ;


 int VAR_0 ;
 int FUNC_0 (struct usb_hub*) ;
 int FUNC_1 (struct usb_hub*,int ) ;
 struct usb_hub* FUNC_2 (struct usb_interface*) ;

__attribute__((used)) static int FUNC_3(struct usb_interface *VAR_1)
{
 struct usb_hub *VAR_2 = FUNC_2(VAR_1);

 FUNC_1(VAR_2, VAR_0);
 VAR_2->in_reset = 1;
 FUNC_0(VAR_2);
 return 0;
}
