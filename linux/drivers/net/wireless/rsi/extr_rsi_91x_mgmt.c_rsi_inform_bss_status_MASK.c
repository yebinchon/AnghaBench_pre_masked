
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct rsi_common {int hw_data_qs_blocked; int min_rate; int wow_flags; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int dummy; } ;
typedef enum opmode { ____Placeholder_opmode } opmode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct rsi_common*,int,int ,scalar_t__ const*,scalar_t__,int,int,struct ieee80211_vif*) ;
 int FUNC_1 (struct rsi_common*,struct ieee80211_sta*,int,struct ieee80211_vif*) ;
 int FUNC_2 (struct rsi_common*,int) ;

void FUNC_3(struct rsi_common *VAR_5,
      enum opmode VAR_6,
      u8 VAR_7,
      const u8 *VAR_8,
      u8 VAR_9,
      u16 VAR_10,
      struct ieee80211_sta *VAR_11,
      u16 VAR_12,
      u16 VAR_13,
      struct ieee80211_vif *VAR_14)
{
 if (VAR_7) {
  if (VAR_6 == VAR_0)
   VAR_5->hw_data_qs_blocked = 1;
  FUNC_0(VAR_5,
           VAR_6,
           VAR_2,
           VAR_8,
           VAR_9,
           VAR_10, VAR_12,
           VAR_14);
  if (VAR_5->min_rate == 0xffff)
   FUNC_1(VAR_5, VAR_11, VAR_12, VAR_14);
  if (VAR_6 == VAR_0 &&
      !(VAR_13 & VAR_4) &&
      !FUNC_2(VAR_5, 0))
   VAR_5->hw_data_qs_blocked = 0;
 } else {
  if (VAR_6 == VAR_0)
   VAR_5->hw_data_qs_blocked = 1;

  if (!(VAR_5->wow_flags & VAR_1))
   FUNC_0(VAR_5, VAR_6,
            VAR_3, VAR_8,
            VAR_9, VAR_10, VAR_12,
            VAR_14);
  if (VAR_6 == VAR_0)
   FUNC_2(VAR_5, 1);
 }
}
