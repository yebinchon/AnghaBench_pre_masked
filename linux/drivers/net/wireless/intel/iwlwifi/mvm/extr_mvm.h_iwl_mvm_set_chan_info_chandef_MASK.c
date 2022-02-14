
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_mvm {int dummy; } ;
struct iwl_fw_channel_info {int dummy; } ;
struct cfg80211_chan_def {TYPE_1__* chan; } ;
struct TYPE_2__ {scalar_t__ band; int hw_value; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cfg80211_chan_def*) ;
 int FUNC_1 (struct cfg80211_chan_def*) ;
 int FUNC_2 (struct iwl_mvm*,struct iwl_fw_channel_info*,int ,int ,int ,int ) ;

__attribute__((used)) static inline void
FUNC_3(struct iwl_mvm *VAR_3,
         struct iwl_fw_channel_info *VAR_4,
         struct cfg80211_chan_def *VAR_5)
{
 FUNC_2(VAR_3, VAR_4, VAR_5->chan->hw_value,
         (VAR_5->chan->band == VAR_0 ?
          VAR_1 : VAR_2),
          FUNC_0(VAR_5),
          FUNC_1(VAR_5));
}
