
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qmu_gpd {int dummy; } ;
struct mtu3_gpd_ring {scalar_t__ enqueue; scalar_t__ end; scalar_t__ start; } ;



__attribute__((used)) static struct qmu_gpd *FUNC_0(struct mtu3_gpd_ring *VAR_0)
{
 if (VAR_0->enqueue < VAR_0->end)
  VAR_0->enqueue++;
 else
  VAR_0->enqueue = VAR_0->start;

 return VAR_0->enqueue;
}
