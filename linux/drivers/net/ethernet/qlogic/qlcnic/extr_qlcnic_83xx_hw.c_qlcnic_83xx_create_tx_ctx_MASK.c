
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
typedef int u16 ;
struct qlcnic_tx_mbx_out {size_t host_prod; int state; int ctx_id; } ;
struct qlcnic_tx_mbx {int intr_id; scalar_t__ src; int size; void* cnsmr_index_high; void* cnsmr_index_low; void* phys_addr_high; void* phys_addr_low; } ;
struct qlcnic_host_tx_ring {size_t crb_cmd_producer; size_t crb_intr_mask; int ctx_id; int num_desc; int hw_cons_phys_addr; int phys_addr; scalar_t__* hw_consumer; scalar_t__ sw_consumer; scalar_t__ producer; } ;
struct qlcnic_hardware_context {scalar_t__ diag_test; size_t pci_base0; TYPE_3__* intr_tbl; } ;
struct TYPE_5__ {int * arg; } ;
struct TYPE_4__ {int* arg; } ;
struct qlcnic_cmd_args {TYPE_2__ rsp; TYPE_1__ req; } ;
struct qlcnic_adapter {int flags; int drv_sds_rings; int netdev; struct qlcnic_hardware_context* ahw; } ;
struct TYPE_6__ {int id; size_t src; } ;


 void* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct qlcnic_hardware_context*,int ) ;
 int FUNC_3 (size_t*,struct qlcnic_tx_mbx*,int) ;
 int FUNC_4 (struct qlcnic_tx_mbx*,int ,int) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (int ,char*,int ,int ) ;
 int FUNC_7 (struct qlcnic_cmd_args*,struct qlcnic_adapter*,int ) ;
 int FUNC_8 (struct qlcnic_cmd_args*) ;
 int FUNC_9 (struct qlcnic_adapter*,struct qlcnic_cmd_args*) ;
 int FUNC_10 (struct qlcnic_adapter*,size_t*) ;
 scalar_t__ FUNC_11 (struct qlcnic_adapter*) ;
 scalar_t__ FUNC_12 (struct qlcnic_adapter*) ;

int FUNC_13(struct qlcnic_adapter *VAR_7,
         struct qlcnic_host_tx_ring *VAR_8, int VAR_9)
{
 int VAR_10;
 u16 VAR_11;
 u32 *VAR_12, VAR_13, VAR_14 = 0;
 struct qlcnic_cmd_args VAR_15;
 struct qlcnic_tx_mbx VAR_16;
 struct qlcnic_tx_mbx_out *VAR_17;
 struct qlcnic_hardware_context *VAR_18 = VAR_7->ahw;
 u32 VAR_19;


 VAR_8->producer = 0;
 VAR_8->sw_consumer = 0;
 *(VAR_8->hw_consumer) = 0;

 FUNC_4(&VAR_16, 0, sizeof(struct qlcnic_tx_mbx));


 VAR_16.phys_addr_low = FUNC_0(VAR_8->phys_addr);
 VAR_16.phys_addr_high = FUNC_1(VAR_8->phys_addr);
 VAR_16.cnsmr_index_low = FUNC_0(VAR_8->hw_cons_phys_addr);
 VAR_16.cnsmr_index_high = FUNC_1(VAR_8->hw_cons_phys_addr);
 VAR_16.size = VAR_8->num_desc;
 if (VAR_7->flags & VAR_4) {
  if (!(VAR_7->flags & VAR_6))
   VAR_19 = VAR_7->drv_sds_rings + VAR_9;
  else
   VAR_19 = VAR_7->drv_sds_rings - 1;
  VAR_11 = VAR_18->intr_tbl[VAR_19].id;
 } else {
  VAR_11 = FUNC_2(VAR_18, VAR_2);
 }

 if (VAR_7->ahw->diag_test != VAR_3)
  VAR_16.intr_id = VAR_11;
 else
  VAR_16.intr_id = 0xffff;
 VAR_16.src = 0;

 VAR_10 = FUNC_7(&VAR_15, VAR_7, VAR_1);
 if (VAR_10)
  return VAR_10;

 if (FUNC_11(VAR_7) || FUNC_12(VAR_7))
  VAR_15.req.arg[0] |= (0x3 << 29);

 if (FUNC_11(VAR_7))
  FUNC_10(VAR_7, &VAR_14);

 VAR_15.req.arg[1] = VAR_0;
 VAR_15.req.arg[5] = VAR_5 | VAR_14;

 VAR_12 = &VAR_15.req.arg[6];
 FUNC_3(VAR_12, &VAR_16, sizeof(struct qlcnic_tx_mbx));

 VAR_10 = FUNC_9(VAR_7, &VAR_15);
 if (VAR_10) {
  FUNC_5(VAR_7->netdev,
      "Failed to create Tx ctx in firmware 0x%x\n", VAR_10);
  goto out;
 }
 VAR_17 = (struct qlcnic_tx_mbx_out *)&VAR_15.rsp.arg[2];
 VAR_8->crb_cmd_producer = VAR_18->pci_base0 + VAR_17->host_prod;
 VAR_8->ctx_id = VAR_17->ctx_id;
 if ((VAR_7->flags & VAR_4) &&
     !(VAR_7->flags & VAR_6)) {
  VAR_13 = VAR_18->intr_tbl[VAR_7->drv_sds_rings + VAR_9].src;
  VAR_8->crb_intr_mask = VAR_18->pci_base0 + VAR_13;
 }
 FUNC_6(VAR_7->netdev,
      "Tx Context[0x%x] Created, state:0x%x\n",
      VAR_8->ctx_id, VAR_17->state);
out:
 FUNC_8(&VAR_15);
 return VAR_10;
}
