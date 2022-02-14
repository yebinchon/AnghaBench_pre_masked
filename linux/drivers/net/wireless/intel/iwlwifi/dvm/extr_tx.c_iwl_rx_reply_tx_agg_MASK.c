
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct agg_tx_status {int status; } ;
struct iwlagn_tx_resp {int ra_tid; int frame_count; int rate_n_flags; scalar_t__ bt_kill_count; struct agg_tx_status status; } ;
struct iwl_priv {TYPE_3__* lib; TYPE_1__** tid_data; } ;
struct iwl_ht_agg {int wait_for_ba; int txq_id; int rate_n_flags; } ;
struct TYPE_6__ {TYPE_2__* bt_params; } ;
struct TYPE_5__ {scalar_t__ advanced_bt_coexist; } ;
struct TYPE_4__ {struct iwl_ht_agg agg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct iwl_priv*,char*) ;
 int FUNC_1 (struct iwl_priv*,char*,...) ;
 int VAR_9 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct iwl_priv*,int) ;
 int FUNC_5 (struct iwlagn_tx_resp*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct iwl_priv *VAR_10,
    struct iwlagn_tx_resp *VAR_11)
{
 struct agg_tx_status *VAR_12 = &VAR_11->status;
 int VAR_13 = (VAR_11->ra_tid & VAR_7) >>
  VAR_8;
 int VAR_14 = (VAR_11->ra_tid & VAR_5) >>
  VAR_6;
 struct iwl_ht_agg *VAR_15 = &VAR_10->tid_data[VAR_14][VAR_13].agg;
 u32 VAR_16 = FUNC_6(VAR_11->status.status);
 int VAR_17;

 FUNC_2(VAR_13 == VAR_9);

 if (VAR_15->wait_for_ba)
  FUNC_1(VAR_10,
   "got tx response w/o block-ack\n");

 VAR_15->rate_n_flags = FUNC_7(VAR_11->rate_n_flags);
 VAR_15->wait_for_ba = (VAR_11->frame_count > 1);





 if (VAR_11->bt_kill_count && VAR_11->frame_count == 1 &&
     VAR_10->lib->bt_params &&
     VAR_10->lib->bt_params->advanced_bt_coexist) {
  FUNC_0(VAR_10, "receive reply tx w/ bt_kill\n");
 }

 if (VAR_11->frame_count == 1)
  return;

 FUNC_1(VAR_10, "TXQ %d initial_rate 0x%x ssn %d frm_cnt %d\n",
      VAR_15->txq_id,
      FUNC_7(VAR_11->rate_n_flags),
      FUNC_5(VAR_11), VAR_11->frame_count);


 for (VAR_17 = 0; VAR_17 < VAR_11->frame_count; VAR_17++) {
  u16 VAR_18 = FUNC_6(VAR_12[VAR_17].status);
  u8 VAR_19 = (VAR_18 & VAR_3) >> VAR_4;

  if (VAR_16 & VAR_2)
   FUNC_4(VAR_10, VAR_18);

  if (VAR_16 & (VAR_1 |
         VAR_0))
   continue;

  if (VAR_16 & VAR_2 || VAR_19 > 1)
   FUNC_1(VAR_10,
        "%d: status %s (0x%04x), try-count (0x%01x)\n",
        VAR_17,
        FUNC_3(VAR_18),
        VAR_18 & VAR_2,
        VAR_19);
 }
}
