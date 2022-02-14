
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct usb_card_rec {int adapter; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 struct usb_interface* FUNC_2 (struct device*) ;
 struct usb_card_rec* FUNC_3 (struct usb_interface*) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_1)
{
 struct usb_interface *VAR_2 = FUNC_2(VAR_1);
 struct usb_card_rec *VAR_3 = FUNC_3(VAR_2);

 FUNC_0(FUNC_1(VAR_3->adapter,
            VAR_0));
}
