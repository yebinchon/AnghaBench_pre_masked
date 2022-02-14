
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct false_alarm_statistics {int cnt_parity_fail; int cnt_rate_illegal; int cnt_crc8_fail; int cnt_mcs_fail; int cnt_fast_fsync_fail; int cnt_sb_search_fail; int cnt_ofdm_fail; int cnt_cck_fail; int cnt_all; } ;
struct rtl_priv {struct false_alarm_statistics falsealm_cnt; } ;
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
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,int,int,int,...) ;
 int FUNC_2 (struct ieee80211_hw*,int ,int ) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (struct ieee80211_hw*,int ,int,int) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_13)
{
 u32 VAR_14;
 struct rtl_priv *VAR_15 = FUNC_3(VAR_13);
 struct false_alarm_statistics *VAR_16 = &(VAR_15->falsealm_cnt);

 VAR_14 = FUNC_2(VAR_13, VAR_10, VAR_4);
 VAR_16->cnt_parity_fail = ((VAR_14 & 0xffff0000) >> 16);

 VAR_14 = FUNC_2(VAR_13, VAR_11, VAR_4);
 VAR_16->cnt_rate_illegal = (VAR_14 & 0xffff);
 VAR_16->cnt_crc8_fail = ((VAR_14 & 0xffff0000) >> 16);

 VAR_14 = FUNC_2(VAR_13, VAR_12, VAR_4);
 VAR_16->cnt_mcs_fail = (VAR_14 & 0xffff);

 VAR_14 = FUNC_2(VAR_13, VAR_8, VAR_4);
 VAR_16->cnt_fast_fsync_fail = (VAR_14 & 0xffff);
 VAR_16->cnt_sb_search_fail = ((VAR_14 & 0xffff0000) >> 16);

 VAR_16->cnt_ofdm_fail = VAR_16->cnt_parity_fail +
          VAR_16->cnt_rate_illegal +
          VAR_16->cnt_crc8_fail +
          VAR_16->cnt_mcs_fail +
          VAR_16->cnt_fast_fsync_fail +
          VAR_16->cnt_sb_search_fail;

 FUNC_4(VAR_13, VAR_7, FUNC_0(14), 1);
 VAR_14 = FUNC_2(VAR_13, VAR_5, VAR_2);
 VAR_16->cnt_cck_fail = VAR_14;

 VAR_14 = FUNC_2(VAR_13, VAR_6, VAR_3);
 VAR_16->cnt_cck_fail += (VAR_14 & 0xff) << 8;
 VAR_16->cnt_all = (VAR_16->cnt_parity_fail +
     VAR_16->cnt_rate_illegal +
     VAR_16->cnt_crc8_fail +
     VAR_16->cnt_mcs_fail +
     VAR_16->cnt_cck_fail);

 FUNC_4(VAR_13, VAR_9, 0x08000000, 1);
 FUNC_4(VAR_13, VAR_9, 0x08000000, 0);
 FUNC_4(VAR_13, VAR_7, 0x0000c000, 0);
 FUNC_4(VAR_13, VAR_7, 0x0000c000, 2);

 FUNC_1(VAR_15, VAR_0, VAR_1,
   "cnt_parity_fail = %d, cnt_rate_illegal = %d, cnt_crc8_fail = %d, cnt_mcs_fail = %d\n",
   VAR_16->cnt_parity_fail,
   VAR_16->cnt_rate_illegal,
   VAR_16->cnt_crc8_fail, VAR_16->cnt_mcs_fail);

 FUNC_1(VAR_15, VAR_0, VAR_1,
   "cnt_ofdm_fail = %x, cnt_cck_fail = %x, cnt_all = %x\n",
   VAR_16->cnt_ofdm_fail,
   VAR_16->cnt_cck_fail, VAR_16->cnt_all);
}
