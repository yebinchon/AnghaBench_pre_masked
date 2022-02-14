
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int rev; struct b43_phy_n* n; } ;
struct b43_wldev {TYPE_1__ phy; } ;
struct b43_phy_n {scalar_t__ hang_avoid; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (struct b43_wldev*,int) ;
 int FUNC_2 (struct b43_wldev*,int ,int) ;
 int FUNC_3 (struct b43_wldev*,int ,int,int*) ;

__attribute__((used)) static void FUNC_4(struct b43_wldev *VAR_0, u8 VAR_1,
     u8 *VAR_2, u8 *VAR_3, u8 VAR_4)
{
 struct b43_phy_n *VAR_5 = VAR_0->phy.n;
 u8 VAR_6;
 u8 VAR_7 = (VAR_0->phy.rev >= 3) ? 0x1F : 0x0F;
 u16 VAR_8 = VAR_1 << 4;
 u16 VAR_9 = VAR_8 + 0x80;

 if (VAR_5->hang_avoid)
  FUNC_1(VAR_0, 1);

 FUNC_3(VAR_0, FUNC_0(7, VAR_8), VAR_4, VAR_2);
 FUNC_3(VAR_0, FUNC_0(7, VAR_9), VAR_4, VAR_3);

 for (VAR_6 = VAR_4; VAR_6 < 16; VAR_6++) {
  FUNC_2(VAR_0, FUNC_0(7, VAR_8 + VAR_6), VAR_7);
  FUNC_2(VAR_0, FUNC_0(7, VAR_9 + VAR_6), 1);
 }

 if (VAR_5->hang_avoid)
  FUNC_1(VAR_0, 0);
}
