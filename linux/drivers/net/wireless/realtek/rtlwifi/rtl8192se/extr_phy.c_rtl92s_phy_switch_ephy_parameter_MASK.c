
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl_ps_ctl {int support_backdoor; scalar_t__ support_aspm; } ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;
 struct rtl_ps_ctl* FUNC_2 (struct rtl_priv*) ;
 int FUNC_3 (struct rtl_priv*,int,int) ;
 int FUNC_4 (struct rtl_priv*,int,int) ;
 int FUNC_5 (struct rtl_priv*,int,int) ;

void FUNC_6(struct ieee80211_hw *VAR_0)
{
 struct rtl_priv *VAR_1 = FUNC_1(VAR_0);
 struct rtl_ps_ctl *VAR_2 = FUNC_2(FUNC_1(VAR_0));





 FUNC_4(VAR_1, 0x540, 0x73c11);
 FUNC_4(VAR_1, 0x548, 0x2407c);


 FUNC_5(VAR_1, 0x550, 0x1000);
 FUNC_3(VAR_1, 0x554, 0x20);
 FUNC_0(VAR_0);

 FUNC_5(VAR_1, 0x550, 0xa0eb);
 FUNC_3(VAR_1, 0x554, 0x3e);
 FUNC_0(VAR_0);

 FUNC_5(VAR_1, 0x550, 0xff80);
 FUNC_3(VAR_1, 0x554, 0x39);
 FUNC_0(VAR_0);


 if (VAR_2->support_aspm && !VAR_2->support_backdoor)
  FUNC_3(VAR_1, 0x560, 0x40);
 else
  FUNC_3(VAR_1, 0x560, 0x00);

}
