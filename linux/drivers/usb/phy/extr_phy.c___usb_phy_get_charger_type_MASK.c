
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_phy {int chg_work; void* chg_state; int chg_type; int edev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct usb_phy *VAR_11)
{
 if (FUNC_0(VAR_11->edev, VAR_6) > 0) {
  VAR_11->chg_type = VAR_7;
  VAR_11->chg_state = VAR_10;
 } else if (FUNC_0(VAR_11->edev, VAR_4) > 0) {
  VAR_11->chg_type = VAR_1;
  VAR_11->chg_state = VAR_10;
 } else if (FUNC_0(VAR_11->edev, VAR_5) > 0) {
  VAR_11->chg_type = VAR_2;
  VAR_11->chg_state = VAR_10;
 } else if (FUNC_0(VAR_11->edev, VAR_3) > 0) {
  VAR_11->chg_type = VAR_0;
  VAR_11->chg_state = VAR_10;
 } else {
  VAR_11->chg_type = VAR_8;
  VAR_11->chg_state = VAR_9;
 }

 FUNC_1(&VAR_11->chg_work);
}
