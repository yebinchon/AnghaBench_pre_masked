
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xgene_enet_pdata {TYPE_1__* ring_ops; } ;
struct xgene_enet_desc_ring {int dma; int desc_addr; int size; int ndev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int (* clear ) (struct xgene_enet_desc_ring*) ;} ;


 int FUNC_0 (struct device*,int ,int ,int ) ;
 struct device* FUNC_1 (int ) ;
 struct xgene_enet_pdata* FUNC_2 (int ) ;
 int FUNC_3 (struct xgene_enet_desc_ring*) ;

__attribute__((used)) static void FUNC_4(struct xgene_enet_desc_ring *VAR_0)
{
 struct xgene_enet_pdata *VAR_1;
 struct device *VAR_2;

 VAR_1 = FUNC_2(VAR_0->ndev);
 VAR_2 = FUNC_1(VAR_0->ndev);

 VAR_1->ring_ops->clear(VAR_0);
 FUNC_0(VAR_2, VAR_0->size, VAR_0->desc_addr, VAR_0->dma);
}
