
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct qmu_gpd {int dummy; } ;
struct mtu3_gpd_ring {int dma; struct qmu_gpd* start; } ;
typedef int dma_addr_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static struct qmu_gpd *FUNC_0(struct mtu3_gpd_ring *VAR_1,
  dma_addr_t VAR_2)
{
 dma_addr_t VAR_3 = VAR_1->dma;
 struct qmu_gpd *VAR_4 = VAR_1->start;
 u32 VAR_5 = (VAR_2 - VAR_3) / sizeof(*VAR_4);

 if (VAR_5 >= VAR_0)
  return ((void*)0);

 return VAR_4 + VAR_5;
}
