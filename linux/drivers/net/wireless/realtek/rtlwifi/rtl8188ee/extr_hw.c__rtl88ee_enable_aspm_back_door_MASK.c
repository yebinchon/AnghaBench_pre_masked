
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct rtl_ps_ctl {scalar_t__ support_backdoor; } ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;
 struct rtl_ps_ctl* FUNC_2 (struct rtl_priv*) ;
 scalar_t__ FUNC_3 (struct rtl_priv*,int) ;
 int FUNC_4 (struct rtl_priv*,int) ;
 int FUNC_5 (struct rtl_priv*,int,int) ;
 int FUNC_6 (struct rtl_priv*,int,int) ;
 int FUNC_7 (struct rtl_priv*,int,int) ;
 int FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct ieee80211_hw *VAR_0)
{
 struct rtl_priv *VAR_1 = FUNC_1(VAR_0);
 struct rtl_ps_ctl *VAR_2 = FUNC_2(FUNC_1(VAR_0));
 u8 VAR_3 = 0;
 u32 VAR_4 = 0, VAR_5 = 0;

 FUNC_7(VAR_1, 0x354, 0x8104);
 FUNC_7(VAR_1, 0x358, 0x24);

 FUNC_7(VAR_1, 0x350, 0x70c);
 FUNC_5(VAR_1, 0x352, 0x2);
 VAR_3 = FUNC_3(VAR_1, 0x352);
 VAR_5 = 0;
 while (VAR_3 && VAR_5 < 20) {
  FUNC_8(10);
  VAR_3 = FUNC_3(VAR_1, 0x352);
  VAR_5++;
 }
 if (0 == VAR_3) {
  VAR_4 = FUNC_4(VAR_1, 0x34c);
  FUNC_6(VAR_1, 0x348, VAR_4|FUNC_0(31));
  FUNC_7(VAR_1, 0x350, 0xf70c);
  FUNC_5(VAR_1, 0x352, 0x1);
 }

 VAR_3 = FUNC_3(VAR_1, 0x352);
 VAR_5 = 0;
 while (VAR_3 && VAR_5 < 20) {
  FUNC_8(10);
  VAR_3 = FUNC_3(VAR_1, 0x352);
  VAR_5++;
 }

 FUNC_7(VAR_1, 0x350, 0x718);
 FUNC_5(VAR_1, 0x352, 0x2);
 VAR_3 = FUNC_3(VAR_1, 0x352);
 VAR_5 = 0;
 while (VAR_3 && VAR_5 < 20) {
  FUNC_8(10);
  VAR_3 = FUNC_3(VAR_1, 0x352);
  VAR_5++;
 }

 if (VAR_2->support_backdoor || (0 == VAR_3)) {
  VAR_4 = FUNC_4(VAR_1, 0x34c);
  FUNC_6(VAR_1, 0x348, VAR_4|FUNC_0(11)|FUNC_0(12));
  FUNC_7(VAR_1, 0x350, 0xf718);
  FUNC_5(VAR_1, 0x352, 0x1);
 }

 VAR_3 = FUNC_3(VAR_1, 0x352);
 VAR_5 = 0;
 while (VAR_3 && VAR_5 < 20) {
  FUNC_8(10);
  VAR_3 = FUNC_3(VAR_1, 0x352);
  VAR_5++;
 }
}
