
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hwrm_func_drv_if_change_output {int flags; } ;
struct hwrm_func_drv_if_change_input {int flags; int member_0; } ;
struct bnxt_hw_resc {scalar_t__ resv_vnics; scalar_t__ resv_hw_ring_grps; scalar_t__ resv_rx_rings; scalar_t__ resv_tx_rings; scalar_t__ resv_irqs; scalar_t__ resv_stat_ctxs; scalar_t__ resv_cp_rings; } ;
struct bnxt {int fw_cap; scalar_t__ rx_nr_rings; scalar_t__ tx_nr_rings; struct bnxt_hw_resc hw_resc; int state; int dev; int hwrm_cmd_lock; struct hwrm_func_drv_if_change_output* hwrm_cmd_resp_addr; } ;
typedef int req ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct bnxt*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct bnxt*,struct hwrm_func_drv_if_change_input*,int,int ) ;
 int FUNC_2 (struct bnxt*) ;
 int FUNC_3 (struct bnxt*) ;
 int FUNC_4 (struct bnxt*,struct hwrm_func_drv_if_change_input*,int ,int,int) ;
 int FUNC_5 (struct bnxt*,int) ;
 int FUNC_6 (struct bnxt*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (int ,int *) ;
 scalar_t__ FUNC_13 (int ,int *) ;

__attribute__((used)) static int FUNC_14(struct bnxt *VAR_10, bool VAR_11)
{
 struct hwrm_func_drv_if_change_output *VAR_12 = VAR_10->hwrm_cmd_resp_addr;
 struct hwrm_func_drv_if_change_input VAR_13 = {0};
 bool VAR_14 = 0, VAR_15 = 0;
 u32 VAR_16 = 0;
 int VAR_17;

 if (!(VAR_10->fw_cap & VAR_0))
  return 0;

 FUNC_4(VAR_10, &VAR_13, VAR_9, -1, -1);
 if (VAR_11)
  VAR_13.flags = FUNC_7(VAR_5);
 FUNC_9(&VAR_10->hwrm_cmd_lock);
 VAR_17 = FUNC_1(VAR_10, &VAR_13, sizeof(VAR_13), VAR_8);
 if (!VAR_17)
  VAR_16 = FUNC_8(VAR_12->flags);
 FUNC_10(&VAR_10->hwrm_cmd_lock);
 if (VAR_17)
  return VAR_17;

 if (!VAR_11)
  return 0;

 if (VAR_16 & VAR_7)
  VAR_14 = 1;
 if (VAR_16 & VAR_6)
  VAR_15 = 1;

 if (FUNC_13(VAR_3, &VAR_10->state) && !VAR_15) {
  FUNC_11(VAR_10->dev, "RESET_DONE not set during FW reset.\n");
  return -VAR_4;
 }
 if (VAR_14 || VAR_15) {
  if (VAR_15) {
   VAR_17 = FUNC_3(VAR_10);
   if (VAR_17) {
    FUNC_12(VAR_1, &VAR_10->state);
    return VAR_17;
   }
   FUNC_2(VAR_10);
   VAR_17 = FUNC_6(VAR_10);
   if (VAR_17) {
    FUNC_11(VAR_10->dev, "init int mode failed\n");
    return VAR_17;
   }
   FUNC_12(VAR_2, &VAR_10->state);
  }
  if (FUNC_0(VAR_10)) {
   struct bnxt_hw_resc *VAR_18 = &VAR_10->hw_resc;

   VAR_17 = FUNC_5(VAR_10, 1);
   VAR_18->resv_cp_rings = 0;
   VAR_18->resv_stat_ctxs = 0;
   VAR_18->resv_irqs = 0;
   VAR_18->resv_tx_rings = 0;
   VAR_18->resv_rx_rings = 0;
   VAR_18->resv_hw_ring_grps = 0;
   VAR_18->resv_vnics = 0;
   if (!VAR_15) {
    VAR_10->tx_nr_rings = 0;
    VAR_10->rx_nr_rings = 0;
   }
  }
 }
 return 0;
}
