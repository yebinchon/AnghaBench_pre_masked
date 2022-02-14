
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mwifiex_sta_node {int is_11n_enabled; int max_amsdu; } ;
struct mwifiex_private {int dummy; } ;
struct ieee_types_header {int dummy; } ;
struct ieee80211_ht_cap {int cap_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int const*,int) ;
 int FUNC_1 (int ) ;

void
FUNC_2(struct mwifiex_private *VAR_4, const u8 *VAR_5,
         int VAR_6, struct mwifiex_sta_node *VAR_7)
{
 struct ieee_types_header *VAR_8;
 const struct ieee80211_ht_cap *VAR_9;

 if (!VAR_5)
  return;

 VAR_8 = (void *)FUNC_0(VAR_3, VAR_5,
          VAR_6);
 if (VAR_8) {
  VAR_9 = (void *)(VAR_8 + 1);
  VAR_7->is_11n_enabled = 1;
  VAR_7->max_amsdu = FUNC_1(VAR_9->cap_info) &
      VAR_0 ?
      VAR_2 :
      VAR_1;
 } else {
  VAR_7->is_11n_enabled = 0;
 }

 return;
}
