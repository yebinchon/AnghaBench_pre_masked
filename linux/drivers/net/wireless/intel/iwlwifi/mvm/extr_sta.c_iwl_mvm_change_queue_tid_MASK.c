
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_scd_txq_cfg_cmd {int scd_queue; int tid; int tx_fifo; int action; } ;
struct iwl_mvm {TYPE_1__* queue_info; int mutex; } ;
typedef int cmd ;
struct TYPE_2__ {unsigned long tid_bitmap; int txq_tid; } ;


 int FUNC_0 (struct iwl_mvm*,char*,int,int) ;
 int FUNC_1 (struct iwl_mvm*,char*,int,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int,char*,int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (unsigned long*,scalar_t__) ;
 int * VAR_3 ;
 int FUNC_5 (struct iwl_mvm*) ;
 int FUNC_6 (struct iwl_mvm*,int ,int ,int,struct iwl_scd_txq_cfg_cmd*) ;
 int FUNC_7 (int *) ;
 size_t* VAR_4 ;

__attribute__((used)) static void FUNC_8(struct iwl_mvm *VAR_5, int VAR_6)
{
 struct iwl_scd_txq_cfg_cmd VAR_7 = {
  .scd_queue = VAR_6,
  .action = VAR_1,
 };
 int VAR_8;
 unsigned long VAR_9;
 int VAR_10;

 FUNC_7(&VAR_5->mutex);

 if (FUNC_3(FUNC_5(VAR_5)))
  return;

 VAR_9 = VAR_5->queue_info[VAR_6].tid_bitmap;

 if (FUNC_2(!VAR_9, "TXQ %d has no tids assigned to it\n", VAR_6))
  return;


 VAR_8 = FUNC_4(&VAR_9, VAR_0 + 1);
 VAR_7.tid = VAR_8;
 VAR_7.tx_fifo = VAR_3[VAR_4[VAR_8]];

 VAR_10 = FUNC_6(VAR_5, VAR_2, 0, sizeof(VAR_7), &VAR_7);
 if (VAR_10) {
  FUNC_1(VAR_5, "Failed to update owner of TXQ %d (ret=%d)\n",
   VAR_6, VAR_10);
  return;
 }

 VAR_5->queue_info[VAR_6].txq_tid = VAR_8;
 FUNC_0(VAR_5, "Changed TXQ %d ownership to tid %d\n",
       VAR_6, VAR_8);
}
