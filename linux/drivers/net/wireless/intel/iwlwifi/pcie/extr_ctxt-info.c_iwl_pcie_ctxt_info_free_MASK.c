
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_trans_pcie {int * ctxt_info; scalar_t__ ctxt_info_dma_addr; } ;
struct iwl_trans {int dev; } ;


 struct iwl_trans_pcie* FUNC_0 (struct iwl_trans*) ;
 int FUNC_1 (int ,int,int *,scalar_t__) ;
 int FUNC_2 (struct iwl_trans*) ;

void FUNC_3(struct iwl_trans *VAR_0)
{
 struct iwl_trans_pcie *VAR_1 = FUNC_0(VAR_0);

 if (!VAR_1->ctxt_info)
  return;

 FUNC_1(VAR_0->dev, sizeof(*VAR_1->ctxt_info),
     VAR_1->ctxt_info,
     VAR_1->ctxt_info_dma_addr);
 VAR_1->ctxt_info_dma_addr = 0;
 VAR_1->ctxt_info = ((void*)0);

 FUNC_2(VAR_0);
}
