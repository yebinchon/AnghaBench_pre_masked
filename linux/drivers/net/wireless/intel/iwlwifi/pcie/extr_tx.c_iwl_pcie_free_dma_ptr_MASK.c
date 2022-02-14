
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_trans {int dev; } ;
struct iwl_dma_ptr {int dma; int addr; int size; } ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (struct iwl_dma_ptr*,int ,int) ;
 scalar_t__ FUNC_2 (int) ;

void FUNC_3(struct iwl_trans *VAR_0, struct iwl_dma_ptr *VAR_1)
{
 if (FUNC_2(!VAR_1->addr))
  return;

 FUNC_0(VAR_0->dev, VAR_1->size, VAR_1->addr, VAR_1->dma);
 FUNC_1(VAR_1, 0, sizeof(*VAR_1));
}
