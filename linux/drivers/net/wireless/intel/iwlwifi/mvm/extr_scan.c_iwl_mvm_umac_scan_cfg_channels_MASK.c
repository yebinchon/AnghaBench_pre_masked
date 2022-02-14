
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {scalar_t__ channel_num; int iter_count; scalar_t__ iter_interval; } ;
struct TYPE_3__ {int iter_count; scalar_t__ iter_interval; int band; } ;
struct iwl_scan_channel_cfg_umac {TYPE_2__ v1; TYPE_1__ v2; int flags; } ;
struct iwl_mvm {int dummy; } ;
struct ieee80211_channel {scalar_t__ hw_value; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct iwl_mvm*) ;

__attribute__((used)) static void
FUNC_2(struct iwl_mvm *VAR_3,
          struct ieee80211_channel **VAR_4,
          int VAR_5, u32 VAR_6,
          struct iwl_scan_channel_cfg_umac *VAR_7)
{
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
  VAR_7[VAR_8].flags = FUNC_0(VAR_6);
  VAR_7[VAR_8].v1.channel_num = VAR_4[VAR_8]->hw_value;
  if (FUNC_1(VAR_3)) {
   VAR_7[VAR_8].v2.band =
    VAR_4[VAR_8]->hw_value <= VAR_2 ?
     VAR_0 : VAR_1;
   VAR_7[VAR_8].v2.iter_count = 1;
   VAR_7[VAR_8].v2.iter_interval = 0;
  } else {
   VAR_7[VAR_8].v1.iter_count = 1;
   VAR_7[VAR_8].v1.iter_interval = 0;
  }
 }
}
