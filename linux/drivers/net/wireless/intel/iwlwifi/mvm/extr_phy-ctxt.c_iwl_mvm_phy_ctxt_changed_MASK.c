
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct iwl_mvm_phy_ctxt {int width; TYPE_2__* channel; } ;
struct iwl_mvm {TYPE_1__* fw; int mutex; } ;
struct cfg80211_chan_def {int width; TYPE_2__* chan; } ;
typedef enum iwl_ctxt_action { ____Placeholder_iwl_ctxt_action } iwl_ctxt_action ;
struct TYPE_4__ {scalar_t__ band; } ;
struct TYPE_3__ {int ucode_capa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (struct iwl_mvm*,struct iwl_mvm_phy_ctxt*,struct cfg80211_chan_def*,int ,int ,int,int ) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct iwl_mvm *VAR_4, struct iwl_mvm_phy_ctxt *VAR_5,
        struct cfg80211_chan_def *VAR_6,
        u8 VAR_7, u8 VAR_8)
{
 enum iwl_ctxt_action VAR_9 = VAR_1;

 FUNC_2(&VAR_4->mutex);

 if (FUNC_0(&VAR_4->fw->ucode_capa,
   VAR_3) &&
     VAR_5->channel->band != VAR_6->chan->band) {
  int VAR_10;


  VAR_10 = FUNC_1(VAR_4, VAR_5, VAR_6,
          VAR_7, VAR_8,
          VAR_2, 0);
  if (VAR_10)
   return VAR_10;


  VAR_9 = VAR_0;
 }

 VAR_5->channel = VAR_6->chan;
 VAR_5->width = VAR_6->width;
 return FUNC_1(VAR_4, VAR_5, VAR_6,
          VAR_7, VAR_8,
          VAR_9, 0);
}
