
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct b43_phy {int analog; } ;
struct b43_wldev {struct b43_phy phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct b43_wldev*,int ,int,int) ;
 int FUNC_1 (struct b43_wldev*,int ) ;
 int FUNC_2 (struct b43_wldev*,int ,int) ;

void FUNC_3(struct b43_wldev *VAR_2,
           u16 VAR_3)
{
 struct b43_phy *VAR_4 = &VAR_2->phy;

 if (VAR_4->analog == 0) {
  FUNC_2(VAR_2, VAR_0, (FUNC_1(VAR_2, VAR_0)
       & 0xFFF0) |
       VAR_3);
 } else if (VAR_4->analog > 1) {
  FUNC_0(VAR_2, VAR_1, 0xFFC3, (VAR_3 << 2));
 } else {
  FUNC_0(VAR_2, VAR_1, 0xFF87, (VAR_3 << 3));
 }
}
