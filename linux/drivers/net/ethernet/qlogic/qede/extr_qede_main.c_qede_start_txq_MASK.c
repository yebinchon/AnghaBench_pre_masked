
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef size_t u16 ;
struct TYPE_9__ {int agg_flags; int params; } ;
struct TYPE_12__ {TYPE_3__ data; } ;
struct qede_tx_queue {TYPE_6__ tx_db; int doorbell_addr; int * hw_cons_ptr; int handle; int index; int cos; scalar_t__ is_xdp; int tx_pbl; } ;
struct qede_fastpath {TYPE_2__* sb_info; } ;
struct qede_dev {int cdev; TYPE_5__* ops; } ;
struct qed_txq_start_ret_params {size_t sb_idx; int p_handle; int p_doorbell; int tc; TYPE_2__* p_sb; int queue_id; } ;
struct qed_queue_start_common_params {size_t sb_idx; int p_handle; int p_doorbell; int tc; TYPE_2__* p_sb; int queue_id; } ;
typedef int ret_params ;
typedef int params ;
typedef int dma_addr_t ;
struct TYPE_11__ {int (* q_tx_start ) (int ,int ,struct qed_txq_start_ret_params*,int ,int ,struct qed_txq_start_ret_params*) ;TYPE_4__* common; } ;
struct TYPE_10__ {int (* db_recovery_add ) (int ,int ,TYPE_6__*,int ,int ) ;} ;
struct TYPE_8__ {TYPE_1__* sb_virt; } ;
struct TYPE_7__ {int * pi_array; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct qede_dev*,char*,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct qede_dev*,struct qede_tx_queue*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct qed_txq_start_ret_params*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ,struct qed_txq_start_ret_params*,int ,int ,struct qed_txq_start_ret_params*) ;
 int FUNC_7 (int ,int ,TYPE_6__*,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct qede_dev *VAR_9,
     struct qede_fastpath *VAR_10,
     struct qede_tx_queue *VAR_11, u8 VAR_12, u16 VAR_13)
{
 dma_addr_t VAR_14 = FUNC_5(&VAR_11->tx_pbl);
 u32 VAR_15 = FUNC_4(&VAR_11->tx_pbl);
 struct qed_queue_start_common_params VAR_16;
 struct qed_txq_start_ret_params VAR_17;
 int VAR_18;

 FUNC_3(&VAR_16, 0, sizeof(VAR_16));
 FUNC_3(&VAR_17, 0, sizeof(VAR_17));




 if (VAR_11->is_xdp)
  VAR_16.queue_id = FUNC_1(VAR_9, VAR_11);
 else
  VAR_16.queue_id = VAR_11->index;

 VAR_16.p_sb = VAR_10->sb_info;
 VAR_16.sb_idx = VAR_13;
 VAR_16.tc = VAR_11->cos;

 VAR_18 = VAR_9->ops->q_tx_start(VAR_9->cdev, VAR_12, &VAR_16, VAR_14,
       VAR_15, &VAR_17);
 if (VAR_18) {
  FUNC_0(VAR_9, "Start TXQ #%d failed %d\n", VAR_11->index, VAR_18);
  return VAR_18;
 }

 VAR_11->doorbell_addr = VAR_17.p_doorbell;
 VAR_11->handle = VAR_17.p_handle;


 VAR_11->hw_cons_ptr = &VAR_10->sb_info->sb_virt->pi_array[VAR_13];


 FUNC_2(VAR_11->tx_db.data.params, VAR_8, VAR_1);
 FUNC_2(VAR_11->tx_db.data.params, VAR_6, VAR_0);
 FUNC_2(VAR_11->tx_db.data.params, VAR_7,
    VAR_5);
 VAR_11->tx_db.data.agg_flags = VAR_4;


 VAR_18 = VAR_9->ops->common->db_recovery_add(VAR_9->cdev, VAR_11->doorbell_addr,
      &VAR_11->tx_db, VAR_3,
      VAR_2);

 return VAR_18;
}
