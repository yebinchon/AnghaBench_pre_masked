
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct iwl_txq {int id; int read_ptr; int write_ptr; } ;
struct iwl_tx_queue_cfg_rsp {int write_pointer; int queue_number; } ;
struct iwl_trans_pcie {struct iwl_txq** txq; int queue_used; } ;
struct iwl_trans {TYPE_2__* trans_cfg; } ;
struct iwl_host_cmd {TYPE_3__* resp_pkt; } ;
struct TYPE_6__ {scalar_t__ data; } ;
struct TYPE_5__ {TYPE_1__* base_params; } ;
struct TYPE_4__ {int max_tfd_queue_size; } ;


 int FUNC_0 (struct iwl_txq**) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct iwl_trans*,char*,int) ;
 struct iwl_trans_pcie* FUNC_2 (struct iwl_trans*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int,char*,int) ;
 int FUNC_5 (struct iwl_host_cmd*) ;
 int FUNC_6 (struct iwl_trans*,struct iwl_txq*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int,int ) ;

int FUNC_10(struct iwl_trans *VAR_2,
          struct iwl_txq *VAR_3,
          struct iwl_host_cmd *VAR_4)
{
 struct iwl_trans_pcie *VAR_5 = FUNC_2(VAR_2);
 struct iwl_tx_queue_cfg_rsp *VAR_6;
 int VAR_7, VAR_8;
 u32 VAR_9;

 if (FUNC_3(FUNC_7(VAR_4->resp_pkt) !=
      sizeof(*VAR_6))) {
  VAR_7 = -VAR_0;
  goto error_free_resp;
 }

 VAR_6 = (void *)VAR_4->resp_pkt->data;
 VAR_8 = FUNC_8(VAR_6->queue_number);
 VAR_9 = FUNC_8(VAR_6->write_pointer);

 if (VAR_8 >= FUNC_0(VAR_5->txq)) {
  FUNC_4(1, "queue index %d unsupported", VAR_8);
  VAR_7 = -VAR_1;
  goto error_free_resp;
 }

 if (FUNC_9(VAR_8, VAR_5->queue_used)) {
  FUNC_4(1, "queue %d already used", VAR_8);
  VAR_7 = -VAR_1;
  goto error_free_resp;
 }

 VAR_3->id = VAR_8;
 VAR_5->txq[VAR_8] = VAR_3;
 VAR_9 &= (VAR_2->trans_cfg->base_params->max_tfd_queue_size - 1);


 VAR_3->read_ptr = VAR_9;
 VAR_3->write_ptr = VAR_9;

 FUNC_1(VAR_2, "Activate queue %d\n", VAR_8);

 FUNC_5(VAR_4);
 return VAR_8;

error_free_resp:
 FUNC_5(VAR_4);
 FUNC_6(VAR_2, VAR_3);
 return VAR_7;
}
