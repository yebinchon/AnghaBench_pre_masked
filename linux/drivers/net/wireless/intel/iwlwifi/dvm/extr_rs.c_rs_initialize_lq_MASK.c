
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct iwl_station_priv {struct iwl_rxon_context* ctx; } ;
struct iwl_scale_tbl_info {int ant_type; int current_rate; } ;
struct iwl_rxon_context {int dummy; } ;
struct iwl_priv {TYPE_2__* stations; int band; TYPE_1__* nvm_data; } ;
struct TYPE_7__ {size_t sta_id; } ;
struct iwl_lq_sta {int last_txrate_idx; size_t active_tbl; TYPE_3__ lq; struct iwl_scale_tbl_info* lq_info; int search_better_tbl; } ;
struct ieee80211_sta {scalar_t__ drv_priv; } ;
struct TYPE_8__ {int plcp; } ;
struct TYPE_6__ {TYPE_3__* lq; } ;
struct TYPE_5__ {size_t valid_tx_ant; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (size_t) ;
 TYPE_4__* VAR_5 ;
 int FUNC_1 (struct iwl_priv*,struct iwl_rxon_context*,TYPE_3__*,int ,int) ;
 int FUNC_2 (struct iwl_priv*,struct iwl_scale_tbl_info*,int,size_t) ;
 int FUNC_3 (int *,struct iwl_lq_sta*,int) ;
 int FUNC_4 (int,int ,struct iwl_scale_tbl_info*,int*) ;
 int FUNC_5 (size_t,int) ;
 int FUNC_6 (struct iwl_lq_sta*,struct iwl_scale_tbl_info*) ;
 int FUNC_7 (size_t,int*,struct iwl_scale_tbl_info*) ;
 size_t FUNC_8 (struct ieee80211_sta*) ;

__attribute__((used)) static void FUNC_9(struct iwl_priv *VAR_6,
        struct ieee80211_sta *VAR_7,
        struct iwl_lq_sta *VAR_8)
{
 struct iwl_scale_tbl_info *VAR_9;
 int VAR_10;
 int VAR_11;
 u32 VAR_12;
 u8 VAR_13 = FUNC_8(VAR_7);
 u8 VAR_14 = 0;
 u8 VAR_15;
 struct iwl_station_priv *VAR_16;
 struct iwl_rxon_context *VAR_17;

 if (!VAR_7 || !VAR_8)
  return;

 VAR_16 = (void *)VAR_7->drv_priv;
 VAR_17 = VAR_16->ctx;

 VAR_11 = VAR_8->last_txrate_idx;

 VAR_15 = VAR_6->nvm_data->valid_tx_ant;

 if (!VAR_8->search_better_tbl)
  VAR_14 = VAR_8->active_tbl;
 else
  VAR_14 = 1 - VAR_8->active_tbl;

 VAR_9 = &(VAR_8->lq_info[VAR_14]);

 if ((VAR_11 < 0) || (VAR_11 >= VAR_2))
  VAR_11 = 0;

 VAR_12 = VAR_5[VAR_11].plcp;
 VAR_9->ant_type = FUNC_0(VAR_15);
 VAR_12 |= VAR_9->ant_type << VAR_3;

 if (VAR_11 >= VAR_0 && VAR_11 <= VAR_1)
  VAR_12 |= VAR_4;

 FUNC_4(VAR_12, VAR_6->band, VAR_9, &VAR_10);
 if (!FUNC_5(VAR_15, VAR_9->ant_type))
     FUNC_7(VAR_15, &VAR_12, VAR_9);

 VAR_12 = FUNC_2(VAR_6, VAR_9, VAR_10, VAR_13);
 VAR_9->current_rate = VAR_12;
 FUNC_6(VAR_8, VAR_9);
 FUNC_3(((void*)0), VAR_8, VAR_12);
 VAR_6->stations[VAR_8->lq.sta_id].lq = &VAR_8->lq;
 FUNC_1(VAR_6, VAR_17, &VAR_8->lq, 0, 1);
}
