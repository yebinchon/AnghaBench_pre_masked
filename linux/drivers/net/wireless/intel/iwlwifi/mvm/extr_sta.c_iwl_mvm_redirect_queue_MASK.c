
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_scd_txq_cfg_cmd {int scd_queue; int tid; int sta_id; int tx_fifo; int action; } ;
struct iwl_mvm_txq {int stopped; } ;
struct iwl_mvm {int trans; TYPE_1__* queue_info; } ;
typedef int cmd ;
struct TYPE_2__ {int mac80211_ac; int txq_tid; int tid_bitmap; int ra_sta_id; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct iwl_mvm*,char*,int,...) ;
 int FUNC_2 (struct iwl_mvm*,char*,int,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int * VAR_5 ;
 int FUNC_5 (struct iwl_mvm*) ;
 int FUNC_6 (struct iwl_mvm*,int,int ,int ,int,int ,int) ;
 int FUNC_7 (struct iwl_mvm*,int ,int ,int,struct iwl_scd_txq_cfg_cmd*) ;
 int FUNC_8 (int ,int,int) ;
 int FUNC_9 (int ,int,int,int *,unsigned int) ;
 int FUNC_10 (int ,int,int) ;
 int FUNC_11 (int ,int ) ;

__attribute__((used)) static int FUNC_12(struct iwl_mvm *VAR_6, int VAR_7, int VAR_8,
      int VAR_9, int VAR_10, unsigned int VAR_11,
      bool VAR_12, struct iwl_mvm_txq *VAR_13)
{
 struct iwl_scd_txq_cfg_cmd VAR_14 = {
  .scd_queue = VAR_7,
  .action = VAR_3,
 };
 bool VAR_15;
 int VAR_16;

 if (FUNC_3(FUNC_5(VAR_6)))
  return -VAR_0;
 if (VAR_9 <= VAR_6->queue_info[VAR_7].mac80211_ac && !VAR_12) {
  FUNC_1(VAR_6,
        "No redirection needed on TXQ #%d\n",
        VAR_7);
  return 0;
 }

 VAR_14.sta_id = VAR_6->queue_info[VAR_7].ra_sta_id;
 VAR_14.tx_fifo = VAR_5[VAR_6->queue_info[VAR_7].mac80211_ac];
 VAR_14.tid = VAR_6->queue_info[VAR_7].txq_tid;
 VAR_15 = FUNC_4(VAR_6->queue_info[VAR_7].tid_bitmap) > 1;

 FUNC_1(VAR_6, "Redirecting TXQ #%d to FIFO #%d\n",
       VAR_7, VAR_5[VAR_9]);


 VAR_13->stopped = 1;

 VAR_16 = FUNC_11(VAR_6->trans, FUNC_0(VAR_7));
 if (VAR_16) {
  FUNC_2(VAR_6, "Error draining queue %d before reconfig\n",
   VAR_7);
  VAR_16 = -VAR_1;
  goto out;
 }


 FUNC_8(VAR_6->trans, VAR_7, 0);
 VAR_16 = FUNC_7(VAR_6, VAR_4, 0, sizeof(VAR_14), &VAR_14);
 if (VAR_16)
  FUNC_2(VAR_6, "Failed SCD disable TXQ %d (ret=%d)\n", VAR_7,
   VAR_16);


 FUNC_9(VAR_6->trans, VAR_7, VAR_10, ((void*)0), VAR_11);


 VAR_6->queue_info[VAR_7].txq_tid = VAR_8;




 FUNC_6(VAR_6, VAR_7, VAR_5[VAR_9],
        VAR_14.sta_id, VAR_8, VAR_2, VAR_10);


 VAR_6->queue_info[VAR_7].mac80211_ac = VAR_9;







 if (VAR_15)
  FUNC_10(VAR_6->trans, VAR_7, 1);

out:

 VAR_13->stopped = 0;

 return VAR_16;
}
