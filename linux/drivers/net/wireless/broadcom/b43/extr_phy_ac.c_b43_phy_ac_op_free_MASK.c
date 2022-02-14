
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43_phy {struct b43_phy_ac* ac; } ;
struct b43_wldev {struct b43_phy phy; } ;
struct b43_phy_ac {int dummy; } ;


 int FUNC_0 (struct b43_phy_ac*) ;

__attribute__((used)) static void FUNC_1(struct b43_wldev *VAR_0)
{
 struct b43_phy *VAR_1 = &VAR_0->phy;
 struct b43_phy_ac *VAR_2 = VAR_1->ac;

 FUNC_0(VAR_2);
 VAR_1->ac = ((void*)0);
}
