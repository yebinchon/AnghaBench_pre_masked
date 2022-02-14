
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qmu_gpd {int dummy; } ;
struct mtu3_gpd_ring {struct qmu_gpd* end; struct qmu_gpd* dequeue; struct qmu_gpd* enqueue; struct qmu_gpd* start; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct mtu3_gpd_ring *VAR_1, struct qmu_gpd *VAR_2)
{
 VAR_1->start = VAR_2;
 VAR_1->enqueue = VAR_2;
 VAR_1->dequeue = VAR_2;
 VAR_1->end = VAR_2 + VAR_0 - 1;
}
