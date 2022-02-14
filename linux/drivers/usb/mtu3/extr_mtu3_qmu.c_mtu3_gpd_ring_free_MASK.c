
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtu3_gpd_ring {int dma; int start; } ;
struct mtu3_ep {TYPE_1__* mtu; struct mtu3_gpd_ring gpd_ring; } ;
struct TYPE_2__ {int qmu_gpd_pool; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct mtu3_gpd_ring*,int ,int) ;

void FUNC_2(struct mtu3_ep *VAR_0)
{
 struct mtu3_gpd_ring *VAR_1 = &VAR_0->gpd_ring;

 FUNC_0(VAR_0->mtu->qmu_gpd_pool,
   VAR_1->start, VAR_1->dma);
 FUNC_1(VAR_1, 0, sizeof(*VAR_1));
}
