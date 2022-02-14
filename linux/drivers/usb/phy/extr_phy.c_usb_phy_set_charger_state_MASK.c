
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_phy {int chg_state; int chg_work; int chg_type; int (* charger_detect ) (struct usb_phy*) ;} ;
typedef enum usb_charger_state { ____Placeholder_usb_charger_state } usb_charger_state ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct usb_phy*) ;

void FUNC_2(struct usb_phy *VAR_2,
          enum usb_charger_state VAR_3)
{
 if (VAR_2->chg_state == VAR_3 || !VAR_2->charger_detect)
  return;

 VAR_2->chg_state = VAR_3;
 if (VAR_2->chg_state == VAR_1)
  VAR_2->chg_type = VAR_2->charger_detect(VAR_2);
 else
  VAR_2->chg_type = VAR_0;

 FUNC_0(&VAR_2->chg_work);
}
