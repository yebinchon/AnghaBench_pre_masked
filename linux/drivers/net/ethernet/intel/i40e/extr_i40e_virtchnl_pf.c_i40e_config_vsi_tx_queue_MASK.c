
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct virtchnl_txq_info {int dma_ring_addr; int dma_headwb_addr; int headwb_enabled; int ring_len; int vsi_id; } ;
struct TYPE_4__ {int * qs_handle; } ;
struct i40e_vsi {TYPE_1__ info; } ;
struct i40e_vf {int vf_id; struct i40e_pf* pf; } ;
struct TYPE_6__ {int vf_base_id; } ;
struct i40e_hw {int pf_id; TYPE_3__ func_caps; } ;
struct i40e_pf {TYPE_2__* pdev; struct i40e_hw hw; } ;
struct i40e_hmc_obj_txq {int base; int head_wb_addr; int head_wb_ena; scalar_t__ rdylist_act; int rdylist; int qlen; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,char*,int ,int) ;
 int FUNC_2 (struct i40e_hw*,int ) ;
 struct i40e_vsi* FUNC_3 (struct i40e_pf*,int ) ;
 int FUNC_4 (struct i40e_hw*) ;
 int FUNC_5 (struct i40e_hw*,int ,struct i40e_hmc_obj_txq*) ;
 int FUNC_6 (struct i40e_vf*,int ,int ) ;
 int FUNC_7 (struct i40e_vf*,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct i40e_hmc_obj_txq*,int ,int) ;
 int FUNC_10 (struct i40e_hw*,int ,int) ;

__attribute__((used)) static int FUNC_11(struct i40e_vf *VAR_6, u16 VAR_7,
        u16 VAR_8,
        struct virtchnl_txq_info *VAR_9)
{
 struct i40e_pf *VAR_10 = VAR_6->pf;
 struct i40e_hw *VAR_11 = &VAR_10->hw;
 struct i40e_hmc_obj_txq VAR_12;
 struct i40e_vsi *VAR_13;
 u16 VAR_14;
 u32 VAR_15;
 int VAR_16 = 0;

 if (!FUNC_7(VAR_6, VAR_9->vsi_id)) {
  VAR_16 = -VAR_0;
  goto error_context;
 }
 VAR_14 = FUNC_6(VAR_6, VAR_7, VAR_8);
 VAR_13 = FUNC_3(VAR_10, VAR_7);
 if (!VAR_13) {
  VAR_16 = -VAR_0;
  goto error_context;
 }


 FUNC_9(&VAR_12, 0, sizeof(struct i40e_hmc_obj_txq));


 VAR_12.base = VAR_9->dma_ring_addr / 128;
 VAR_12.qlen = VAR_9->ring_len;
 VAR_12.rdylist = FUNC_8(VAR_13->info.qs_handle[0]);
 VAR_12.rdylist_act = 0;
 VAR_12.head_wb_ena = VAR_9->headwb_enabled;
 VAR_12.head_wb_addr = VAR_9->dma_headwb_addr;


 VAR_16 = FUNC_2(VAR_11, VAR_14);
 if (VAR_16) {
  FUNC_1(&VAR_10->pdev->dev,
   "Failed to clear VF LAN Tx queue context %d, error: %d\n",
   VAR_14, VAR_16);
  VAR_16 = -VAR_0;
  goto error_context;
 }


 VAR_16 = FUNC_5(VAR_11, VAR_14, &VAR_12);
 if (VAR_16) {
  FUNC_1(&VAR_10->pdev->dev,
   "Failed to set VF LAN Tx queue context %d error: %d\n",
   VAR_14, VAR_16);
  VAR_16 = -VAR_0;
  goto error_context;
 }


 VAR_15 = VAR_5;
 VAR_15 |= ((VAR_11->pf_id << VAR_2)
      & VAR_1);
 VAR_15 |= (((VAR_6->vf_id + VAR_11->func_caps.vf_base_id)
       << VAR_4)
      & VAR_3);
 FUNC_10(VAR_11, FUNC_0(VAR_14), VAR_15);
 FUNC_4(VAR_11);

error_context:
 return VAR_16;
}
