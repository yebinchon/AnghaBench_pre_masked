
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct bnxt {int hwrm_cmd_resp_addr; int hwrm_cmd_resp_dma_addr; struct pci_dev* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int *,int ) ;

__attribute__((used)) static int FUNC_1(struct bnxt *VAR_3)
{
 struct pci_dev *VAR_4 = VAR_3->pdev;

 VAR_3->hwrm_cmd_resp_addr = FUNC_0(&VAR_4->dev, VAR_2,
         &VAR_3->hwrm_cmd_resp_dma_addr,
         VAR_1);
 if (!VAR_3->hwrm_cmd_resp_addr)
  return -VAR_0;

 return 0;
}
