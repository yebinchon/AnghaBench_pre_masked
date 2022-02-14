
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qlcnic_hardware_context {scalar_t__ pci_base0; } ;
struct qlcnic_adapter {TYPE_2__* pdev; TYPE_1__* msix_entries; scalar_t__ isr_int_vec; scalar_t__ tgt_mask_reg; scalar_t__ tgt_status_reg; struct qlcnic_hardware_context* ahw; } ;
struct TYPE_4__ {int dev; int irq; } ;
struct TYPE_3__ {int vector; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,char*) ;

__attribute__((used)) static void FUNC_1(struct qlcnic_adapter *VAR_3)
{
 struct qlcnic_hardware_context *VAR_4 = VAR_3->ahw;


 VAR_3->tgt_status_reg = VAR_4->pci_base0 + VAR_1;
 VAR_3->tgt_mask_reg = VAR_4->pci_base0 + VAR_0;
 VAR_3->isr_int_vec = VAR_4->pci_base0 + VAR_2;
 VAR_3->msix_entries[0].vector = VAR_3->pdev->irq;
 FUNC_0(&VAR_3->pdev->dev, "using legacy interrupt\n");
}
