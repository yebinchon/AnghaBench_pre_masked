
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ dm_type; int useramask; } ;
struct rate_adaptive {int high_rssi_thresh_for_ra; int low_rssi_thresh_for_ra40m; void* pre_ratr_state; void* ratr_state; } ;
struct rtl_priv {TYPE_1__ dm; struct rate_adaptive ra; } ;
struct ieee80211_hw {int dummy; } ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 struct rtl_priv* FUNC_0 (struct ieee80211_hw*) ;

void FUNC_1(struct ieee80211_hw *VAR_2)
{
 struct rtl_priv *VAR_3 = FUNC_0(VAR_2);
 struct rate_adaptive *VAR_4 = &VAR_3->ra;

 VAR_4->ratr_state = VAR_0;
 VAR_4->pre_ratr_state = VAR_0;

 VAR_3->dm.dm_type = VAR_1;
 if (VAR_3->dm.dm_type == VAR_1)
  VAR_3->dm.useramask = 1;
 else
  VAR_3->dm.useramask = 0;

 VAR_4->high_rssi_thresh_for_ra = 50;
 VAR_4->low_rssi_thresh_for_ra40m = 20;
}
