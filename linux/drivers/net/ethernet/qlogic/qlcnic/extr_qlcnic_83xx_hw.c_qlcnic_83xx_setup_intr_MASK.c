
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qlcnic_intrpt_config {int dummy; } ;
struct qlcnic_hardware_context {int num_msix; scalar_t__ pci_func; TYPE_2__* intr_tbl; } ;
struct qlcnic_adapter {int flags; TYPE_1__* pdev; struct qlcnic_hardware_context* ahw; void* drv_tx_rings; void* drv_sds_rings; } ;
struct TYPE_4__ {int id; scalar_t__ src; int type; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int *,char*,scalar_t__) ;
 int FUNC_2 (struct qlcnic_adapter*) ;
 int FUNC_3 (struct qlcnic_adapter*) ;
 int FUNC_4 (struct qlcnic_adapter*,int) ;
 int FUNC_5 (struct qlcnic_adapter*) ;
 scalar_t__ FUNC_6 (struct qlcnic_adapter*) ;
 TYPE_2__* FUNC_7 (int ) ;

int FUNC_8(struct qlcnic_adapter *VAR_9)
{
 struct qlcnic_hardware_context *VAR_10 = VAR_9->ahw;
 int VAR_11, VAR_12, VAR_13;

 if (VAR_9->flags & VAR_7) {
  VAR_11 = FUNC_5(VAR_9);
  if (VAR_11 < 0)
   return VAR_11;
  VAR_13 = VAR_10->num_msix;
 } else {
  VAR_13 = FUNC_2(VAR_9);

  VAR_11 = FUNC_4(VAR_9, VAR_13);
  if (VAR_11 == -VAR_1)
   return VAR_11;

  if (VAR_9->flags & VAR_5) {
   VAR_13 = VAR_10->num_msix;
  } else {
   if (FUNC_6(VAR_9))
    return -VAR_0;
   VAR_13 = 1;
   VAR_9->drv_sds_rings = VAR_6;
   VAR_9->drv_tx_rings = VAR_6;
  }
 }


 VAR_10->intr_tbl =
  FUNC_7(FUNC_0(VAR_13,
       sizeof(struct qlcnic_intrpt_config)));
 if (!VAR_10->intr_tbl)
  return -VAR_1;

 if (!(VAR_9->flags & VAR_5)) {
  if (VAR_9->ahw->pci_func >= VAR_8) {
   FUNC_1(&VAR_9->pdev->dev, "PCI function number 8 and higher are not supported with legacy interrupt, func 0x%x\n",
    VAR_10->pci_func);
   return -VAR_2;
  }

  FUNC_3(VAR_9);
 }

 for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++) {
  if (VAR_9->flags & VAR_5)
   VAR_10->intr_tbl[VAR_12].type = VAR_4;
  else
   VAR_10->intr_tbl[VAR_12].type = VAR_3;
  VAR_10->intr_tbl[VAR_12].id = VAR_12;
  VAR_10->intr_tbl[VAR_12].src = 0;
 }

 return 0;
}
