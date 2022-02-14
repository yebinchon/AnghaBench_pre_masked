
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct bnxt {int * hwrm_cmd_kong_resp_addr; int hwrm_cmd_kong_resp_dma_addr; int * hwrm_cmd_resp_addr; int hwrm_cmd_resp_dma_addr; struct pci_dev* pdev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int *,int ) ;

__attribute__((used)) static void FUNC_1(struct bnxt *VAR_1)
{
 struct pci_dev *VAR_2 = VAR_1->pdev;

 if (VAR_1->hwrm_cmd_resp_addr) {
  FUNC_0(&VAR_2->dev, VAR_0, VAR_1->hwrm_cmd_resp_addr,
      VAR_1->hwrm_cmd_resp_dma_addr);
  VAR_1->hwrm_cmd_resp_addr = ((void*)0);
 }

 if (VAR_1->hwrm_cmd_kong_resp_addr) {
  FUNC_0(&VAR_2->dev, VAR_0,
      VAR_1->hwrm_cmd_kong_resp_addr,
      VAR_1->hwrm_cmd_kong_resp_dma_addr);
  VAR_1->hwrm_cmd_kong_resp_addr = ((void*)0);
 }
}
