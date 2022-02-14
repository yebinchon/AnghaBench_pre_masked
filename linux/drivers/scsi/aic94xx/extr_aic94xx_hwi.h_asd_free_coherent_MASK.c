
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct asd_ha_struct {TYPE_1__* pcidev; } ;
struct asd_dma_tok {int dma_handle; int vaddr; int size; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (struct asd_dma_tok*) ;
 int FUNC_1 (int *,int ,int ,int ) ;

__attribute__((used)) static inline void FUNC_2(struct asd_ha_struct *VAR_0,
         struct asd_dma_tok *VAR_1)
{
 if (VAR_1) {
  FUNC_1(&VAR_0->pcidev->dev, VAR_1->size,
      VAR_1->vaddr, VAR_1->dma_handle);
  FUNC_0(VAR_1);
 }
}
