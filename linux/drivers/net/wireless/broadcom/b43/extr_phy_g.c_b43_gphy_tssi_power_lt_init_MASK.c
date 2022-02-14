
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {struct b43_phy_g* g; } ;
struct b43_wldev {TYPE_1__ phy; } ;
struct b43_phy_g {scalar_t__* tssi2dbm; } ;


 int FUNC_0 (struct b43_wldev*,int,int,scalar_t__) ;
 int FUNC_1 (struct b43_wldev*,int,int) ;

__attribute__((used)) static void FUNC_2(struct b43_wldev *VAR_0)
{
 struct b43_phy_g *VAR_1 = VAR_0->phy.g;
 int VAR_2;
 u16 VAR_3;

 for (VAR_2 = 0; VAR_2 < 32; VAR_2++)
  FUNC_0(VAR_0, 0x3C20, VAR_2, VAR_1->tssi2dbm[VAR_2]);
 for (VAR_2 = 32; VAR_2 < 64; VAR_2++)
  FUNC_0(VAR_0, 0x3C00, VAR_2 - 32, VAR_1->tssi2dbm[VAR_2]);
 for (VAR_2 = 0; VAR_2 < 64; VAR_2 += 2) {
  VAR_3 = (u16) VAR_1->tssi2dbm[VAR_2];
  VAR_3 |= ((u16) VAR_1->tssi2dbm[VAR_2 + 1]) << 8;
  FUNC_1(VAR_0, 0x380 + (VAR_2 / 2), VAR_3);
 }
}
