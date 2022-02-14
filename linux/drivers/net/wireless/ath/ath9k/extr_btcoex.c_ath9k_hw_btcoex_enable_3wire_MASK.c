
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath_btcoex_hw {int bt_coex_mode; int bt_coex_mode2; int bt_coex_mode3; int* wlan_weight; int* bt_weight; int bt_coex_weights; int wlanactive_gpio; } ;
struct ath_hw {struct ath_btcoex_hw btcoex_hw; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 scalar_t__ FUNC_2 (struct ath_hw*) ;
 scalar_t__ FUNC_3 (struct ath_hw*) ;
 int FUNC_4 (struct ath_hw*,int,int ) ;
 int FUNC_5 (struct ath_hw*,int) ;
 int FUNC_6 (struct ath_hw*,int ,int ,int) ;
 int FUNC_7 (struct ath_hw*,int,int) ;
 int FUNC_8 (struct ath_hw*,int ,char*,int ) ;

__attribute__((used)) static void FUNC_9(struct ath_hw *VAR_13)
{
 struct ath_btcoex_hw *VAR_14 = &VAR_13->btcoex_hw;
 u32 VAR_15;
 int VAR_16;





 if (FUNC_3(VAR_13))
  FUNC_4(VAR_13, VAR_2, VAR_7);

 FUNC_7(VAR_13, VAR_1, VAR_14->bt_coex_mode);
 FUNC_7(VAR_13, VAR_2, VAR_14->bt_coex_mode2);

 if (FUNC_3(VAR_13))
  FUNC_7(VAR_13, VAR_3, VAR_14->bt_coex_mode3);

 if (FUNC_2(VAR_13)) {
  FUNC_7(VAR_13, VAR_5, VAR_14->wlan_weight[0]);
  FUNC_7(VAR_13, VAR_6, VAR_14->wlan_weight[1]);
  for (VAR_16 = 0; VAR_16 < VAR_0; VAR_16++)
   FUNC_7(VAR_13, FUNC_0(VAR_16),
      VAR_14->bt_weight[VAR_16]);
 } else
  FUNC_7(VAR_13, VAR_4, VAR_14->bt_coex_weights);

 if (FUNC_1(VAR_13)) {
  VAR_15 = FUNC_5(VAR_13, 0x50040);
  VAR_15 &= 0xFFFFFEFF;
  FUNC_7(VAR_13, 0x50040, VAR_15);
 }

 FUNC_6(VAR_13, VAR_11, VAR_12, 1);
 FUNC_6(VAR_13, VAR_10, VAR_9, 0);

 FUNC_8(VAR_13, VAR_14->wlanactive_gpio,
      "ath9k-wlanactive",
      VAR_8);
}
