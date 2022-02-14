
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
 int VAR_3 ;
 int VAR_4 ;




 int FUNC_0 (struct rtl_priv*,int ,int ,char*,...) ;
 int FUNC_1 (struct ieee80211_hw*,int) ;
 int FUNC_2 (struct ieee80211_hw*,int ,int) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (struct ieee80211_hw*,int ,int,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static bool FUNC_6(struct ieee80211_hw *VAR_5)
{
 struct rtl_priv *VAR_6 = FUNC_3(VAR_5);
 struct rtl_phy *VAR_7 = &VAR_6->phy;
 u32 VAR_8 = 0;
 u8 VAR_9;
 bool VAR_10 = 1;
 struct bb_reg_def *VAR_11;

 for (VAR_9 = 0; VAR_9 < VAR_7->num_total_rfpath; VAR_9++) {
  VAR_11 = &VAR_7->phyreg_def[VAR_9];

  switch (VAR_9) {
  case 131:
  case 129:
   VAR_8 = FUNC_2(VAR_5, VAR_11->rfintfs,
          VAR_2);
   break;
  case 130:
  case 128:
   VAR_8 = FUNC_2(VAR_5, VAR_11->rfintfs,
          VAR_2 << 16);
   break;
  }

  FUNC_4(VAR_5, VAR_11->rfintfe, VAR_2 << 16, 0x1);
  FUNC_5(1);

  FUNC_4(VAR_5, VAR_11->rfintfo, VAR_2, 0x1);
  FUNC_5(1);

  FUNC_4(VAR_5, VAR_11->rfhssi_para2,
         VAR_0, 0x0);
  FUNC_5(1);

  FUNC_4(VAR_5, VAR_11->rfhssi_para2, VAR_1, 0x0);
  FUNC_5(1);

  switch (VAR_9) {
  case 131:
   VAR_10 = FUNC_1(VAR_5,
             (enum radio_path)VAR_9);
   break;
  case 130:
   VAR_10 = FUNC_1(VAR_5,
             (enum radio_path)VAR_9);
   break;
  case 129:
   break;
  case 128:
   break;
  }

  switch (VAR_9) {
  case 131:
  case 129:
   FUNC_4(VAR_5, VAR_11->rfintfs,
          VAR_2, VAR_8);
   break;
  case 130:
  case 128:
   FUNC_4(VAR_5, VAR_11->rfintfs,
          VAR_2 << 16, VAR_8);
   break;
  }

  if (!VAR_10) {
   FUNC_0(VAR_6, VAR_3, VAR_4,
     "Radio[%d] Fail!!\n", VAR_9);
   return 0;
  }
 }

 FUNC_0(VAR_6, VAR_3, VAR_4, "\n");
 return VAR_10;
}
