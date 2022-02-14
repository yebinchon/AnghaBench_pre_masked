
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct rtl_usb_priv {int dummy; } ;
struct rtl_usb {int out_ep_nums; int out_queue_sel; } ;
struct rtl_priv {TYPE_2__* cfg; } ;
struct rtl_hal {int version; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* set_bw_mode ) (struct ieee80211_hw*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct ieee80211_hw*,int) ;
 int FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (struct ieee80211_hw*) ;
 int FUNC_5 (struct ieee80211_hw*,int,int,int) ;
 int FUNC_6 (struct ieee80211_hw*,int,int,int) ;
 int FUNC_7 (struct ieee80211_hw*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (struct ieee80211_hw*) ;
 int FUNC_10 (struct ieee80211_hw*) ;
 int FUNC_11 (struct ieee80211_hw*) ;
 int FUNC_12 (struct ieee80211_hw*,int ) ;
 int FUNC_13 (struct ieee80211_hw*) ;
 int FUNC_14 (struct ieee80211_hw*) ;
 int FUNC_15 (struct ieee80211_hw*,int ) ;
 int FUNC_16 (struct ieee80211_hw*) ;
 int FUNC_17 (struct ieee80211_hw*) ;
 int FUNC_18 (struct ieee80211_hw*) ;
 int FUNC_19 (struct ieee80211_hw*,int ) ;
 struct rtl_hal* FUNC_20 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_21 (struct ieee80211_hw*) ;
 struct rtl_usb* FUNC_22 (struct rtl_usb_priv*) ;
 struct rtl_usb_priv* FUNC_23 (struct ieee80211_hw*) ;
 int FUNC_24 (struct ieee80211_hw*,int ) ;

__attribute__((used)) static int FUNC_25(struct ieee80211_hw *VAR_6)
{
 struct rtl_priv *VAR_7 = FUNC_21(VAR_6);
 struct rtl_hal *VAR_8 = FUNC_20(FUNC_21(VAR_6));
 struct rtl_usb_priv *VAR_9 = FUNC_23(VAR_6);
 struct rtl_usb *VAR_10 = FUNC_22(VAR_9);
 int VAR_11 = 0;
 u32 VAR_12 = 0;
 u8 VAR_13 = 0;
 u8 VAR_14 = VAR_10->out_ep_nums;
 u8 VAR_15 = VAR_10->out_queue_sel;

 VAR_11 = FUNC_4(VAR_6);

 if (VAR_11) {
  FUNC_8("Failed to init power on!\n");
  return VAR_11;
 }
 if (!VAR_13) {
  VAR_12 = VAR_3;
 } else {
  VAR_12 = (FUNC_1(VAR_8->version))
     ? VAR_5
     : VAR_4;
 }
 if (0 == FUNC_15(VAR_6, VAR_12)) {
  FUNC_8("Failed to init LLT Table!\n");
  return -VAR_0;
 }
 FUNC_6(VAR_6, VAR_13, VAR_14,
       VAR_15);
 FUNC_2(VAR_6, VAR_13);
 FUNC_5(VAR_6, VAR_13, VAR_14,
         VAR_15);

 FUNC_12(VAR_6, VAR_2);
 FUNC_14(VAR_6);
 FUNC_16(VAR_6);
 FUNC_7(VAR_6);
 FUNC_9(VAR_6);
 FUNC_13(VAR_6);
 FUNC_17(VAR_6);
 FUNC_18(VAR_6);
 VAR_7->cfg->ops->set_bw_mode(VAR_6, VAR_1);
 FUNC_19(VAR_6, FUNC_0(VAR_8->version));
 FUNC_3(VAR_6);
 FUNC_10(VAR_6);
 FUNC_11(VAR_6);
 return VAR_11;
}
