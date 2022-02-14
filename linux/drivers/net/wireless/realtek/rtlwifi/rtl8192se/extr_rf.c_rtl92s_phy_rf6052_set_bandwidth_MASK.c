
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_phy {int* rfreg_chnlval; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct ieee80211_hw {int dummy; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct ieee80211_hw*,int ,int ,int ,int) ;

void FUNC_3(struct ieee80211_hw *VAR_3, u8 VAR_4)
{
 struct rtl_priv *VAR_5 = FUNC_1(VAR_3);
 struct rtl_phy *VAR_6 = &(VAR_5->phy);

 switch (VAR_4) {
 case 129:
  VAR_6->rfreg_chnlval[0] = ((VAR_6->rfreg_chnlval[0] &
        0xfffff3ff) | 0x0400);
  FUNC_2(VAR_3, VAR_0, VAR_2, VAR_1,
     VAR_6->rfreg_chnlval[0]);
  break;
 case 128:
  VAR_6->rfreg_chnlval[0] = ((VAR_6->rfreg_chnlval[0] &
         0xfffff3ff));
  FUNC_2(VAR_3, VAR_0, VAR_2, VAR_1,
     VAR_6->rfreg_chnlval[0]);
  break;
 default:
  FUNC_0("unknown bandwidth: %#X\n", VAR_4);
  break;
 }
}
