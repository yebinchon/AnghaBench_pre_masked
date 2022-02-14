
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
struct rtl_phy {size_t num_total_rfpath; struct bb_reg_def* phyreg_def; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct ieee80211_hw {int dummy; } ;
struct bb_reg_def {int rfintfs; int rfhssi_para2; int rfintfo; int rfintfe; } ;
typedef enum radio_path { ____Placeholder_radio_path } radio_path ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int FUNC_0 (char*,size_t) ;
 int FUNC_1 (struct ieee80211_hw*,int) ;
 int FUNC_2 (struct ieee80211_hw*,int ,int) ;
 int FUNC_3 (struct ieee80211_hw*,int ,int,int) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;

bool FUNC_5(struct ieee80211_hw *VAR_3)
{
 struct rtl_priv *VAR_4 = FUNC_4(VAR_3);
 struct rtl_phy *VAR_5 = &(VAR_4->phy);
 u32 VAR_6 = 0;
 u8 VAR_7;
 bool VAR_8 = 1;
 struct bb_reg_def *VAR_9;


 for (VAR_7 = 0; VAR_7 < VAR_5->num_total_rfpath; VAR_7++) {

  VAR_9 = &VAR_5->phyreg_def[VAR_7];


  switch (VAR_7) {
  case 131:
  case 129:
   VAR_6 = FUNC_2(VAR_3,
           VAR_9->rfintfs,
           VAR_2);
   break;
  case 130:
  case 128:
   VAR_6 = FUNC_2(VAR_3,
           VAR_9->rfintfs,
           VAR_2 << 16);
   break;
  }


  FUNC_3(VAR_3, VAR_9->rfintfe,
          VAR_2 << 16, 0x1);


  FUNC_3(VAR_3, VAR_9->rfintfo, VAR_2, 0x1);


  FUNC_3(VAR_3, VAR_9->rfhssi_para2,
    VAR_0, 0x0);
  FUNC_3(VAR_3, VAR_9->rfhssi_para2,
    VAR_1, 0x0);


  switch (VAR_7) {
  case 131:
   VAR_8 = FUNC_1(VAR_3,
      (enum radio_path)VAR_7);
   break;
  case 130:
   VAR_8 = FUNC_1(VAR_3,
      (enum radio_path)VAR_7);
   break;
  case 129:
   break;
  case 128:
   break;
  }


  switch (VAR_7) {
  case 131:
  case 129:
   FUNC_3(VAR_3, VAR_9->rfintfs, VAR_2,
           VAR_6);
   break;
  case 130:
  case 128:
   FUNC_3(VAR_3, VAR_9->rfintfs,
           VAR_2 << 16,
           VAR_6);
   break;
  }

  if (!VAR_8) {
   FUNC_0("Radio[%d] Fail!!\n", VAR_7);
   goto fail;
  }

 }

 return VAR_8;

fail:
 return VAR_8;
}
