
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct ath6kl_usb {int ar; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ath6kl_usb*) ;
 int FUNC_3 (int) ;
 struct ath6kl_usb* FUNC_4 (struct usb_interface*) ;

__attribute__((used)) static void FUNC_5(struct usb_interface *VAR_0)
{
 struct ath6kl_usb *VAR_1;

 VAR_1 = FUNC_4(VAR_0);
 if (VAR_1 == ((void*)0))
  return;

 FUNC_1(VAR_1->ar);


 FUNC_3(20);
 FUNC_0(VAR_1->ar);
 FUNC_2(VAR_1);
}
