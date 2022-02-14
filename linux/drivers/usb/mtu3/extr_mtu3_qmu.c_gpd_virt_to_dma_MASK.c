
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qmu_gpd {int dummy; } ;
struct mtu3_gpd_ring {struct qmu_gpd* start; scalar_t__ dma; } ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;

__attribute__((used)) static dma_addr_t FUNC_0(struct mtu3_gpd_ring *VAR_1,
  struct qmu_gpd *VAR_2)
{
 dma_addr_t VAR_3 = VAR_1->dma;
 struct qmu_gpd *VAR_4 = VAR_1->start;
 u32 VAR_5;

 VAR_5 = VAR_2 - VAR_4;
 if (VAR_5 >= VAR_0)
  return 0;

 return VAR_3 + (VAR_5 * sizeof(*VAR_2));
}
