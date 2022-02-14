
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct false_alarm_statistics {int cnt_fast_fsync_fail; int cnt_sb_search_fail; int cnt_ofdm_cca; int cnt_parity_fail; int cnt_rate_illegal; int cnt_crc8_fail; int cnt_mcs_fail; int cnt_ofdm_fail; int cnt_bw_lsc; int cnt_bw_usc; int cnt_cck_fail; int cnt_cck_cca; int cnt_all; int cnt_cca_all; } ;
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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,int,int,int,...) ;
 int FUNC_2 (struct ieee80211_hw*,int ,int ) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (struct ieee80211_hw*,int ,int,int) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_17)
{
 u32 VAR_18;
 struct rtl_priv *VAR_19 = FUNC_3(VAR_17);
 struct false_alarm_statistics *VAR_20 = &VAR_19->falsealm_cnt;

 FUNC_4(VAR_17, VAR_6, FUNC_0(31), 1);
 FUNC_4(VAR_17, VAR_8, FUNC_0(31), 1);

 VAR_18 = FUNC_2(VAR_17, VAR_9, VAR_16);
 VAR_20->cnt_fast_fsync_fail = (VAR_18 & 0xffff);
 VAR_20->cnt_sb_search_fail = ((VAR_18 & 0xffff0000) >> 16);

 VAR_18 = FUNC_2(VAR_17, VAR_10, VAR_16);
 VAR_20->cnt_ofdm_cca = (VAR_18 & 0xffff);
 VAR_20->cnt_parity_fail = ((VAR_18 & 0xffff0000) >> 16);

 VAR_18 = FUNC_2(VAR_17, VAR_11, VAR_16);
 VAR_20->cnt_rate_illegal = (VAR_18 & 0xffff);
 VAR_20->cnt_crc8_fail = ((VAR_18 & 0xffff0000) >> 16);

 VAR_18 = FUNC_2(VAR_17, VAR_12, VAR_16);
 VAR_20->cnt_mcs_fail = (VAR_18 & 0xffff);

 VAR_20->cnt_ofdm_fail = VAR_20->cnt_parity_fail +
          VAR_20->cnt_rate_illegal +
          VAR_20->cnt_crc8_fail +
          VAR_20->cnt_mcs_fail +
          VAR_20->cnt_fast_fsync_fail +
          VAR_20->cnt_sb_search_fail;

 VAR_18 = FUNC_2(VAR_17, VAR_13, VAR_16);
 VAR_20->cnt_bw_lsc = (VAR_18 & 0xffff);
 VAR_20->cnt_bw_usc = ((VAR_18 & 0xffff0000) >> 16);

 FUNC_4(VAR_17, VAR_5, FUNC_0(12), 1);
 FUNC_4(VAR_17, VAR_5, FUNC_0(14), 1);

 VAR_18 = FUNC_2(VAR_17, VAR_3, VAR_14);
 VAR_20->cnt_cck_fail = VAR_18;

 VAR_18 = FUNC_2(VAR_17, VAR_4, VAR_15);
 VAR_20->cnt_cck_fail += (VAR_18 & 0xff) << 8;

 VAR_18 = FUNC_2(VAR_17, VAR_2, VAR_16);
 VAR_20->cnt_cck_cca = ((VAR_18 & 0xff) << 8) |
        ((VAR_18 & 0xFF00) >> 8);

 VAR_20->cnt_all = VAR_20->cnt_fast_fsync_fail +
    VAR_20->cnt_sb_search_fail +
    VAR_20->cnt_parity_fail +
    VAR_20->cnt_rate_illegal +
    VAR_20->cnt_crc8_fail +
    VAR_20->cnt_mcs_fail +
    VAR_20->cnt_cck_fail;

 VAR_20->cnt_cca_all = VAR_20->cnt_ofdm_cca +
        VAR_20->cnt_cck_cca;


 FUNC_4(VAR_17, VAR_7, FUNC_0(31), 1);
 FUNC_4(VAR_17, VAR_7, FUNC_0(31), 0);
 FUNC_4(VAR_17, VAR_8, FUNC_0(27), 1);
 FUNC_4(VAR_17, VAR_8, FUNC_0(27), 0);

 FUNC_4(VAR_17, VAR_6, FUNC_0(31), 0);
 FUNC_4(VAR_17, VAR_8, FUNC_0(31), 0);

 FUNC_4(VAR_17, VAR_5, FUNC_0(13) | FUNC_0(12), 0);
 FUNC_4(VAR_17, VAR_5, FUNC_0(13) | FUNC_0(12), 2);

 FUNC_4(VAR_17, VAR_5, FUNC_0(15) | FUNC_0(14), 0);
 FUNC_4(VAR_17, VAR_5, FUNC_0(15) | FUNC_0(14), 2);

 FUNC_1(VAR_19, VAR_0, VAR_1,
   "cnt_parity_fail = %d, cnt_rate_illegal = %d, cnt_crc8_fail = %d, cnt_mcs_fail = %d\n",
    VAR_20->cnt_parity_fail,
    VAR_20->cnt_rate_illegal,
    VAR_20->cnt_crc8_fail, VAR_20->cnt_mcs_fail);

 FUNC_1(VAR_19, VAR_0, VAR_1,
   "cnt_ofdm_fail = %x, cnt_cck_fail = %x, cnt_all = %x\n",
    VAR_20->cnt_ofdm_fail,
    VAR_20->cnt_cck_fail, VAR_20->cnt_all);
}
