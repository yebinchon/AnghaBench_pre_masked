
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct il_lq_sta {int active_mimo2_rate; int active_siso_rate; int active_legacy_rate; } ;
struct ieee80211_hdr {int dummy; } ;
typedef enum il_table_type { ____Placeholder_il_table_type } il_table_type ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static u16
FUNC_2(struct il_lq_sta *VAR_0,
         struct ieee80211_hdr *VAR_1,
         enum il_table_type VAR_2)
{
 if (FUNC_0(VAR_2)) {
  return VAR_0->active_legacy_rate;
 } else {
  if (FUNC_1(VAR_2))
   return VAR_0->active_siso_rate;
  else
   return VAR_0->active_mimo2_rate;
 }
}
