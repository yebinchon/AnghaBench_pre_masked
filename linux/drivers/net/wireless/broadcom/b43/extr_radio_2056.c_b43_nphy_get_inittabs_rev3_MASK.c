
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43_phy {int rev; int radio_rev; } ;
struct b43_wldev {struct b43_phy phy; } ;
struct b2056_inittabs_pts {int dummy; } ;


 struct b2056_inittabs_pts const VAR_0 ;
 struct b2056_inittabs_pts const VAR_1 ;
 struct b2056_inittabs_pts const VAR_2 ;
 struct b2056_inittabs_pts const VAR_3 ;
 struct b2056_inittabs_pts const VAR_4 ;
 struct b2056_inittabs_pts const VAR_5 ;
 struct b2056_inittabs_pts const VAR_6 ;

__attribute__((used)) static const struct b2056_inittabs_pts
*FUNC_0(struct b43_wldev *VAR_7)
{
 struct b43_phy *VAR_8 = &VAR_7->phy;

 switch (VAR_7->phy.rev) {
 case 3:
  return &VAR_0;
 case 4:
  return &VAR_1;
 default:
  switch (VAR_8->radio_rev) {
  case 5:
   return &VAR_3;
  case 6:
   return &VAR_4;
  case 7:
  case 9:
   return &VAR_5;
  case 8:
   return &VAR_6;
  case 11:
   return &VAR_2;
  }
 }

 return ((void*)0);
}
