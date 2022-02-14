
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u16 ;
struct iwlagn_scd_bc_tbl {int dummy; } ;
struct iwl_txq {int dummy; } ;
struct iwl_trans_pcie {int cmd_queue; TYPE_4__** txq; TYPE_4__* txq_memory; int kw; int scd_bc_tbls; } ;
struct iwl_trans {TYPE_3__* cfg; TYPE_2__* trans_cfg; } ;
struct iwl_gen3_bc_tbl {int dummy; } ;
struct TYPE_10__ {int id; } ;
struct TYPE_9__ {int min_256_ba_txq_size; int min_txq_size; } ;
struct TYPE_8__ {scalar_t__ device_family; TYPE_1__* base_params; } ;
struct TYPE_7__ {int num_of_queues; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct iwl_trans*,char*,...) ;
 int VAR_6 ;
 struct iwl_trans_pcie* FUNC_1 (struct iwl_trans*) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (struct iwl_trans*,int *,int) ;
 int FUNC_4 (struct iwl_trans*) ;
 int FUNC_5 (struct iwl_trans*,TYPE_4__*,int,int) ;
 TYPE_4__* FUNC_6 (int,int,int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_8(struct iwl_trans *VAR_8)
{
 int VAR_9;
 int VAR_10, VAR_11;
 struct iwl_trans_pcie *VAR_12 = FUNC_1(VAR_8);
 u16 VAR_13 = VAR_8->trans_cfg->base_params->num_of_queues;

 VAR_13 *= (VAR_8->trans_cfg->device_family >=
    VAR_5) ?
  sizeof(struct iwl_gen3_bc_tbl) :
  sizeof(struct iwlagn_scd_bc_tbl);



 if (FUNC_2(VAR_12->txq_memory)) {
  VAR_9 = -VAR_0;
  goto error;
 }

 VAR_9 = FUNC_3(VAR_8, &VAR_12->scd_bc_tbls,
         VAR_13);
 if (VAR_9) {
  FUNC_0(VAR_8, "Scheduler BC Table allocation failed\n");
  goto error;
 }


 VAR_9 = FUNC_3(VAR_8, &VAR_12->kw, VAR_6);
 if (VAR_9) {
  FUNC_0(VAR_8, "Keep Warm allocation failed\n");
  goto error;
 }

 VAR_12->txq_memory =
  FUNC_6(VAR_8->trans_cfg->base_params->num_of_queues,
   sizeof(struct iwl_txq), VAR_2);
 if (!VAR_12->txq_memory) {
  FUNC_0(VAR_8, "Not enough memory for txq\n");
  VAR_9 = -VAR_1;
  goto error;
 }


 for (VAR_10 = 0; VAR_10 < VAR_8->trans_cfg->base_params->num_of_queues;
      VAR_10++) {
  bool VAR_14 = (VAR_10 == VAR_12->cmd_queue);

  if (VAR_14)
   VAR_11 = FUNC_7(VAR_7, VAR_3,
       VAR_8->cfg->min_txq_size);
  else
   VAR_11 = FUNC_7(VAR_7, VAR_4,
       VAR_8->cfg->min_256_ba_txq_size);
  VAR_12->txq[VAR_10] = &VAR_12->txq_memory[VAR_10];
  VAR_9 = FUNC_5(VAR_8, VAR_12->txq[VAR_10],
      VAR_11, VAR_14);
  if (VAR_9) {
   FUNC_0(VAR_8, "Tx %d queue alloc failed\n", VAR_10);
   goto error;
  }
  VAR_12->txq[VAR_10]->id = VAR_10;
 }

 return 0;

error:
 FUNC_4(VAR_8);

 return VAR_9;
}
