
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct iwl_mvm {TYPE_3__* fw; TYPE_2__* cfg; } ;
struct iwl_lq_sta {int ldpc; int stbc_capable; int bfer_capable; int is_vht; } ;
struct ieee80211_sta_vht_cap {int cap; } ;
struct ieee80211_sta {int dummy; } ;
struct TYPE_6__ {int ucode_capa; } ;
struct TYPE_5__ {TYPE_1__* ht_params; } ;
struct TYPE_4__ {scalar_t__ stbc; scalar_t__ ldpc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (struct iwl_mvm*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ieee80211_sta*,struct ieee80211_sta_vht_cap*,struct iwl_lq_sta*) ;

__attribute__((used)) static void FUNC_4(struct iwl_mvm *VAR_4,
   struct ieee80211_sta *VAR_5,
   struct iwl_lq_sta *VAR_6,
   struct ieee80211_sta_vht_cap *VAR_7)
{
 FUNC_3(VAR_5, VAR_7, VAR_6);

 if (VAR_4->cfg->ht_params->ldpc &&
     (VAR_7->cap & VAR_0))
  VAR_6->ldpc = 1;

 if (VAR_4->cfg->ht_params->stbc &&
     (FUNC_2(FUNC_1(VAR_4)) > 1) &&
     (VAR_7->cap & VAR_1))
  VAR_6->stbc_capable = 1;

 if (FUNC_0(&VAR_4->fw->ucode_capa, VAR_3) &&
     (FUNC_2(FUNC_1(VAR_4)) > 1) &&
     (VAR_7->cap & VAR_2))
  VAR_6->bfer_capable = 1;

 VAR_6->is_vht = 1;
}
