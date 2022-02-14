
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ current_bandtype; } ;
struct false_alarm_statistics {int cnt_fast_fsync_fail; int cnt_sb_search_fail; int cnt_parity_fail; int cnt_rate_illegal; int cnt_crc8_fail; int cnt_mcs_fail; int cnt_ofdm_fail; int cnt_cck_fail; int cnt_all; } ;
struct rtl_priv {TYPE_1__ rtlhal; struct false_alarm_statistics falsealm_cnt; } ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
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
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,int,int,...) ;
 int FUNC_2 (struct ieee80211_hw*,unsigned long*) ;
 int FUNC_3 (struct ieee80211_hw*,unsigned long*) ;
 int FUNC_4 (struct ieee80211_hw*,int ,int ) ;
 struct rtl_priv* FUNC_5 (struct ieee80211_hw*) ;
 int FUNC_6 (struct ieee80211_hw*,int ,int,int) ;

__attribute__((used)) static void FUNC_7(struct ieee80211_hw *VAR_15)
{
 u32 VAR_16;
 struct rtl_priv *VAR_17 = FUNC_5(VAR_15);
 struct false_alarm_statistics *VAR_18 = &(VAR_17->falsealm_cnt);
 unsigned long VAR_19 = 0;


 FUNC_6(VAR_15, VAR_10, FUNC_0(31), 1);
 FUNC_6(VAR_15, VAR_11, FUNC_0(31), 1);

 VAR_16 = FUNC_4(VAR_15, VAR_9, VAR_5);
 VAR_18->cnt_fast_fsync_fail = (VAR_16 & 0xffff);
 VAR_18->cnt_sb_search_fail = ((VAR_16 & 0xffff0000) >> 16);
 VAR_16 = FUNC_4(VAR_15, VAR_12, VAR_5);
 VAR_18->cnt_parity_fail = ((VAR_16 & 0xffff0000) >> 16);
 VAR_16 = FUNC_4(VAR_15, VAR_13, VAR_5);
 VAR_18->cnt_rate_illegal = (VAR_16 & 0xffff);
 VAR_18->cnt_crc8_fail = ((VAR_16 & 0xffff0000) >> 16);
 VAR_16 = FUNC_4(VAR_15, VAR_14, VAR_5);
 VAR_18->cnt_mcs_fail = (VAR_16 & 0xffff);
 VAR_18->cnt_ofdm_fail = VAR_18->cnt_parity_fail +
          VAR_18->cnt_rate_illegal +
          VAR_18->cnt_crc8_fail +
          VAR_18->cnt_mcs_fail +
          VAR_18->cnt_fast_fsync_fail +
          VAR_18->cnt_sb_search_fail;

 if (VAR_17->rtlhal.current_bandtype != VAR_0) {

  FUNC_2(VAR_15, &VAR_19);
  VAR_16 = FUNC_4(VAR_15, VAR_6, VAR_3);
  VAR_18->cnt_cck_fail = VAR_16;
  VAR_16 = FUNC_4(VAR_15, VAR_7, VAR_4);
  VAR_18->cnt_cck_fail += (VAR_16 & 0xff) << 8;
  FUNC_3(VAR_15, &VAR_19);
 } else {
  VAR_18->cnt_cck_fail = 0;
 }


 VAR_18->cnt_all = VAR_18->cnt_fast_fsync_fail +
    VAR_18->cnt_sb_search_fail +
    VAR_18->cnt_parity_fail +
    VAR_18->cnt_rate_illegal +
    VAR_18->cnt_crc8_fail +
    VAR_18->cnt_mcs_fail +
    VAR_18->cnt_cck_fail;

 FUNC_6(VAR_15, VAR_11, 0x08000000, 1);

 FUNC_6(VAR_15, VAR_11, 0x08000000, 0);

 FUNC_6(VAR_15, VAR_10, FUNC_0(31), 0);

 FUNC_6(VAR_15, VAR_11, FUNC_0(31), 0);
 if (VAR_17->rtlhal.current_bandtype != VAR_0) {

  FUNC_2(VAR_15, &VAR_19);
  FUNC_6(VAR_15, VAR_8, 0x0000c000, 0);

  FUNC_6(VAR_15, VAR_8, 0x0000c000, 2);
  FUNC_3(VAR_15, &VAR_19);
 }
 FUNC_1(VAR_17, VAR_1, VAR_2,
   "Cnt_Fast_Fsync_fail = %x, Cnt_SB_Search_fail = %x\n",
   VAR_18->cnt_fast_fsync_fail,
   VAR_18->cnt_sb_search_fail);
 FUNC_1(VAR_17, VAR_1, VAR_2,
   "Cnt_Parity_Fail = %x, Cnt_Rate_Illegal = %x, Cnt_Crc8_fail = %x, Cnt_Mcs_fail = %x\n",
   VAR_18->cnt_parity_fail,
   VAR_18->cnt_rate_illegal,
   VAR_18->cnt_crc8_fail,
   VAR_18->cnt_mcs_fail);
 FUNC_1(VAR_17, VAR_1, VAR_2,
   "Cnt_Ofdm_fail = %x, Cnt_Cck_fail = %x, Cnt_all = %x\n",
   VAR_18->cnt_ofdm_fail,
   VAR_18->cnt_cck_fail,
   VAR_18->cnt_all);
}
