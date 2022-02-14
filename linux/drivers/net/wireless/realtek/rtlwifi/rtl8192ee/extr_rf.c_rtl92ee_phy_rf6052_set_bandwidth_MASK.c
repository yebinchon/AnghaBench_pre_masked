
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_phy {int* rfreg_chnlval; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,int) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct ieee80211_hw*,int ,int ,int ,int) ;

void FUNC_4(struct ieee80211_hw *VAR_4, u8 VAR_5)
{
 struct rtl_priv *VAR_6 = FUNC_2(VAR_4);
 struct rtl_phy *VAR_7 = &VAR_6->phy;

 switch (VAR_5) {
 case 129:
  VAR_7->rfreg_chnlval[0] = ((VAR_7->rfreg_chnlval[0] &
          0xfffff3ff) | FUNC_0(10) | FUNC_0(11));
  FUNC_3(VAR_4, VAR_0, VAR_3, VAR_2,
         VAR_7->rfreg_chnlval[0]);
  FUNC_3(VAR_4, VAR_1, VAR_3, VAR_2,
         VAR_7->rfreg_chnlval[0]);
  break;
 case 128:
  VAR_7->rfreg_chnlval[0] = ((VAR_7->rfreg_chnlval[0] &
          0xfffff3ff) | FUNC_0(10));
  FUNC_3(VAR_4, VAR_0, VAR_3, VAR_2,
         VAR_7->rfreg_chnlval[0]);
  FUNC_3(VAR_4, VAR_1, VAR_3, VAR_2,
         VAR_7->rfreg_chnlval[0]);
  break;
 default:
  FUNC_1("unknown bandwidth: %#X\n", VAR_5);
  break;
 }
}
