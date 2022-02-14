
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_phy {int num_total_rfpath; int* rfreg_chnlval; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,int) ;
 int FUNC_2 (char*,int) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (struct ieee80211_hw*,int,int ,int,int) ;

void FUNC_5(struct ieee80211_hw *VAR_3, u8 VAR_4)
{
 struct rtl_priv *VAR_5 = FUNC_3(VAR_3);
 struct rtl_phy *VAR_6 = &(VAR_5->phy);
 u8 VAR_7;

 switch (VAR_4) {
 case 129:
  for (VAR_7 = 0; VAR_7 < VAR_6->num_total_rfpath; VAR_7++) {
   VAR_6->rfreg_chnlval[VAR_7] = ((VAR_6->rfreg_chnlval
     [VAR_7] & 0xfffff3ff) | 0x0400);
   FUNC_4(VAR_3, VAR_7, VAR_2, FUNC_0(10) |
          FUNC_0(11), 0x01);

   FUNC_1(VAR_5, VAR_0, VAR_1,
     "20M RF 0x18 = 0x%x\n",
     VAR_6->rfreg_chnlval[VAR_7]);
  }

  break;
 case 128:
  for (VAR_7 = 0; VAR_7 < VAR_6->num_total_rfpath; VAR_7++) {
   VAR_6->rfreg_chnlval[VAR_7] =
       ((VAR_6->rfreg_chnlval[VAR_7] & 0xfffff3ff));
   FUNC_4(VAR_3, VAR_7, VAR_2, FUNC_0(10) | FUNC_0(11),
          0x00);
   FUNC_1(VAR_5, VAR_0, VAR_1,
     "40M RF 0x18 = 0x%x\n",
     VAR_6->rfreg_chnlval[VAR_7]);
  }
  break;
 default:
  FUNC_2("unknown bandwidth: %#X\n", VAR_4);
  break;
 }
}
