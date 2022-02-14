
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43_phy {struct b43_phy_lcn* lcn; } ;
struct b43_wldev {struct b43_phy phy; } ;
struct b43_phy_lcn {int dummy; } ;


 int FUNC_0 (struct b43_phy_lcn*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct b43_wldev *VAR_0)
{
 struct b43_phy *VAR_1 = &VAR_0->phy;
 struct b43_phy_lcn *VAR_2 = VAR_1->lcn;

 FUNC_0(VAR_2, 0, sizeof(*VAR_2));
}
