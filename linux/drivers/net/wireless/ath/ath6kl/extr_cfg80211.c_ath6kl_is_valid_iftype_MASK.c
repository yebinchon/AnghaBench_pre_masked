
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ath6kl {int vif_max; int avail_idx_map; int max_norm_iface; scalar_t__ num_vif; scalar_t__ ibss_if_active; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int,int*) ;

__attribute__((used)) static bool FUNC_2(struct ath6kl *VAR_5, enum nl80211_iftype VAR_6,
       u8 *VAR_7, u8 *VAR_8)
{
 int VAR_9;

 if (FUNC_1(VAR_6, VAR_8))
  return 0;

 if (VAR_5->ibss_if_active || ((VAR_6 == VAR_0) &&
       VAR_5->num_vif))
  return 0;

 if (VAR_6 == VAR_4 ||
     VAR_6 == VAR_1 || VAR_6 == VAR_0) {
  for (VAR_9 = 0; VAR_9 < VAR_5->vif_max; VAR_9++) {
   if ((VAR_5->avail_idx_map) & FUNC_0(VAR_9)) {
    *VAR_7 = VAR_9;
    return 1;
   }
  }
 }

 if (VAR_6 == VAR_2 ||
     VAR_6 == VAR_3) {
  for (VAR_9 = VAR_5->max_norm_iface; VAR_9 < VAR_5->vif_max; VAR_9++) {
   if ((VAR_5->avail_idx_map) & FUNC_0(VAR_9)) {
    *VAR_7 = VAR_9;
    return 1;
   }
  }
 }

 return 0;
}
