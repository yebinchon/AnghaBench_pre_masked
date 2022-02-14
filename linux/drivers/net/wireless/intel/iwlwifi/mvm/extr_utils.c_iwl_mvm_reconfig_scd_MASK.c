
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct iwl_scd_txq_cfg_cmd {int scd_queue; int window; int sta_id; int tx_fifo; int aggregate; int tid; int ssn; int action; } ;
struct iwl_mvm {TYPE_1__* queue_info; } ;
typedef int cmd ;
struct TYPE_2__ {scalar_t__ tid_bitmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iwl_mvm*,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int,char*,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int,char*,int,int,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct iwl_mvm*) ;
 int FUNC_6 (struct iwl_mvm*,int ,int ,int,struct iwl_scd_txq_cfg_cmd*) ;

int FUNC_7(struct iwl_mvm *VAR_6, int VAR_7, int VAR_8, int VAR_9,
    int VAR_10, int VAR_11, u16 VAR_12)
{
 struct iwl_scd_txq_cfg_cmd VAR_13 = {
  .scd_queue = VAR_7,
  .action = VAR_4,
  .window = VAR_11,
  .sta_id = VAR_9,
  .ssn = FUNC_4(VAR_12),
  .tx_fifo = VAR_8,
  .aggregate = (VAR_7 >= VAR_3 ||
         VAR_7 == VAR_2),
  .tid = VAR_10,
 };
 int VAR_14;

 if (FUNC_2(FUNC_5(VAR_6)))
  return -VAR_0;

 if (FUNC_1(VAR_6->queue_info[VAR_7].tid_bitmap == 0,
   "Trying to reconfig unallocated queue %d\n", VAR_7))
  return -VAR_1;

 FUNC_0(VAR_6, "Reconfig SCD for TXQ #%d\n", VAR_7);

 VAR_14 = FUNC_6(VAR_6, VAR_5, 0, sizeof(VAR_13), &VAR_13);
 FUNC_3(VAR_14, "Failed to re-configure queue %d on FIFO %d, ret=%d\n",
    VAR_7, VAR_8, VAR_14);

 return VAR_14;
}
