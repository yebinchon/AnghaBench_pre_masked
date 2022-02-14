
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int expires; } ;
struct TYPE_6__ {int phy_mutex; } ;
struct bnx2x {int drv_info_mng_owner; int fw_seq; int disable_tpa; int dropless_fc; int tx_ticks; int rx_ticks; int current_interval; int max_cos; int min_msix_vec_cnt; int dump_preset_idx; int cnic_base_cl_id; TYPE_4__ timer; int rx_ring_size; int tx_ring_size; int mrrs; TYPE_3__* dev; TYPE_2__* pdev; int iov_task; int period_task; int sp_rtnl_task; int sp_task; int vlan_reg; int stats_lock; int drv_info_mutex; int fw_mb_mutex; TYPE_1__ port; } ;
struct TYPE_10__ {int drv_mb_header; } ;
struct TYPE_8__ {int hw_features; int features; int dev_addr; } ;
struct TYPE_7__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct bnx2x*) ;
 size_t FUNC_3 (struct bnx2x*) ;
 scalar_t__ FUNC_4 (struct bnx2x*) ;
 size_t FUNC_5 (struct bnx2x*) ;
 scalar_t__ FUNC_6 (struct bnx2x*) ;
 scalar_t__ FUNC_7 (struct bnx2x*) ;
 scalar_t__ FUNC_8 (struct bnx2x*) ;
 scalar_t__ FUNC_9 (struct bnx2x*) ;
 scalar_t__ FUNC_10 (struct bnx2x*) ;
 int FUNC_11 (struct bnx2x*) ;
 int FUNC_12 (struct bnx2x*) ;
 scalar_t__ FUNC_13 (struct bnx2x*) ;
 scalar_t__ FUNC_14 (struct bnx2x*) ;
 scalar_t__ FUNC_15 (struct bnx2x*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_16 (int *,int ) ;
 int FUNC_17 (int *) ;
 scalar_t__ FUNC_18 (struct bnx2x*) ;
 scalar_t__ FUNC_19 (struct bnx2x*) ;
 scalar_t__ FUNC_20 (struct bnx2x*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_21 (struct bnx2x*,int *********) ;
 scalar_t__ FUNC_22 (struct bnx2x*,int ********) ;
 int FUNC_23 (struct bnx2x*,int ) ;
 int FUNC_24 (struct bnx2x*) ;
 int FUNC_25 (struct bnx2x*) ;
 int FUNC_26 (struct bnx2x*,int,int ) ;
 int FUNC_27 (struct bnx2x*) ;
 int FUNC_28 (struct bnx2x*) ;
 int FUNC_29 (struct bnx2x*) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_30 (struct bnx2x*) ;
 int FUNC_31 (struct bnx2x*) ;
 int FUNC_32 (struct bnx2x*) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int ********* VAR_19 ;
 int ******** VAR_20 ;
 int ******** VAR_21 ;
 int FUNC_33 (int *,char*) ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_34 (int ) ;
 TYPE_5__* VAR_24 ;
 int FUNC_35 () ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_36 (int *) ;
 int FUNC_37 (int *,int) ;
 int FUNC_38 (TYPE_4__*,int ,int ) ;

__attribute__((used)) static int FUNC_39(struct bnx2x *VAR_27)
{
 int VAR_28;
 int VAR_29;

 FUNC_36(&VAR_27->port.phy_mutex);
 FUNC_36(&VAR_27->fw_mb_mutex);
 FUNC_36(&VAR_27->drv_info_mutex);
 FUNC_37(&VAR_27->stats_lock, 1);
 VAR_27->drv_info_mng_owner = 0;
 FUNC_17(&VAR_27->vlan_reg);

 FUNC_16(&VAR_27->sp_task, VAR_17);
 FUNC_16(&VAR_27->sp_rtnl_task, VAR_16);
 FUNC_16(&VAR_27->period_task, VAR_15);
 FUNC_16(&VAR_27->iov_task, VAR_14);
 if (FUNC_19(VAR_27)) {
  VAR_29 = FUNC_29(VAR_27);
  if (VAR_29)
   return VAR_29;
 } else {
  FUNC_34(VAR_27->dev->dev_addr);
 }

 FUNC_32(VAR_27);

 VAR_29 = FUNC_24(VAR_27);
 if (VAR_29)
  return VAR_29;

 FUNC_31(VAR_27);

 VAR_28 = FUNC_2(VAR_27);


 if (FUNC_19(VAR_27) && !FUNC_4(VAR_27)) {

  VAR_27->fw_seq =
   FUNC_23(VAR_27, VAR_24[FUNC_3(VAR_27)].drv_mb_header) &
       VAR_6;
  FUNC_0("fw_seq 0x%08x\n", VAR_27->fw_seq);

  VAR_29 = FUNC_30(VAR_27);
  if (VAR_29) {
   FUNC_27(VAR_27);
   return VAR_29;
  }
 }

 if (FUNC_13(VAR_27))
  FUNC_33(&VAR_27->pdev->dev, "FPGA detected\n");

 if (FUNC_4(VAR_27) && (VAR_28 == 0))
  FUNC_33(&VAR_27->pdev->dev, "MCP disabled, must load devices in order!\n");

 VAR_27->disable_tpa = VAR_22;
 VAR_27->disable_tpa |= !!FUNC_18(VAR_27);

 VAR_27->disable_tpa |= FUNC_35();


 if (VAR_27->disable_tpa) {
  VAR_27->dev->hw_features &= ~(VAR_13 | VAR_12);
  VAR_27->dev->features &= ~(VAR_13 | VAR_12);
 }

 if (FUNC_6(VAR_27))
  VAR_27->dropless_fc = 0;
 else
  VAR_27->dropless_fc = VAR_23 | FUNC_28(VAR_27);

 VAR_27->mrrs = VAR_26;

 VAR_27->tx_ring_size = FUNC_18(VAR_27) ? 0 : VAR_11;
 if (FUNC_20(VAR_27))
  VAR_27->rx_ring_size = VAR_10;


 VAR_27->tx_ticks = (50 / VAR_0) * VAR_0;
 VAR_27->rx_ticks = (25 / VAR_0) * VAR_0;

 VAR_27->current_interval = FUNC_14(VAR_27) ? 5*VAR_9 : VAR_9;

 FUNC_38(&VAR_27->timer, VAR_18, 0);
 VAR_27->timer.expires = VAR_25 + VAR_27->current_interval;

 if (FUNC_21(VAR_27, &VAR_21) &&
     FUNC_21(VAR_27, &VAR_20) &&
     FUNC_21(VAR_27, VAR_19) &&
     FUNC_22(VAR_27, VAR_21) &&
     FUNC_22(VAR_27, VAR_20) &&
     FUNC_22(VAR_27, VAR_19[FUNC_5(VAR_27)])) {
  FUNC_26(VAR_27, 1, VAR_2);
  FUNC_25(VAR_27);
 } else {
  FUNC_26(VAR_27, 0, VAR_1);
 }

 if (FUNC_7(VAR_27))
  VAR_27->cnic_base_cl_id = VAR_7;
 else
  VAR_27->cnic_base_cl_id = VAR_8;


 if (FUNC_20(VAR_27))
  VAR_27->max_cos = 1;
 else if (FUNC_7(VAR_27))
  VAR_27->max_cos = VAR_3;
 else if (FUNC_8(VAR_27) || FUNC_9(VAR_27))
  VAR_27->max_cos = VAR_4;
 else if (FUNC_10(VAR_27))
  VAR_27->max_cos = VAR_5;
 else
  FUNC_1("unknown chip %x revision %x\n",
     FUNC_11(VAR_27), FUNC_12(VAR_27));
 FUNC_0("set bp->max_cos to %d\n", VAR_27->max_cos);





 if (FUNC_20(VAR_27))
  VAR_27->min_msix_vec_cnt = 1;
 else if (FUNC_15(VAR_27))
  VAR_27->min_msix_vec_cnt = 3;
 else
  VAR_27->min_msix_vec_cnt = 2;
 FUNC_0("bp->min_msix_vec_cnt %d", VAR_27->min_msix_vec_cnt);

 VAR_27->dump_preset_idx = 1;

 return VAR_29;
}
