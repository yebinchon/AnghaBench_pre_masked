
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qmu_gpd {int dummy; } ;
struct mtu3_gpd_ring {struct qmu_gpd* dequeue; struct qmu_gpd* start; struct qmu_gpd* end; struct qmu_gpd* enqueue; } ;



__attribute__((used)) static int FUNC_0(struct mtu3_gpd_ring *VAR_0)
{
 struct qmu_gpd *VAR_1 = VAR_0->enqueue;
 struct qmu_gpd *VAR_2;

 if (VAR_0->enqueue < VAR_0->end)
  VAR_2 = VAR_1 + 1;
 else
  VAR_2 = VAR_0->start;


 return VAR_2 == VAR_0->dequeue;
}
