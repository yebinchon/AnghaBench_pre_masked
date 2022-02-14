
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct bnxt {int * hwrm_short_cmd_req_addr; int hwrm_short_cmd_req_dma_addr; int hwrm_max_ext_req_len; struct pci_dev* pdev; } ;


 int FUNC_0 (int *,int ,int *,int ) ;

__attribute__((used)) static void FUNC_1(struct bnxt *VAR_0)
{
 if (VAR_0->hwrm_short_cmd_req_addr) {
  struct pci_dev *VAR_1 = VAR_0->pdev;

  FUNC_0(&VAR_1->dev, VAR_0->hwrm_max_ext_req_len,
      VAR_0->hwrm_short_cmd_req_addr,
      VAR_0->hwrm_short_cmd_req_dma_addr);
  VAR_0->hwrm_short_cmd_req_addr = ((void*)0);
 }
}
