
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_ps_ctl {scalar_t__ wakeup_reason; } ;
struct rtl_priv {int dummy; } ;
struct rtl_hal {int last_suspend_sec; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,...) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_1 () ;
 struct rtl_hal* FUNC_2 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;
 struct rtl_ps_ctl* FUNC_4 (struct rtl_priv*) ;
 int FUNC_5 (struct rtl_priv*,int ) ;

__attribute__((used)) static void FUNC_6(struct ieee80211_hw *VAR_15)
{
 struct rtl_priv *VAR_16 = FUNC_3(VAR_15);
 struct rtl_hal *VAR_17 = FUNC_2(FUNC_3(VAR_15));
 struct rtl_ps_ctl *VAR_18 = FUNC_4(VAR_16);
 u8 VAR_19 = 0;

 VAR_19 = FUNC_5(VAR_16, VAR_3);

 FUNC_0(VAR_16, VAR_0, VAR_2, "WOL Read 0x1c7 = %02X\n",
   VAR_19);

 VAR_18->wakeup_reason = 0;

 VAR_17->last_suspend_sec = FUNC_1();

 switch (VAR_19) {
 case 132:
  VAR_18->wakeup_reason = VAR_10;
  FUNC_0(VAR_16, VAR_0, VAR_1,
    "It's a WOL PTK Key update event!\n");
  break;
 case 135:
  VAR_18->wakeup_reason = VAR_7;
  FUNC_0(VAR_16, VAR_0, VAR_1,
    "It's a WOL GTK Key update event!\n");
  break;
 case 137:
  VAR_18->wakeup_reason = VAR_6;
  FUNC_0(VAR_16, VAR_0, VAR_1,
    "It's a disassociation event!\n");
  break;
 case 138:
  VAR_18->wakeup_reason = VAR_5;
  FUNC_0(VAR_16, VAR_0, VAR_1,
    "It's a deauth event!\n");
  break;
 case 136:
  VAR_18->wakeup_reason = VAR_4;
  FUNC_0(VAR_16, VAR_0, VAR_1,
    "It's a Fw disconnect decision (AP lost) event!\n");
 break;
 case 134:
  VAR_18->wakeup_reason = VAR_8;
  FUNC_0(VAR_16, VAR_0, VAR_1,
    "It's a magic packet event!\n");
  break;
 case 128:
  VAR_18->wakeup_reason = VAR_14;
  FUNC_0(VAR_16, VAR_0, VAR_1,
    "It's an unicast packet event!\n");
  break;
 case 133:
  VAR_18->wakeup_reason = VAR_9;
  FUNC_0(VAR_16, VAR_0, VAR_1,
    "It's a pattern match event!\n");
  break;
 case 129:
  VAR_18->wakeup_reason = VAR_13;
  FUNC_0(VAR_16, VAR_0, VAR_1,
    "It's an RTD3 Ssid match event!\n");
  break;
 case 130:
  VAR_18->wakeup_reason = VAR_12;
  FUNC_0(VAR_16, VAR_0, VAR_1,
    "It's an RealWoW wake packet event!\n");
  break;
 case 131:
  VAR_18->wakeup_reason = VAR_11;
  FUNC_0(VAR_16, VAR_0, VAR_1,
    "It's an RealWoW ack lost event!\n");
  break;
 default:
  FUNC_0(VAR_16, VAR_0, VAR_1,
    "WOL Read 0x1c7 = %02X, Unknown reason!\n",
     VAR_19);
  break;
 }
}
