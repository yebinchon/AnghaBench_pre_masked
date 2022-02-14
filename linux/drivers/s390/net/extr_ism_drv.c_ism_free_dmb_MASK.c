
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smcd_dmb {int dma_addr; int cpu_addr; int dmb_len; int sba_idx; } ;
struct ism_dev {TYPE_1__* pdev; int sba_bitmap; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct ism_dev *VAR_0, struct smcd_dmb *VAR_1)
{
 FUNC_0(VAR_1->sba_idx, VAR_0->sba_bitmap);
 FUNC_1(&VAR_0->pdev->dev, VAR_1->dmb_len,
     VAR_1->cpu_addr, VAR_1->dma_addr);
}
