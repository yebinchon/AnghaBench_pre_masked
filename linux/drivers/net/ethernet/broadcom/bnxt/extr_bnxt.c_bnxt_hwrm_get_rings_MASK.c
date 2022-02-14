
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct hwrm_func_qcfg_output {int alloc_msix; int alloc_stat_ctx; int alloc_cmpl_rings; int alloc_vnics; int alloc_hw_ring_grps; int alloc_rx_rings; int alloc_tx_rings; } ;
struct hwrm_func_qcfg_input {int fid; int member_0; } ;
struct bnxt_hw_resc {int resv_tx_rings; int resv_rx_rings; int resv_hw_ring_grps; int resv_irqs; int resv_cp_rings; int resv_stat_ctxs; void* resv_vnics; } ;
struct bnxt {int hwrm_spec_code; int flags; int hwrm_cmd_lock; struct bnxt_hw_resc hw_resc; struct hwrm_func_qcfg_output* hwrm_cmd_resp_addr; } ;
typedef int req ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct bnxt*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct bnxt*,struct hwrm_func_qcfg_input*,int,int ) ;
 int FUNC_2 (struct bnxt*,struct hwrm_func_qcfg_input*,int ,int,int) ;
 int FUNC_3 (struct bnxt*,int*,int*,int,int) ;
 int FUNC_4 (int) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct bnxt *VAR_4)
{
 struct hwrm_func_qcfg_output *VAR_5 = VAR_4->hwrm_cmd_resp_addr;
 struct bnxt_hw_resc *VAR_6 = &VAR_4->hw_resc;
 struct hwrm_func_qcfg_input VAR_7 = {0};
 int VAR_8;

 if (VAR_4->hwrm_spec_code < 0x10601)
  return 0;

 FUNC_2(VAR_4, &VAR_7, VAR_3, -1, -1);
 VAR_7.fid = FUNC_4(0xffff);
 FUNC_7(&VAR_4->hwrm_cmd_lock);
 VAR_8 = FUNC_1(VAR_4, &VAR_7, sizeof(VAR_7), VAR_2);
 if (VAR_8) {
  FUNC_8(&VAR_4->hwrm_cmd_lock);
  return VAR_8;
 }

 VAR_6->resv_tx_rings = FUNC_5(VAR_5->alloc_tx_rings);
 if (FUNC_0(VAR_4)) {
  u16 VAR_9, VAR_10;

  VAR_6->resv_rx_rings = FUNC_5(VAR_5->alloc_rx_rings);
  VAR_6->resv_hw_ring_grps =
   FUNC_6(VAR_5->alloc_hw_ring_grps);
  VAR_6->resv_vnics = FUNC_5(VAR_5->alloc_vnics);
  VAR_9 = FUNC_5(VAR_5->alloc_cmpl_rings);
  VAR_10 = FUNC_5(VAR_5->alloc_stat_ctx);
  VAR_6->resv_irqs = VAR_9;
  if (VAR_4->flags & VAR_1) {
   int VAR_11 = VAR_6->resv_rx_rings;
   int VAR_12 = VAR_6->resv_tx_rings;

   if (VAR_4->flags & VAR_0)
    VAR_11 >>= 1;
   if (VAR_9 < (VAR_11 + VAR_12)) {
    FUNC_3(VAR_4, &VAR_11, &VAR_12, VAR_9, 0);
    if (VAR_4->flags & VAR_0)
     VAR_11 <<= 1;
    VAR_6->resv_rx_rings = VAR_11;
    VAR_6->resv_tx_rings = VAR_12;
   }
   VAR_6->resv_irqs = FUNC_5(VAR_5->alloc_msix);
   VAR_6->resv_hw_ring_grps = VAR_11;
  }
  VAR_6->resv_cp_rings = VAR_9;
  VAR_6->resv_stat_ctxs = VAR_10;
 }
 FUNC_8(&VAR_4->hwrm_cmd_lock);
 return 0;
}
