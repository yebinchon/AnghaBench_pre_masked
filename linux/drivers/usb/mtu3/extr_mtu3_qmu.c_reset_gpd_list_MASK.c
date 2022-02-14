
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qmu_gpd {int dw0_info; } ;
struct mtu3_gpd_ring {struct qmu_gpd* start; } ;
struct mtu3_ep {struct mtu3_gpd_ring gpd_ring; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mtu3_gpd_ring*,struct qmu_gpd*) ;

__attribute__((used)) static void FUNC_2(struct mtu3_ep *VAR_1)
{
 struct mtu3_gpd_ring *VAR_2 = &VAR_1->gpd_ring;
 struct qmu_gpd *VAR_3 = VAR_2->start;

 if (VAR_3) {
  VAR_3->dw0_info &= FUNC_0(~VAR_0);
  FUNC_1(VAR_2, VAR_3);
 }
}
