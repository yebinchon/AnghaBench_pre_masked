
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
struct rs_rate {scalar_t__ ant; } ;
struct iwl_scale_tbl_info {int column; struct rs_rate rate; } ;
struct iwl_mvm {TYPE_3__* nvm_data; TYPE_2__* fw; } ;
struct TYPE_4__ {int chains; } ;
struct iwl_lq_sta {size_t active_tbl; int lq; TYPE_1__ pers; struct iwl_scale_tbl_info* lq_info; int search_better_tbl; } ;
struct ieee80211_sta {int dummy; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;
struct TYPE_6__ {int valid_tx_ant; } ;
struct TYPE_5__ {int valid_tx_ant; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,scalar_t__,int ,int ,int ) ;
 int FUNC_1 (struct iwl_mvm*,int *) ;
 int FUNC_2 (struct iwl_mvm*,struct ieee80211_sta*,struct iwl_lq_sta*,struct rs_rate*) ;
 int FUNC_3 (struct rs_rate*) ;
 int FUNC_4 (struct iwl_mvm*,struct ieee80211_sta*,struct iwl_lq_sta*,int,struct rs_rate*) ;
 int FUNC_5 (struct iwl_mvm*,struct ieee80211_sta*,struct iwl_lq_sta*) ;
 size_t FUNC_6 (size_t) ;
 int FUNC_7 (struct iwl_lq_sta*,struct iwl_scale_tbl_info*) ;

__attribute__((used)) static void FUNC_8(struct iwl_mvm *VAR_3,
        struct ieee80211_sta *VAR_4,
        struct iwl_lq_sta *VAR_5,
        enum nl80211_band VAR_6)
{
 struct iwl_scale_tbl_info *VAR_7;
 struct rs_rate *VAR_8;
 u8 VAR_9 = 0;

 if (!VAR_4 || !VAR_5)
  return;

 if (!VAR_5->search_better_tbl)
  VAR_9 = VAR_5->active_tbl;
 else
  VAR_9 = FUNC_6(VAR_5->active_tbl);

 VAR_7 = &(VAR_5->lq_info[VAR_9]);
 VAR_8 = &VAR_7->rate;

 FUNC_4(VAR_3, VAR_4, VAR_5, VAR_6, VAR_8);
 FUNC_5(VAR_3, VAR_4, VAR_5);

 FUNC_0(VAR_8->ant != VAR_0 && VAR_8->ant != VAR_1,
    "ant: 0x%x, chains 0x%x, fw tx ant: 0x%x, nvm tx ant: 0x%x\n",
    VAR_8->ant, VAR_5->pers.chains, VAR_3->fw->valid_tx_ant,
    VAR_3->nvm_data ? VAR_3->nvm_data->valid_tx_ant : VAR_2);

 VAR_7->column = FUNC_3(VAR_8);

 FUNC_7(VAR_5, VAR_7);
 FUNC_2(VAR_3, VAR_4, VAR_5, VAR_8);

 FUNC_1(VAR_3, &VAR_5->lq);
}
