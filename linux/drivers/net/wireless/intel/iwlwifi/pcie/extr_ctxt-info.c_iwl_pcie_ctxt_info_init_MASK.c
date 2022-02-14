
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct iwl_trans_pcie {int rx_buf_size; size_t cmd_queue; int ctxt_info_dma_addr; struct iwl_context_info* ctxt_info; TYPE_4__** txq; TYPE_3__* rxq; } ;
struct iwl_trans {int dev; } ;
struct iwl_context_info_rbd_cfg {void* status_wr_ptr; void* used_rbd_addr; void* free_rbd_addr; } ;
struct TYPE_10__ {int cmd_queue_size; void* cmd_queue_addr; } ;
struct TYPE_7__ {int control_flags; } ;
struct TYPE_6__ {void* size; void* mac_id; scalar_t__ version; } ;
struct iwl_context_info {int dram; TYPE_5__ hcmd_cfg; struct iwl_context_info_rbd_cfg rbd_cfg; TYPE_2__ control; TYPE_1__ version; } ;
struct fw_img {int dummy; } ;
struct TYPE_9__ {int dma_addr; } ;
struct TYPE_8__ {int rb_stts_dma; int used_bd_dma; int bd_dma; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct iwl_trans_pcie* FUNC_1 (struct iwl_trans*) ;
 int VAR_12 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_13 ;
 int FUNC_4 (int) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (int) ;
 void* FUNC_7 (int ) ;
 struct iwl_context_info* FUNC_8 (int ,int,int *,int ) ;
 int FUNC_9 (int ,int,struct iwl_context_info*,int ) ;
 int FUNC_10 (struct iwl_trans*) ;
 int FUNC_11 (struct iwl_trans*) ;
 scalar_t__ FUNC_12 (struct iwl_trans*) ;
 int FUNC_13 (struct iwl_trans*,struct fw_img const*,int *) ;
 scalar_t__ FUNC_14 (struct iwl_trans*,int ) ;
 int FUNC_15 (struct iwl_trans*,int ,int ) ;
 int FUNC_16 (struct iwl_trans*,int ,int) ;

int FUNC_17(struct iwl_trans *VAR_14,
       const struct fw_img *VAR_15)
{
 struct iwl_trans_pcie *VAR_16 = FUNC_1(VAR_14);
 struct iwl_context_info *VAR_17;
 struct iwl_context_info_rbd_cfg *VAR_18;
 u32 VAR_19 = 0, VAR_20;
 int VAR_21;

 VAR_17 = FUNC_8(VAR_14->dev, sizeof(*VAR_17),
           &VAR_16->ctxt_info_dma_addr,
           VAR_3);
 if (!VAR_17)
  return -VAR_2;

 VAR_17->version.version = 0;
 VAR_17->version.mac_id =
  FUNC_5((u16)FUNC_14(VAR_14, VAR_1));

 VAR_17->version.size = FUNC_5(sizeof(*VAR_17) / 4);

 switch (VAR_16->rx_buf_size) {
 case 130:
  VAR_20 = VAR_7;
  break;
 case 129:
  VAR_20 = VAR_8;
  break;
 case 128:
  VAR_20 = VAR_9;
  break;
 case 131:
  VAR_20 = VAR_6;
  break;
 default:
  FUNC_4(1);
  VAR_20 = VAR_8;
 }

 FUNC_0(FUNC_2(VAR_12) > 0xF);
 VAR_19 = VAR_11 |
   (FUNC_2(VAR_12) <<
    VAR_5) |
   (VAR_20 << VAR_10);
 VAR_17->control.control_flags = FUNC_6(VAR_19);


 VAR_18 = &VAR_17->rbd_cfg;
 VAR_18->free_rbd_addr = FUNC_7(VAR_16->rxq->bd_dma);
 VAR_18->used_rbd_addr = FUNC_7(VAR_16->rxq->used_bd_dma);
 VAR_18->status_wr_ptr = FUNC_7(VAR_16->rxq->rb_stts_dma);


 VAR_17->hcmd_cfg.cmd_queue_addr =
  FUNC_7(VAR_16->txq[VAR_16->cmd_queue]->dma_addr);
 VAR_17->hcmd_cfg.cmd_queue_size =
  FUNC_3(VAR_4);


 VAR_21 = FUNC_13(VAR_14, VAR_15, &VAR_17->dram);
 if (VAR_21) {
  FUNC_9(VAR_14->dev, sizeof(*VAR_16->ctxt_info),
      VAR_17, VAR_16->ctxt_info_dma_addr);
  return VAR_21;
 }

 VAR_16->ctxt_info = VAR_17;

 FUNC_10(VAR_14);


 if (FUNC_12(VAR_14))
  FUNC_11(VAR_14);


 FUNC_15(VAR_14, VAR_0, VAR_16->ctxt_info_dma_addr);
 FUNC_16(VAR_14, VAR_13, 1);



 return 0;
}
