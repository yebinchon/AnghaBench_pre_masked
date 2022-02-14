
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct rtl_usb {int udev; } ;
struct rtl_priv {TYPE_3__* cfg; int usb_data; TYPE_1__* intf_ops; int status; int firmware_loading_complete; } ;
struct rtl_mac {int mac80211_registered; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_6__ {TYPE_2__* ops; } ;
struct TYPE_5__ {int (* deinit_sw_vars ) (struct ieee80211_hw*) ;int (* deinit_sw_leds ) (struct ieee80211_hw*) ;} ;
struct TYPE_4__ {int (* adapter_stop ) (struct ieee80211_hw*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct ieee80211_hw*) ;
 int FUNC_6 (struct ieee80211_hw*,int) ;
 struct rtl_mac* FUNC_7 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_8 (struct ieee80211_hw*) ;
 int FUNC_9 (struct ieee80211_hw*) ;
 struct rtl_usb* FUNC_10 (int ) ;
 int FUNC_11 (struct ieee80211_hw*) ;
 int FUNC_12 (struct ieee80211_hw*) ;
 int FUNC_13 (struct ieee80211_hw*) ;
 int FUNC_14 (struct ieee80211_hw*) ;
 scalar_t__ FUNC_15 (int) ;
 struct ieee80211_hw* FUNC_16 (struct usb_interface*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (struct usb_interface*,int *) ;
 int FUNC_19 (int *) ;

void FUNC_20(struct usb_interface *VAR_1)
{
 struct ieee80211_hw *VAR_2 = FUNC_16(VAR_1);
 struct rtl_priv *VAR_3 = FUNC_8(VAR_2);
 struct rtl_mac *VAR_4 = FUNC_7(FUNC_8(VAR_2));
 struct rtl_usb *VAR_5 = FUNC_10(FUNC_11(VAR_2));

 if (FUNC_15(!VAR_3))
  return;

 FUNC_19(&VAR_3->firmware_loading_complete);
 FUNC_1(VAR_0, &VAR_3->status);

 if (VAR_4->mac80211_registered == 1) {
  FUNC_3(VAR_2);
  VAR_4->mac80211_registered = 0;
 } else {
  FUNC_6(VAR_2, 0);
  VAR_3->intf_ops->adapter_stop(VAR_2);
 }


 FUNC_9(VAR_2);
 FUNC_5(VAR_2);
 FUNC_4(VAR_3->usb_data);
 VAR_3->cfg->ops->deinit_sw_leds(VAR_2);
 VAR_3->cfg->ops->deinit_sw_vars(VAR_2);
 FUNC_0(VAR_2);
 FUNC_17(VAR_5->udev);
 FUNC_18(VAR_1, ((void*)0));
 FUNC_2(VAR_2);
}
