
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct rtl_priv {TYPE_2__* cfg; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;
typedef enum led_ctl_mode { ____Placeholder_led_ctl_mode } led_ctl_mode ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* led_control ) (struct ieee80211_hw*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;




 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
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

__attribute__((used)) static int FUNC_10(struct ieee80211_hw *VAR_14,
         enum nl80211_iftype VAR_15)
{
 struct rtl_priv *VAR_16 = FUNC_6(VAR_14);
 u8 VAR_17 = FUNC_7(VAR_16, VAR_6);
 enum led_ctl_mode VAR_18 = VAR_5;
 u8 VAR_19;

 VAR_17 &= 0xfc;

 if (VAR_15 == 128 ||
     VAR_15 == 129) {
  FUNC_4(VAR_14);
  FUNC_2(VAR_14);
 } else if (VAR_15 == 131 ||
  VAR_15 == 130) {
  FUNC_3(VAR_14);
  FUNC_1(VAR_14);
 } else {
  FUNC_0(VAR_16, VAR_0, VAR_3,
    "Set HW_VAR_MEDIA_STATUS: No such media status(%x)\n",
    VAR_15);
 }
 VAR_19 = FUNC_7(VAR_16, VAR_13);
 switch (VAR_15) {
 case 128:
  VAR_17 |= VAR_11;
  VAR_18 = VAR_4;
  VAR_19 &= 0xF7;
  FUNC_0(VAR_16, VAR_1, VAR_2,
    "Set Network type to NO LINK!\n");
  break;
 case 131:
  VAR_17 |= VAR_7;
  VAR_19 |= 0x08;
  FUNC_0(VAR_16, VAR_1, VAR_2,
    "Set Network type to Ad Hoc!\n");
  break;
 case 129:
  VAR_17 |= VAR_9;
  VAR_18 = VAR_4;
  VAR_19 &= 0xF7;
  FUNC_0(VAR_16, VAR_1, VAR_2,
    "Set Network type to STA!\n");
  break;
 case 130:
  VAR_17 |= VAR_8;
  VAR_19 |= 0x08;
  FUNC_0(VAR_16, VAR_1, VAR_2,
    "Set Network type to AP!\n");
  break;
 default:
  FUNC_5("Network type %d not supported!\n", VAR_15);
  return 1;
 }
 FUNC_8(VAR_16, VAR_6, VAR_17);
 VAR_16->cfg->ops->led_control(VAR_14, VAR_18);
 if ((VAR_17 & VAR_10) == VAR_8)
  FUNC_8(VAR_16, VAR_12 + 1, 0x00);
 else
  FUNC_8(VAR_16, VAR_12 + 1, 0x66);
 return 0;
}
