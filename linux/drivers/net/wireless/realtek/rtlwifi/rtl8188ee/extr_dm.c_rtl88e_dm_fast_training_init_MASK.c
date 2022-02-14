
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fast_ant_training {int fat_state; scalar_t__ train_idx; scalar_t__* ant_ave; scalar_t__* ant_cnt; scalar_t__* ant_sum; scalar_t__* bssid; } ;
struct rtl_dm {struct fast_ant_training fat_table; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
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
 int VAR_13 ;
 int VAR_14 ;
 struct rtl_dm* FUNC_1 (int ) ;
 int FUNC_2 (struct ieee80211_hw*,int ,int) ;
 int FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (struct ieee80211_hw*,int ,int,int) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_15)
{
 struct rtl_dm *VAR_16 = FUNC_1(FUNC_3(VAR_15));
 struct fast_ant_training *VAR_17 = &VAR_16->fat_table;
 u32 VAR_18 = 2;
 u32 VAR_19, VAR_20;

 for (VAR_20 = 0; VAR_20 < 6; VAR_20++) {
  VAR_17->bssid[VAR_20] = 0;
  VAR_17->ant_sum[VAR_20] = 0;
  VAR_17->ant_cnt[VAR_20] = 0;
  VAR_17->ant_ave[VAR_20] = 0;
 }
 VAR_17->train_idx = 0;
 VAR_17->fat_state = VAR_10;


 VAR_19 = FUNC_2(VAR_15, VAR_1, VAR_13);
 FUNC_4(VAR_15, VAR_1,
        VAR_13, VAR_19 | (FUNC_0(23) | FUNC_0(25)));
 VAR_19 = FUNC_2(VAR_15, VAR_4, VAR_13);
 FUNC_4(VAR_15, VAR_4,
        VAR_13, VAR_19 | (FUNC_0(16) | FUNC_0(17)));
 FUNC_4(VAR_15, VAR_4,
        VAR_14, 0);
 FUNC_4(VAR_15, VAR_3,
        VAR_13, 0);


 FUNC_4(VAR_15, VAR_7, FUNC_0(9) | FUNC_0(8), 0);
 FUNC_4(VAR_15, VAR_8, FUNC_0(10), 0);
 FUNC_4(VAR_15, VAR_6, FUNC_0(22), 0);
 FUNC_4(VAR_15, VAR_6, FUNC_0(31), 1);


 FUNC_4(VAR_15, VAR_0, VAR_13, 0x000000a0);

 FUNC_4(VAR_15, VAR_2, VAR_11, 1);
 FUNC_4(VAR_15, VAR_2, VAR_12, 2);


 FUNC_4(VAR_15, VAR_9, FUNC_0(21), 1);
 FUNC_4(VAR_15, VAR_8,
        FUNC_0(5) | FUNC_0(4) | FUNC_0(3), 0);
 FUNC_4(VAR_15, VAR_8,
        FUNC_0(8) | FUNC_0(7) | FUNC_0(6), 1);
 FUNC_4(VAR_15, VAR_8,
        FUNC_0(2) | FUNC_0(1) | FUNC_0(0), (VAR_18 - 1));

 FUNC_4(VAR_15, VAR_5, FUNC_0(7), 1);
}
