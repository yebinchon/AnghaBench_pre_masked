
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct rtl_priv*,int ,int) ;

void FUNC_4(struct ieee80211_hw *VAR_3, int VAR_4)
{
 struct rtl_priv *VAR_5 = FUNC_2(VAR_3);
 FUNC_1(VAR_3);

 switch (VAR_4) {
 case 130:
  FUNC_3(VAR_5, VAR_0, 0xa44f);
  break;
 case 131:

  break;
 case 129:
  FUNC_3(VAR_5, VAR_1, 0x5e4322);
  break;
 case 128:
  FUNC_3(VAR_5, VAR_2, 0x2f3222);
  break;
 default:
  FUNC_0(1, "rtl8192se: invalid aci: %d !\n", VAR_4);
  break;
 }
}
