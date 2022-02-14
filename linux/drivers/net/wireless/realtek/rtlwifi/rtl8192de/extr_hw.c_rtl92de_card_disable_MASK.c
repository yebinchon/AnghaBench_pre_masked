
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rtl_ps_ctl {scalar_t__ rfoff_reason; } ;
struct TYPE_6__ {int interfaceindex; } ;
struct rtl_priv {TYPE_3__ rtlhal; TYPE_2__* cfg; } ;
struct rtl_pci {scalar_t__ driver_is_goingto_unload; } ;
struct rtl_mac {int link_state; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;
struct TYPE_5__ {TYPE_1__* ops; } ;
struct TYPE_4__ {int (* led_control ) (struct ieee80211_hw*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (struct rtl_ps_ctl*,int ) ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*) ;
 int FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct ieee80211_hw*,int) ;
 scalar_t__ FUNC_4 (struct ieee80211_hw*) ;
 struct rtl_mac* FUNC_5 (struct rtl_priv*) ;
 struct rtl_pci* FUNC_6 (int ) ;
 int FUNC_7 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_8 (struct ieee80211_hw*) ;
 struct rtl_ps_ctl* FUNC_9 (struct rtl_priv*) ;
 int FUNC_10 (struct ieee80211_hw*,int ,int,int) ;
 int FUNC_11 (struct ieee80211_hw*,int ,int,int ,int) ;
 int FUNC_12 (struct rtl_priv*,scalar_t__,int) ;
 int FUNC_13 (struct ieee80211_hw*,int ) ;
 int FUNC_14 (int) ;

void FUNC_15(struct ieee80211_hw *VAR_18)
{
 struct rtl_priv *VAR_19 = FUNC_8(VAR_18);
 struct rtl_ps_ctl *VAR_20 = FUNC_9(FUNC_8(VAR_18));
 struct rtl_pci *VAR_21 = FUNC_6(FUNC_7(VAR_18));
 struct rtl_mac *VAR_22 = FUNC_5(FUNC_8(VAR_18));
 enum nl80211_iftype VAR_23;

 VAR_22->link_state = VAR_4;
 VAR_23 = VAR_6;
 FUNC_3(VAR_18, VAR_23);

 if (VAR_21->driver_is_goingto_unload ||
     VAR_20->rfoff_reason > VAR_14)
  VAR_19->cfg->ops->led_control(VAR_18, VAR_3);
 FUNC_0(VAR_20, VAR_17);
 FUNC_12(VAR_19, VAR_9 + 1, 0xFE);
 FUNC_14(50);





 FUNC_10(VAR_18, VAR_12, 0x00f00000, 0xf);
 FUNC_11(VAR_18, VAR_11, 0x00, VAR_13, 0x00);


 FUNC_12(VAR_19, VAR_7, 0x40);


 FUNC_10(VAR_18, VAR_15, VAR_5, 0);
 FUNC_10(VAR_18, VAR_16, VAR_0, 0);


 FUNC_12(VAR_19, VAR_10, 0xE2);



 if (VAR_19->rtlhal.interfaceindex == 1)
  FUNC_12(VAR_19, VAR_10, 0xE0);
 FUNC_14(50);



 FUNC_12(VAR_19, VAR_9 + 1, 0xff);
 FUNC_14(50);
 FUNC_12(VAR_19, VAR_8, 0x0);
 FUNC_1(VAR_19, VAR_1, VAR_2, "==> Do power off.......\n");
 if (FUNC_4(VAR_18))
  FUNC_2(VAR_18);
 return;
}
