
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct ath10k_usb {int ar; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct usb_interface*) ;
 struct ath10k_usb* FUNC_4 (struct usb_interface*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct usb_interface *VAR_0)
{
 struct ath10k_usb *VAR_1;

 VAR_1 = FUNC_4(VAR_0);
 if (!VAR_1)
  return;

 FUNC_1(VAR_1->ar);
 FUNC_2(VAR_1->ar);
 FUNC_5(FUNC_3(VAR_0));
 FUNC_0(VAR_1->ar);
}
