
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct false_alarm_statistics {int cnt_parity_fail; int cnt_rate_illegal; int cnt_crc8_fail; int cnt_mcs_fail; int cnt_ofdm_fail; int cnt_cck_fail; int cnt_all; } ;
struct rtl_priv {struct false_alarm_statistics falsealm_cnt; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ieee80211_hw*,int,int ) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_hw *VAR_4)
{
 struct rtl_priv *VAR_5 = FUNC_1(VAR_4);
 struct false_alarm_statistics *VAR_6 = &(VAR_5->falsealm_cnt);
 u32 VAR_7;

 VAR_7 = FUNC_0(VAR_4, VAR_1, VAR_0);
 VAR_6->cnt_parity_fail = ((VAR_7 & 0xffff0000) >> 16);

 VAR_7 = FUNC_0(VAR_4, VAR_2, VAR_0);
 VAR_6->cnt_rate_illegal = (VAR_7 & 0xffff);
 VAR_6->cnt_crc8_fail = ((VAR_7 & 0xffff0000) >> 16);
 VAR_7 = FUNC_0(VAR_4, VAR_3, VAR_0);
 VAR_6->cnt_mcs_fail = (VAR_7 & 0xffff);

 VAR_6->cnt_ofdm_fail = VAR_6->cnt_parity_fail +
  VAR_6->cnt_rate_illegal + VAR_6->cnt_crc8_fail +
  VAR_6->cnt_mcs_fail;


 VAR_7 = FUNC_0(VAR_4, 0xc64, VAR_0);
 VAR_6->cnt_cck_fail = (VAR_7 & 0xffff);
 VAR_6->cnt_all = VAR_6->cnt_ofdm_fail +
  VAR_6->cnt_cck_fail;
}
