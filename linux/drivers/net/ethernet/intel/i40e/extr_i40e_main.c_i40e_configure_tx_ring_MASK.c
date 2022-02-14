
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
typedef scalar_t__ u16 ;
typedef int tx_ctx ;
struct TYPE_7__ {int * qs_handle; } ;
struct i40e_vsi {scalar_t__ type; int id; TYPE_4__* back; TYPE_2__ info; scalar_t__ base_queue; } ;
struct i40e_tx_desc {int dummy; } ;
struct i40e_ring {int dma; int count; size_t dcb_tc; scalar_t__ tail; TYPE_5__* ch; scalar_t__ queue_index; scalar_t__ atr_sample_rate; scalar_t__ atr_count; int xsk_umem; struct i40e_vsi* vsi; } ;
struct i40e_hw {int pf_id; scalar_t__ hw_addr; } ;
struct i40e_hmc_obj_txq {int new_context; int base; int qlen; int fd_ena; int timesync_ena; int head_wb_ena; int head_wb_addr; scalar_t__ rdylist_act; void* rdylist; } ;
typedef scalar_t__ i40e_status ;
struct TYPE_6__ {int * qs_handle; } ;
struct TYPE_10__ {scalar_t__ type; int vsi_number; TYPE_1__ info; } ;
struct TYPE_9__ {int flags; TYPE_3__* pdev; scalar_t__ atr_sample_rate; struct i40e_hw hw; } ;
struct TYPE_8__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_2 (int *,char*,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (struct i40e_hw*,scalar_t__) ;
 int FUNC_4 (struct i40e_ring*) ;
 int FUNC_5 (struct i40e_hw*) ;
 scalar_t__ FUNC_6 (struct i40e_hw*,scalar_t__,struct i40e_hmc_obj_txq*) ;
 int FUNC_7 (struct i40e_ring*) ;
 void* FUNC_8 (int ) ;
 int FUNC_9 (struct i40e_hmc_obj_txq*,int ,int) ;
 scalar_t__ FUNC_10 (struct i40e_ring*) ;
 int FUNC_11 (struct i40e_hw*,int ,int) ;

__attribute__((used)) static int FUNC_12(struct i40e_ring *VAR_13)
{
 struct i40e_vsi *VAR_14 = VAR_13->vsi;
 u16 VAR_15 = VAR_14->base_queue + VAR_13->queue_index;
 struct i40e_hw *VAR_16 = &VAR_14->back->hw;
 struct i40e_hmc_obj_txq VAR_17;
 i40e_status VAR_18 = 0;
 u32 VAR_19 = 0;

 if (FUNC_10(VAR_13))
  VAR_13->xsk_umem = FUNC_7(VAR_13);


 if (VAR_14->back->flags & VAR_2) {
  VAR_13->atr_sample_rate = VAR_14->back->atr_sample_rate;
  VAR_13->atr_count = 0;
 } else {
  VAR_13->atr_sample_rate = 0;
 }


 FUNC_4(VAR_13);


 FUNC_9(&VAR_17, 0, sizeof(VAR_17));

 VAR_17.new_context = 1;
 VAR_17.base = (VAR_13->dma / 128);
 VAR_17.qlen = VAR_13->count;
 VAR_17.fd_ena = !!(VAR_14->back->flags & (VAR_3 |
            VAR_2));
 VAR_17.timesync_ena = !!(VAR_14->back->flags & VAR_4);

 if (VAR_14->type != VAR_11)
  VAR_17.head_wb_ena = 1;
 VAR_17.head_wb_addr = VAR_13->dma +
         (VAR_13->count * sizeof(struct i40e_tx_desc));
 if (VAR_13->ch)
  VAR_17.rdylist =
   FUNC_8(VAR_13->ch->info.qs_handle[VAR_13->dcb_tc]);

 else
  VAR_17.rdylist = FUNC_8(VAR_14->info.qs_handle[VAR_13->dcb_tc]);

 VAR_17.rdylist_act = 0;


 VAR_18 = FUNC_3(VAR_16, VAR_15);
 if (VAR_18) {
  FUNC_2(&VAR_14->back->pdev->dev,
    "Failed to clear LAN Tx queue context on Tx ring %d (pf_q %d), error: %d\n",
    VAR_13->queue_index, VAR_15, VAR_18);
  return -VAR_1;
 }


 VAR_18 = FUNC_6(VAR_16, VAR_15, &VAR_17);
 if (VAR_18) {
  FUNC_2(&VAR_14->back->pdev->dev,
    "Failed to set LAN Tx queue context on Tx ring %d (pf_q %d, error: %d\n",
    VAR_13->queue_index, VAR_15, VAR_18);
  return -VAR_1;
 }


 if (VAR_13->ch) {
  if (VAR_13->ch->type == VAR_12)
   VAR_19 = VAR_10;
  else
   return -VAR_0;

  VAR_19 |= (VAR_13->ch->vsi_number <<
       VAR_9) &
       VAR_8;
 } else {
  if (VAR_14->type == VAR_12) {
   VAR_19 = VAR_10;
   VAR_19 |= ((VAR_14->id) << VAR_9) &
        VAR_8;
  } else {
   VAR_19 = VAR_7;
  }
 }

 VAR_19 |= ((VAR_16->pf_id << VAR_6) &
      VAR_5);
 FUNC_11(VAR_16, FUNC_0(VAR_15), VAR_19);
 FUNC_5(VAR_16);


 VAR_13->tail = VAR_16->hw_addr + FUNC_1(VAR_15);

 return 0;
}
