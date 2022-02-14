
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl_ps_ctl {scalar_t__ support_backdoor; } ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 struct rtl_priv* FUNC_0 (struct ieee80211_hw*) ;
 struct rtl_ps_ctl* FUNC_1 (struct rtl_priv*) ;
 int FUNC_2 (struct rtl_priv*,int,int) ;
 int FUNC_3 (struct rtl_priv*,int,int) ;

__attribute__((used)) static void FUNC_4(struct ieee80211_hw *VAR_0)
{
 struct rtl_priv *VAR_1 = FUNC_0(VAR_0);
 struct rtl_ps_ctl *VAR_2 = FUNC_1(FUNC_0(VAR_0));

 FUNC_2(VAR_1, 0x34b, 0x93);
 FUNC_3(VAR_1, 0x350, 0x870c);
 FUNC_2(VAR_1, 0x352, 0x1);

 if (VAR_2->support_backdoor)
  FUNC_2(VAR_1, 0x349, 0x1b);
 else
  FUNC_2(VAR_1, 0x349, 0x03);

 FUNC_3(VAR_1, 0x350, 0x2718);
 FUNC_2(VAR_1, 0x352, 0x1);
}
