
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43_phy {int rev; struct b43_phy_n* n; } ;
struct b43_wldev {struct b43_phy phy; int wl; } ;
struct b43_phy_n {scalar_t__ hang_avoid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct b43_wldev*,int,int) ;
 int FUNC_2 (struct b43_wldev*,int) ;
 int FUNC_3 (struct b43_wldev*) ;
 int FUNC_4 (struct b43_wldev*) ;
 int FUNC_5 (struct b43_wldev*) ;
 int FUNC_6 (struct b43_wldev*,int ,int) ;

__attribute__((used)) static void FUNC_7(struct b43_wldev *VAR_4)
{
 struct b43_phy *VAR_5 = &VAR_4->phy;
 struct b43_phy_n *VAR_6 = VAR_5->n;

 if (FUNC_0(VAR_4->wl) == VAR_3)
  FUNC_1(VAR_4, 1, 0);
 else
  FUNC_1(VAR_4, 1, 1);

 if (VAR_6->hang_avoid)
  FUNC_2(VAR_4, 1);

 FUNC_6(VAR_4, VAR_0,
      VAR_1 | VAR_2);


 if (VAR_4->phy.rev >= 7)
  FUNC_5(VAR_4);
 else if (VAR_4->phy.rev >= 3)
  FUNC_4(VAR_4);
 else
  FUNC_3(VAR_4);

 if (VAR_6->hang_avoid)
  FUNC_2(VAR_4, 0);
}
