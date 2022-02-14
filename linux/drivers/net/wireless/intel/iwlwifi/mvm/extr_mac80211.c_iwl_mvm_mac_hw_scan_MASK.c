
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct iwl_mvm {int mutex; TYPE_2__* fw; } ;
struct ieee80211_vif {int dummy; } ;
struct TYPE_6__ {scalar_t__ n_channels; } ;
struct ieee80211_scan_request {int ies; TYPE_3__ req; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_4__ {scalar_t__ n_scan_channels; } ;
struct TYPE_5__ {TYPE_1__ ucode_capa; } ;


 int VAR_0 ;
 struct iwl_mvm* FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct iwl_mvm*,struct ieee80211_vif*,TYPE_3__*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct ieee80211_hw *VAR_1,
          struct ieee80211_vif *VAR_2,
          struct ieee80211_scan_request *VAR_3)
{
 struct iwl_mvm *VAR_4 = FUNC_0(VAR_1);
 int VAR_5;

 if (VAR_3->req.n_channels == 0 ||
     VAR_3->req.n_channels > VAR_4->fw->ucode_capa.n_scan_channels)
  return -VAR_0;

 FUNC_2(&VAR_4->mutex);
 VAR_5 = FUNC_1(VAR_4, VAR_2, &VAR_3->req, &VAR_3->ies);
 FUNC_3(&VAR_4->mutex);

 return VAR_5;
}
