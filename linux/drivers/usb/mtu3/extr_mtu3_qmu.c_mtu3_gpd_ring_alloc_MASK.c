
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qmu_gpd {int dummy; } ;
struct mtu3_gpd_ring {int dma; } ;
struct mtu3_ep {TYPE_1__* mtu; struct mtu3_gpd_ring gpd_ring; } ;
struct TYPE_2__ {int qmu_gpd_pool; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct qmu_gpd* FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (struct mtu3_gpd_ring*,struct qmu_gpd*) ;

int FUNC_2(struct mtu3_ep *VAR_2)
{
 struct qmu_gpd *VAR_3;
 struct mtu3_gpd_ring *VAR_4 = &VAR_2->gpd_ring;


 VAR_3 = FUNC_0(VAR_2->mtu->qmu_gpd_pool, VAR_1, &VAR_4->dma);
 if (VAR_3 == ((void*)0))
  return -VAR_0;

 FUNC_1(VAR_4, VAR_3);

 return 0;
}
