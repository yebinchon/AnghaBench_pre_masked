
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct bnxt {scalar_t__ hwrm_short_cmd_req_addr; int hwrm_short_cmd_req_dma_addr; int hwrm_max_ext_req_len; struct pci_dev* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ,int *,int ) ;

__attribute__((used)) static int FUNC_1(struct bnxt *VAR_2)
{
 struct pci_dev *VAR_3 = VAR_2->pdev;

 if (VAR_2->hwrm_short_cmd_req_addr)
  return 0;

 VAR_2->hwrm_short_cmd_req_addr =
  FUNC_0(&VAR_3->dev, VAR_2->hwrm_max_ext_req_len,
       &VAR_2->hwrm_short_cmd_req_dma_addr,
       VAR_1);
 if (!VAR_2->hwrm_short_cmd_req_addr)
  return -VAR_0;

 return 0;
}
