
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct lbs_private {int dummy; } ;
struct if_usb_card {int surprise_removed; struct lbs_private* priv; } ;


 int FUNC_0 (struct if_usb_card*) ;
 int FUNC_1 (struct usb_interface*) ;
 int FUNC_2 (struct lbs_private*) ;
 int FUNC_3 (struct lbs_private*) ;
 struct if_usb_card* FUNC_4 (struct usb_interface*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_7(struct usb_interface *VAR_0)
{
 struct if_usb_card *VAR_1 = FUNC_4(VAR_0);
 struct lbs_private *VAR_2 = VAR_1->priv;

 VAR_1->surprise_removed = 1;

 if (VAR_2) {
  FUNC_3(VAR_2);
  FUNC_2(VAR_2);
 }


 FUNC_0(VAR_1);

 FUNC_6(VAR_0, ((void*)0));
 FUNC_5(FUNC_1(VAR_0));
}
