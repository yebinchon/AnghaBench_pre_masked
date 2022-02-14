
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtl_ps_ctl {scalar_t__ last_delaylps_stamp_jiffies; } ;
struct rtl_priv {int dummy; } ;
struct rtl_mac {scalar_t__ link_state; scalar_t__ opmode; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (scalar_t__) ;
 struct rtl_mac* FUNC_2 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;
 struct rtl_ps_ctl* FUNC_4 (struct rtl_priv*) ;

__attribute__((used)) static bool FUNC_5(struct ieee80211_hw *VAR_5)
{
 struct rtl_priv *VAR_6 = FUNC_3(VAR_5);
 struct rtl_mac *VAR_7 = FUNC_2(FUNC_3(VAR_5));
 struct rtl_ps_ctl *VAR_8 = FUNC_4(FUNC_3(VAR_5));
 u32 VAR_9;

 VAR_9 = FUNC_1(VAR_4 -
           VAR_8->last_delaylps_stamp_jiffies);

 if (VAR_9 < 2000) {
  FUNC_0(VAR_6, VAR_0, VAR_1,
    "Delay enter Fw LPS for DHCP, ARP, or EAPOL exchanging state\n");
  return 0;
 }

 if (VAR_7->link_state != VAR_2)
  return 0;

 if (VAR_7->opmode == VAR_3)
  return 0;

 return 1;
}
