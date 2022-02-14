
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {struct b43_phy_ht* ht; } ;
struct b43_wldev {TYPE_1__ phy; } ;
struct b43_phy_ht {int* idle_tssi; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (struct b43_wldev*,int ,int*,int) ;
 int FUNC_1 (struct b43_wldev*) ;
 int FUNC_2 (struct b43_wldev*) ;
 int FUNC_3 (struct b43_wldev*) ;
 int FUNC_4 (struct b43_wldev*,int const,int) ;
 int FUNC_5 (struct b43_wldev*,int const) ;
 int FUNC_6 (struct b43_wldev*,int const,int) ;
 int FUNC_7 (struct b43_wldev*,int const,int) ;
 int FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct b43_wldev *VAR_1)
{
 struct b43_phy_ht *VAR_2 = VAR_1->phy.ht;
 static const u16 VAR_3[] = { 0x840, 0x860, 0x880 };
 u16 VAR_4[3][3];
 s32 VAR_5[6];
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < 3; VAR_6++) {
  VAR_4[VAR_6][1] = FUNC_5(VAR_1, VAR_3[VAR_6] + 6);
  VAR_4[VAR_6][2] = FUNC_5(VAR_1, VAR_3[VAR_6] + 7);
  VAR_4[VAR_6][0] = FUNC_5(VAR_1, VAR_3[VAR_6] + 0);

  FUNC_7(VAR_1, VAR_3[VAR_6] + 6, 0);
  FUNC_4(VAR_1, VAR_3[VAR_6] + 7, ~0xF);
  FUNC_6(VAR_1, VAR_3[VAR_6] + 0, 0x0400);
  FUNC_6(VAR_1, VAR_3[VAR_6] + 0, 0x1000);
 }

 FUNC_3(VAR_1);
 FUNC_8(20);
 FUNC_0(VAR_1, VAR_0, VAR_5, 1);
 FUNC_2(VAR_1);
 FUNC_1(VAR_1);

 VAR_2->idle_tssi[0] = VAR_5[0] & 0xff;
 VAR_2->idle_tssi[1] = VAR_5[2] & 0xff;
 VAR_2->idle_tssi[2] = VAR_5[4] & 0xff;

 for (VAR_6 = 0; VAR_6 < 3; VAR_6++) {
  FUNC_7(VAR_1, VAR_3[VAR_6] + 0, VAR_4[VAR_6][0]);
  FUNC_7(VAR_1, VAR_3[VAR_6] + 6, VAR_4[VAR_6][1]);
  FUNC_7(VAR_1, VAR_3[VAR_6] + 7, VAR_4[VAR_6][2]);
 }
}
