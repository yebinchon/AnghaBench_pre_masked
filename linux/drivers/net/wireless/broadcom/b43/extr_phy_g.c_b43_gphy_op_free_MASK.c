
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43_phy {struct b43_phy_g* g; } ;
struct b43_wldev {struct b43_phy phy; } ;
struct b43_phy_g {int dyn_tssi_tbl; struct b43_phy_g* tssi2dbm; struct b43_phy_g* lo_control; } ;


 int FUNC_0 (struct b43_phy_g*) ;

__attribute__((used)) static void FUNC_1(struct b43_wldev *VAR_0)
{
 struct b43_phy *VAR_1 = &VAR_0->phy;
 struct b43_phy_g *VAR_2 = VAR_1->g;

 FUNC_0(VAR_2->lo_control);

 if (VAR_2->dyn_tssi_tbl)
  FUNC_0(VAR_2->tssi2dbm);
 VAR_2->dyn_tssi_tbl = 0;
 VAR_2->tssi2dbm = ((void*)0);

 FUNC_0(VAR_2);
 VAR_0->phy.g = ((void*)0);
}
