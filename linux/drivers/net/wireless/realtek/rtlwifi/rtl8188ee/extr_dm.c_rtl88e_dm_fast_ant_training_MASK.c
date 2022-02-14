
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int fast_antenna_training_timer; } ;
struct rtl_priv {TYPE_1__ works; } ;
struct fast_ant_training {scalar_t__ fat_state; int* ant_cnt; int* ant_ave; int* ant_sum; int* antsel_a; size_t train_idx; int* antsel_b; int* antsel_c; } ;
struct rtl_dm {struct fast_ant_training fat_table; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (struct ieee80211_hw*) ;
 struct rtl_dm* FUNC_4 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_5 (struct ieee80211_hw*) ;
 int FUNC_6 (struct ieee80211_hw*,int ,int,int) ;

__attribute__((used)) static void FUNC_7(struct ieee80211_hw *VAR_8)
{
 struct rtl_priv *VAR_9 = FUNC_5(VAR_8);
 struct rtl_dm *VAR_10 = FUNC_4(FUNC_5(VAR_8));
 struct fast_ant_training *VAR_11 = &VAR_10->fat_table;
 u32 VAR_12, VAR_13 = 0;
 u8 VAR_14 = 2;
 bool VAR_15 = 0;

 if (VAR_11->fat_state == VAR_5) {
  for (VAR_12 = 0; VAR_12 < 7; VAR_12++) {
   if (VAR_11->ant_cnt[VAR_12] == 0) {
    VAR_11->ant_ave[VAR_12] = 0;
   } else {
    VAR_11->ant_ave[VAR_12] =
     VAR_11->ant_sum[VAR_12] /
     VAR_11->ant_cnt[VAR_12];
    VAR_15 = 1;
   }

   if (VAR_11->ant_ave[VAR_12] > VAR_13) {
    VAR_13 = VAR_11->ant_ave[VAR_12];
    VAR_14 = (u8) VAR_12;
   }
  }

  if (VAR_15 == 0) {
   FUNC_6(VAR_8, VAR_2,
          FUNC_0(16), 0);
   FUNC_6(VAR_8, VAR_0, FUNC_0(7), 0);
  } else {
   FUNC_6(VAR_8, VAR_2,
          FUNC_0(16), 0);
   FUNC_6(VAR_8, VAR_1, FUNC_0(8) |
          FUNC_0(7) | FUNC_0(6), VAR_14);
   FUNC_6(VAR_8, VAR_3,
          FUNC_0(21), 1);

   VAR_11->antsel_a[VAR_11->train_idx] =
    VAR_14 & FUNC_0(0);
   VAR_11->antsel_b[VAR_11->train_idx] =
    (VAR_14 & FUNC_0(1)) >> 1;
   VAR_11->antsel_c[VAR_11->train_idx] =
    (VAR_14 & FUNC_0(2)) >> 2;

   if (VAR_14 == 0)
    FUNC_6(VAR_8, VAR_0, FUNC_0(7), 0);
  }

  for (VAR_12 = 0; VAR_12 < 7; VAR_12++) {
   VAR_11->ant_sum[VAR_12] = 0;
   VAR_11->ant_cnt[VAR_12] = 0;
  }

  VAR_11->fat_state = VAR_4;
  return;
 }

 if (VAR_11->fat_state == VAR_4) {
  FUNC_3(VAR_8);

  VAR_11->fat_state = VAR_5;
  FUNC_6(VAR_8, VAR_2, FUNC_0(16), 1);
  FUNC_6(VAR_8, VAR_0, FUNC_0(7), 1);

  FUNC_2(&VAR_9->works.fast_antenna_training_timer,
     VAR_7 + FUNC_1(VAR_6));
 }
}
