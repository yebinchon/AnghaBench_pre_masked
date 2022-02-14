
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct flexcop_usb {int fc_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct flexcop_usb*) ;
 int FUNC_3 (struct flexcop_usb*) ;
 int FUNC_4 (char*,int ) ;
 struct flexcop_usb* FUNC_5 (struct usb_interface*) ;

__attribute__((used)) static void FUNC_6(struct usb_interface *VAR_1)
{
 struct flexcop_usb *VAR_2 = FUNC_5(VAR_1);
 FUNC_3(VAR_2);
 FUNC_0(VAR_2->fc_dev);
 FUNC_2(VAR_2);
 FUNC_1(VAR_2->fc_dev);
 FUNC_4("%s successfully deinitialized and disconnected.", VAR_0);
}
