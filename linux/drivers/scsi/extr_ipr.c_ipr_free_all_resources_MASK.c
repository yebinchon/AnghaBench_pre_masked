
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct ipr_ioa_cfg {int host; int hdw_dma_regs; scalar_t__ reset_work_q; struct pci_dev* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ipr_ioa_cfg*) ;
 int FUNC_3 (struct ipr_ioa_cfg*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct ipr_ioa_cfg *VAR_2)
{
 struct pci_dev *VAR_3 = VAR_2->pdev;

 VAR_0;
 FUNC_2(VAR_2);
 if (VAR_2->reset_work_q)
  FUNC_0(VAR_2->reset_work_q);
 FUNC_1(VAR_2->hdw_dma_regs);
 FUNC_5(VAR_3);
 FUNC_3(VAR_2);
 FUNC_6(VAR_2->host);
 FUNC_4(VAR_3);
 VAR_1;
}
