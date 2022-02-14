
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct hinic_hwif {void* cfg_regs_bar; void* intr_regs_base; struct pci_dev* pdev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct hinic_hwif*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct hinic_hwif*) ;
 int FUNC_3 (struct hinic_hwif*) ;
 int FUNC_4 (void*) ;
 void* FUNC_5 (struct pci_dev*,int ) ;
 int FUNC_6 (struct hinic_hwif*) ;
 int FUNC_7 (struct hinic_hwif*) ;

int FUNC_8(struct hinic_hwif *VAR_3, struct pci_dev *VAR_4)
{
 int VAR_5;

 VAR_3->pdev = VAR_4;

 VAR_3->cfg_regs_bar = FUNC_5(VAR_4, VAR_1);
 if (!VAR_3->cfg_regs_bar) {
  FUNC_1(&VAR_4->dev, "Failed to map configuration regs\n");
  return -VAR_0;
 }

 VAR_3->intr_regs_base = FUNC_5(VAR_4, VAR_2);
 if (!VAR_3->intr_regs_base) {
  FUNC_1(&VAR_4->dev, "Failed to map configuration regs\n");
  VAR_5 = -VAR_0;
  goto err_map_intr_bar;
 }

 VAR_5 = FUNC_3(VAR_3);
 if (VAR_5) {
  FUNC_1(&VAR_4->dev, "HW interface is not ready\n");
  goto err_hwif_ready;
 }

 FUNC_6(VAR_3);

 if (FUNC_0(VAR_3))
  FUNC_7(VAR_3);


 FUNC_2(VAR_3);
 return 0;

err_hwif_ready:
 FUNC_4(VAR_3->intr_regs_base);

err_map_intr_bar:
 FUNC_4(VAR_3->cfg_regs_bar);

 return VAR_5;
}
