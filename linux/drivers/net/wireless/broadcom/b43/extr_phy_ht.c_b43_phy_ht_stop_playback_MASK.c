
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {struct b43_phy_ht* ht; } ;
struct b43_wldev {TYPE_1__ phy; } ;
struct b43_phy_ht {scalar_t__* bb_mult_save; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct b43_wldev*,int ,scalar_t__) ;
 int FUNC_2 (struct b43_wldev*,int ,int) ;
 int FUNC_3 (struct b43_wldev*,int ) ;
 int FUNC_4 (struct b43_wldev*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct b43_wldev *VAR_4)
{
 struct b43_phy_ht *VAR_5 = VAR_4->phy.ht;
 u16 VAR_6;
 int VAR_7;

 VAR_6 = FUNC_3(VAR_4, VAR_3);
 if (VAR_6 & 0x1)
  FUNC_4(VAR_4, VAR_1, VAR_2);
 else if (VAR_6 & 0x2)
  FUNC_2(VAR_4, VAR_0, 0x7FFF);

 FUNC_2(VAR_4, VAR_1, ~0x0004);

 for (VAR_7 = 0; VAR_7 < 3; VAR_7++) {
  if (VAR_5->bb_mult_save[VAR_7] >= 0) {
   FUNC_1(VAR_4, FUNC_0(13, 0x63 + VAR_7 * 4),
     VAR_5->bb_mult_save[VAR_7]);
   FUNC_1(VAR_4, FUNC_0(13, 0x67 + VAR_7 * 4),
     VAR_5->bb_mult_save[VAR_7]);
  }
 }
}
