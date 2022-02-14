
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43_phy {struct b43_phy_n* n; } ;
struct b43_wldev {struct b43_phy phy; } ;
struct b43_phy_n {int dummy; } ;


 int FUNC_0 (struct b43_phy_n*) ;

__attribute__((used)) static void FUNC_1(struct b43_wldev *VAR_0)
{
 struct b43_phy *VAR_1 = &VAR_0->phy;
 struct b43_phy_n *VAR_2 = VAR_1->n;

 FUNC_0(VAR_2);
 VAR_1->n = ((void*)0);
}
