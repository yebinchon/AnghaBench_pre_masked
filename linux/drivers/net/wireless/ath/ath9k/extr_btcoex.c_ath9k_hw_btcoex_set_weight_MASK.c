
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ath9k_hw_mci {scalar_t__ stomp_ftp; int concur_tx; } ;
struct ath_btcoex_hw {int* tx_prio; int bt_coex_weights; int* wlan_weight; int * bt_weight; struct ath9k_hw_mci mci; } ;
struct ath_hw {struct ath_btcoex_hw btcoex_hw; } ;
typedef enum ath_stomp_type { ____Placeholder_ath_stomp_type } ath_stomp_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ath_hw*) ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 scalar_t__ FUNC_2 (struct ath_hw*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int,int ) ;
 int** VAR_6 ;
 int** VAR_7 ;

void FUNC_4(struct ath_hw *VAR_8,
    u32 VAR_9,
    u32 VAR_10,
    enum ath_stomp_type VAR_11)
{
 struct ath_btcoex_hw *VAR_12 = &VAR_8->btcoex_hw;
 struct ath9k_hw_mci *VAR_13 = &VAR_8->btcoex_hw.mci;
 u8 VAR_14[] = { 24, 16, 16, 0 };
 bool VAR_15 = (VAR_13->concur_tx && VAR_12->tx_prio[VAR_11]);
 const u32 *VAR_16 = VAR_6[VAR_11];
 int VAR_17;

 if (!FUNC_0(VAR_8)) {
  VAR_12->bt_coex_weights =
   FUNC_3(VAR_9, VAR_2) |
   FUNC_3(VAR_10, VAR_3);
  return;
 }

 if (FUNC_1(VAR_8) || FUNC_2(VAR_8)) {
  enum ath_stomp_type VAR_18 =
   ((VAR_11 == VAR_4) &&
    VAR_12->mci.stomp_ftp) ?
   VAR_5 : VAR_11;
  VAR_16 = VAR_7[VAR_18];
 }

 for (VAR_17 = 0; VAR_17 < VAR_1; VAR_17++) {
  VAR_12->bt_weight[VAR_17] = VAR_0;
  VAR_12->wlan_weight[VAR_17] = VAR_16[VAR_17];
  if (VAR_15 && VAR_17) {
   VAR_12->wlan_weight[VAR_17] &=
    ~(0xff << VAR_14[VAR_17-1]);
   VAR_12->wlan_weight[VAR_17] |=
    (VAR_12->tx_prio[VAR_11] <<
     VAR_14[VAR_17-1]);
  }
 }


 if (VAR_15) {
  VAR_12->wlan_weight[VAR_17-1] &= ~(0xff << VAR_14[VAR_17-1]);
  VAR_12->wlan_weight[VAR_17-1] |= (VAR_12->tx_prio[VAR_11]
            << VAR_14[VAR_17-1]);
 }
}
