
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct iwl_mvm {TYPE_3__* cfg; } ;
struct iwl_lq_sta {int active_siso_rate; int active_mimo2_rate; int ldpc; int stbc_capable; int is_vht; } ;
struct TYPE_4__ {int* rx_mask; } ;
struct ieee80211_sta_ht_cap {int cap; TYPE_1__ mcs; } ;
struct ieee80211_sta {int dummy; } ;
struct TYPE_6__ {TYPE_2__* ht_params; } ;
struct TYPE_5__ {scalar_t__ stbc; scalar_t__ ldpc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct iwl_mvm*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct iwl_mvm *VAR_3,
         struct ieee80211_sta *VAR_4,
         struct iwl_lq_sta *VAR_5,
         struct ieee80211_sta_ht_cap *VAR_6)
{




 VAR_5->active_siso_rate = VAR_6->mcs.rx_mask[0] << 1;
 VAR_5->active_siso_rate |= VAR_6->mcs.rx_mask[0] & 0x1;
 VAR_5->active_siso_rate &= ~((u16)0x2);
 VAR_5->active_siso_rate <<= VAR_2;

 VAR_5->active_mimo2_rate = VAR_6->mcs.rx_mask[1] << 1;
 VAR_5->active_mimo2_rate |= VAR_6->mcs.rx_mask[1] & 0x1;
 VAR_5->active_mimo2_rate &= ~((u16)0x2);
 VAR_5->active_mimo2_rate <<= VAR_2;

 if (VAR_3->cfg->ht_params->ldpc &&
     (VAR_6->cap & VAR_0))
  VAR_5->ldpc = 1;

 if (VAR_3->cfg->ht_params->stbc &&
     (FUNC_1(FUNC_0(VAR_3)) > 1) &&
     (VAR_6->cap & VAR_1))
  VAR_5->stbc_capable = 1;

 VAR_5->is_vht = 0;
}
