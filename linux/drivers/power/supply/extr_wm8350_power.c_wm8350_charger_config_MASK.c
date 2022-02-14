
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wm8350_charger_policy {int fast_limit_USB_mA; int trickle_start_mV; int charge_mV; int trickle_charge_USB_mA; int fast_limit_mA; int trickle_charge_mA; int charge_timeout; int eoc_mA; } ;
struct wm8350 {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct wm8350*,int ) ;
 int FUNC_5 (struct wm8350*) ;
 int FUNC_6 (struct wm8350*) ;
 int FUNC_7 (struct wm8350*,int ) ;
 int FUNC_8 (struct wm8350*) ;
 int FUNC_9 (struct wm8350*,int ,int) ;

__attribute__((used)) static int FUNC_10(struct wm8350 *VAR_8,
     struct wm8350_charger_policy *VAR_9)
{
 u16 VAR_10, VAR_11, VAR_12;

 if (!VAR_9) {
  FUNC_3(VAR_8->dev,
    "No charger policy, charger not configured.\n");
  return -VAR_0;
 }


 if (VAR_9->fast_limit_USB_mA > 500) {
  FUNC_2(VAR_8->dev, "USB fast charge > 500mA\n");
  return -VAR_0;
 }

 VAR_11 = FUNC_0(VAR_9->eoc_mA);

 FUNC_8(VAR_8);

 VAR_10 = FUNC_7(VAR_8, VAR_1)
  & VAR_3;
 FUNC_9(VAR_8, VAR_1,
    VAR_10 | VAR_11 | VAR_9->trickle_start_mV |
    VAR_5 |
    VAR_6 |
    VAR_4);

 if (FUNC_5(VAR_8) & VAR_7) {
  VAR_12 =
   FUNC_1(VAR_9->fast_limit_USB_mA);
  FUNC_9(VAR_8, VAR_2,
       VAR_9->charge_mV | VAR_9->trickle_charge_USB_mA |
       VAR_12 | FUNC_4(VAR_8,
      VAR_9->charge_timeout));

 } else {
  VAR_12 =
   FUNC_1(VAR_9->fast_limit_mA);
  FUNC_9(VAR_8, VAR_2,
       VAR_9->charge_mV | VAR_9->trickle_charge_mA |
       VAR_12 | FUNC_4(VAR_8,
      VAR_9->charge_timeout));
 }

 FUNC_6(VAR_8);
 return 0;
}
