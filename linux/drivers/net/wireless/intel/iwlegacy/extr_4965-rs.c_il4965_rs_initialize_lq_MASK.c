
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
struct il_scale_tbl_info {int ant_type; int current_rate; } ;
struct TYPE_5__ {size_t valid_tx_ant; } ;
struct il_priv {TYPE_2__* stations; int band; TYPE_1__ hw_params; } ;
struct TYPE_7__ {size_t sta_id; } ;
struct il_lq_sta {int last_txrate_idx; size_t active_tbl; TYPE_3__ lq; struct il_scale_tbl_info* lq_info; int search_better_tbl; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_conf {int dummy; } ;
struct TYPE_8__ {int plcp; } ;
struct TYPE_6__ {TYPE_3__* lq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (struct il_priv*,struct il_scale_tbl_info*,int,size_t) ;
 int FUNC_2 (int *,struct il_lq_sta*,int) ;
 int FUNC_3 (int,int ,struct il_scale_tbl_info*,int*) ;
 int FUNC_4 (size_t,int) ;
 int FUNC_5 (struct il_lq_sta*,struct il_scale_tbl_info*) ;
 int FUNC_6 (size_t,int*,struct il_scale_tbl_info*) ;
 size_t FUNC_7 (struct il_priv*,struct ieee80211_sta*) ;
 TYPE_4__* VAR_6 ;
 int FUNC_8 (struct il_priv*,TYPE_3__*,int ,int) ;

__attribute__((used)) static void
FUNC_9(struct il_priv *VAR_7, struct ieee80211_conf *VAR_8,
   struct ieee80211_sta *VAR_9, struct il_lq_sta *VAR_10)
{
 struct il_scale_tbl_info *VAR_11;
 int VAR_12;
 int VAR_13;
 u32 VAR_14;
 u8 VAR_15;
 u8 VAR_16 = 0;
 u8 VAR_17;

 if (!VAR_9 || !VAR_10)
  return;

 VAR_15 = FUNC_7(VAR_7, VAR_9);

 VAR_13 = VAR_10->last_txrate_idx;

 VAR_17 = VAR_7->hw_params.valid_tx_ant;

 if (!VAR_10->search_better_tbl)
  VAR_16 = VAR_10->active_tbl;
 else
  VAR_16 = 1 - VAR_10->active_tbl;

 VAR_11 = &(VAR_10->lq_info[VAR_16]);

 if (VAR_13 < 0 || VAR_13 >= VAR_3)
  VAR_13 = 0;

 VAR_14 = VAR_6[VAR_13].plcp;
 VAR_11->ant_type = FUNC_0(VAR_17);
 VAR_14 |= VAR_11->ant_type << VAR_4;

 if (VAR_13 >= VAR_1 && VAR_13 <= VAR_2)
  VAR_14 |= VAR_5;

 FUNC_3(VAR_14, VAR_7->band, VAR_11, &VAR_12);
 if (!FUNC_4(VAR_17, VAR_11->ant_type))
  FUNC_6(VAR_17, &VAR_14, VAR_11);

 VAR_14 = FUNC_1(VAR_7, VAR_11, VAR_12, VAR_15);
 VAR_11->current_rate = VAR_14;
 FUNC_5(VAR_10, VAR_11);
 FUNC_2(((void*)0), VAR_10, VAR_14);
 VAR_7->stations[VAR_10->lq.sta_id].lq = &VAR_10->lq;
 FUNC_8(VAR_7, &VAR_10->lq, VAR_0, 1);
}
