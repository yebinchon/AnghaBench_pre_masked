
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* ptag_state; } ;
struct beiscsi_hba {TYPE_3__* pcidev; TYPE_2__ ctrl; } ;
struct be_dma_mem {scalar_t__ size; int dma; int va; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_4__ {struct be_dma_mem tag_mem_state; } ;


 int FUNC_0 (struct beiscsi_hba*,unsigned int,int *,int *) ;
 int FUNC_1 (int *,scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct beiscsi_hba *VAR_0, unsigned int VAR_1)
{
 struct be_dma_mem *VAR_2;


 FUNC_0(VAR_0, VAR_1, ((void*)0), ((void*)0));
 VAR_2 = &VAR_0->ctrl.ptag_state[VAR_1].tag_mem_state;
 if (VAR_2->size) {
  FUNC_1(&VAR_0->pcidev->dev, VAR_2->size,
        VAR_2->va, VAR_2->dma);
  VAR_2->size = 0;
 }
}
