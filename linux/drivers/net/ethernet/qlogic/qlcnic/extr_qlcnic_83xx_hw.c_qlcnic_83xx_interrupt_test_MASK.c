
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u8 ;
typedef int u32 ;
typedef int u16 ;
struct qlcnic_hardware_context {scalar_t__ diag_cnt; TYPE_1__* intr_tbl; } ;
struct TYPE_7__ {int * arg; } ;
struct TYPE_6__ {int* arg; } ;
struct qlcnic_cmd_args {TYPE_3__ rsp; TYPE_2__ req; } ;
struct qlcnic_adapter {int flags; void* drv_tx_rings; void* drv_sds_rings; TYPE_4__* pdev; int state; struct qlcnic_hardware_context* ahw; } ;
struct net_device {int dummy; } ;
struct TYPE_8__ {int dev; } ;
struct TYPE_5__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct qlcnic_hardware_context*,int ) ;
 int VAR_6 ;
 int FUNC_4 (int *,char*,void*) ;
 int FUNC_5 (int *,char*,int,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct net_device*,char*) ;
 struct qlcnic_adapter* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*,int ,void*) ;
 int FUNC_10 (struct net_device*,void*) ;
 int FUNC_11 (struct qlcnic_cmd_args*,struct qlcnic_adapter*,int ) ;
 int FUNC_12 (struct qlcnic_cmd_args*) ;
 scalar_t__ FUNC_13 (struct qlcnic_adapter*) ;
 int FUNC_14 (struct qlcnic_adapter*,struct qlcnic_cmd_args*) ;
 int FUNC_15 (struct qlcnic_adapter*) ;
 scalar_t__ FUNC_16 (int ,int *) ;

int FUNC_17(struct net_device *VAR_7)
{
 struct qlcnic_adapter *VAR_8 = FUNC_8(VAR_7);
 struct qlcnic_hardware_context *VAR_9 = VAR_8->ahw;
 struct qlcnic_cmd_args VAR_10;
 u8 VAR_11, VAR_12 = VAR_8->drv_sds_rings;
 u8 VAR_13 = VAR_8->drv_tx_rings;
 u32 VAR_14;
 u16 VAR_15, VAR_16;
 int VAR_17;

 if (FUNC_16(VAR_6, &VAR_8->state)) {
  FUNC_7(VAR_7, "Device is resetting\n");
  return -VAR_1;
 }

 if (FUNC_13(VAR_8)) {
  FUNC_7(VAR_7, "Device in diagnostics mode\n");
  return -VAR_1;
 }

 VAR_17 = FUNC_9(VAR_7, VAR_4,
      VAR_12);
 if (VAR_17)
  goto fail_diag_irq;

 VAR_9->diag_cnt = 0;
 VAR_17 = FUNC_11(&VAR_10, VAR_8, VAR_2);
 if (VAR_17)
  goto fail_diag_irq;

 if (VAR_8->flags & VAR_5)
  VAR_15 = VAR_9->intr_tbl[0].id;
 else
  VAR_15 = FUNC_3(VAR_9, VAR_3);

 VAR_10.req.arg[1] = 1;
 VAR_10.req.arg[2] = VAR_15;
 VAR_10.req.arg[3] = VAR_0;

 VAR_17 = FUNC_14(VAR_8, &VAR_10);
 VAR_14 = VAR_10.rsp.arg[2];
 VAR_16 = FUNC_1(VAR_14);
 VAR_11 = FUNC_0(FUNC_2(VAR_14));
 if (VAR_16 != VAR_15)
  FUNC_5(&VAR_8->pdev->dev,
    "Interrupt generated: 0x%x, requested:0x%x\n",
    VAR_16, VAR_15);
 if (VAR_11)
  FUNC_4(&VAR_8->pdev->dev,
    "Interrupt test error: 0x%x\n", VAR_11);
 if (VAR_17)
  goto done;

 FUNC_6(20);
 VAR_17 = !VAR_9->diag_cnt;

done:
 FUNC_12(&VAR_10);
 FUNC_10(VAR_7, VAR_12);

fail_diag_irq:
 VAR_8->drv_sds_rings = VAR_12;
 VAR_8->drv_tx_rings = VAR_13;
 FUNC_15(VAR_8);
 return VAR_17;
}
