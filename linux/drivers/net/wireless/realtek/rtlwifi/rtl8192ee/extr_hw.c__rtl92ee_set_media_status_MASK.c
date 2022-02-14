
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {scalar_t__ link_state; } ;
struct rtl_priv {TYPE_3__* cfg; TYPE_1__ mac80211; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;
typedef enum led_ctl_mode { ____Placeholder_led_ctl_mode } led_ctl_mode ;
struct TYPE_6__ {TYPE_2__* ops; } ;
struct TYPE_5__ {int (* led_control ) (struct ieee80211_hw*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;





 scalar_t__ VAR_12 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,...) ;
 int FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (struct ieee80211_hw*) ;
 int FUNC_5 (char*,int) ;
 struct rtl_priv* FUNC_6 (struct ieee80211_hw*) ;
 int FUNC_7 (struct rtl_priv*,scalar_t__) ;
 int FUNC_8 (struct rtl_priv*,scalar_t__,int) ;
 int FUNC_9 (struct ieee80211_hw*,int) ;

__attribute__((used)) static int FUNC_10(struct ieee80211_hw *VAR_13,
         enum nl80211_iftype VAR_14)
{
 struct rtl_priv *VAR_15 = FUNC_6(VAR_13);
 u8 VAR_16 = FUNC_7(VAR_15, VAR_7) & 0xfc;
 enum led_ctl_mode VAR_17 = VAR_5;
 u8 VAR_18 = VAR_11;

 switch (VAR_14) {
 case 128:
  VAR_18 = VAR_11;
  FUNC_0(VAR_15, VAR_1, VAR_2,
    "Set Network type to NO LINK!\n");
  break;
 case 132:
 case 130:
  VAR_18 = VAR_8;
  FUNC_0(VAR_15, VAR_1, VAR_2,
    "Set Network type to Ad Hoc!\n");
  break;
 case 129:
  VAR_18 = VAR_10;
  VAR_17 = VAR_4;
  FUNC_0(VAR_15, VAR_1, VAR_2,
    "Set Network type to STA!\n");
  break;
 case 131:
  VAR_18 = VAR_9;
  VAR_17 = VAR_4;
  FUNC_0(VAR_15, VAR_1, VAR_2,
    "Set Network type to AP!\n");
  break;
 default:
  FUNC_5("Network type %d not support!\n", VAR_14);
  return 1;
 }







 if (VAR_18 != VAR_9 && VAR_15->mac80211.link_state < VAR_6) {
  VAR_18 = VAR_11;
  VAR_17 = VAR_5;
 }

 if (VAR_18 == VAR_11 || VAR_18 == VAR_10) {
  FUNC_4(VAR_13);
  FUNC_2(VAR_13);
 } else if (VAR_18 == VAR_8 || VAR_18 == VAR_9) {
  FUNC_3(VAR_13);
  FUNC_1(VAR_13);
 } else {
  FUNC_0(VAR_15, VAR_0, VAR_3,
    "Set HW_VAR_MEDIA_STATUS: No such media status(%x).\n",
    VAR_18);
 }

 FUNC_8(VAR_15, VAR_7, VAR_16 | VAR_18);
 VAR_15->cfg->ops->led_control(VAR_13, VAR_17);
 if (VAR_18 == VAR_9)
  FUNC_8(VAR_15, VAR_12 + 1, 0x00);
 else
  FUNC_8(VAR_15, VAR_12 + 1, 0x66);
 return 0;
}
