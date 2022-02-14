
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_host {struct cqhci_host* cqe_private; } ;
struct cqhci_host {int enabled; int * desc_base; int * trans_desc_base; int desc_dma_base; int desc_size; int trans_desc_dma_base; int data_size; } ;


 int FUNC_0 (struct cqhci_host*) ;
 int FUNC_1 (struct mmc_host*) ;
 int FUNC_2 (int ,int ,int *,int ) ;
 int FUNC_3 (struct mmc_host*) ;

__attribute__((used)) static void FUNC_4(struct mmc_host *VAR_0)
{
 struct cqhci_host *VAR_1 = VAR_0->cqe_private;

 if (!VAR_1->enabled)
  return;

 FUNC_1(VAR_0);

 FUNC_0(VAR_1);

 FUNC_2(FUNC_3(VAR_0), VAR_1->data_size,
      VAR_1->trans_desc_base,
      VAR_1->trans_desc_dma_base);

 FUNC_2(FUNC_3(VAR_0), VAR_1->desc_size,
      VAR_1->desc_base,
      VAR_1->desc_dma_base);

 VAR_1->trans_desc_base = ((void*)0);
 VAR_1->desc_base = ((void*)0);

 VAR_1->enabled = 0;
}
