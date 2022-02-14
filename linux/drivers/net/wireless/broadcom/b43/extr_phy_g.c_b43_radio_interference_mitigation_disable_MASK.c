
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct b43_phy {int rev; struct b43_phy_g* g; } ;
struct b43_wldev {int bad_frames_preempt; struct b43_phy phy; } ;
struct b43_phy_g {int aci_enable; int * interfstack; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct b43_wldev*) ;
 int FUNC_2 (struct b43_wldev*) ;
 int FUNC_3 (struct b43_wldev*) ;
 int FUNC_4 (struct b43_wldev*,int) ;
 int FUNC_5 (struct b43_wldev*,int,int) ;
 int FUNC_6 (struct b43_wldev*,int) ;
 int FUNC_7 (struct b43_wldev*,int,int) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;

__attribute__((used)) static void
FUNC_11(struct b43_wldev *VAR_3, int VAR_4)
{
 struct b43_phy *VAR_5 = &VAR_3->phy;
 struct b43_phy_g *VAR_6 = VAR_5->g;
 u32 *VAR_7 = VAR_6->interfstack;

 switch (VAR_4) {
 case 128:
  if (VAR_5->rev != 1) {
   FUNC_5(VAR_3, 0x042B, ~0x0800);
   FUNC_7(VAR_3, VAR_1, 0x4000);
   break;
  }
  FUNC_10(0x0078);
  FUNC_2(VAR_3);
  FUNC_9(0x0406);
  FUNC_5(VAR_3, 0x042B, ~0x0800);
  if (!VAR_3->bad_frames_preempt) {
   FUNC_5(VAR_3, VAR_2, ~(1 << 11));
  }
  FUNC_7(VAR_3, VAR_1, 0x4000);
  FUNC_9(0x04A0);
  FUNC_9(0x04A1);
  FUNC_9(0x04A2);
  FUNC_9(0x04A8);
  FUNC_9(0x04AB);
  FUNC_9(0x04A7);
  FUNC_9(0x04A3);
  FUNC_9(0x04A9);
  FUNC_9(0x0493);
  FUNC_9(0x04AA);
  FUNC_9(0x04AC);
  break;
 case 129:
  if (!(FUNC_6(VAR_3, 0x0033) & 0x0800))
   break;

  VAR_6->aci_enable = 0;

  FUNC_9(VAR_2);
  FUNC_9(VAR_1);
  FUNC_9(0x0033);
  FUNC_9(0x04A3);
  FUNC_9(0x04A9);
  FUNC_9(0x0493);
  FUNC_9(0x04AA);
  FUNC_9(0x04AC);
  FUNC_9(0x04A0);
  FUNC_9(0x04A7);
  if (VAR_5->rev >= 2) {
   FUNC_9(0x04C0);
   FUNC_9(0x04C1);
  } else
   FUNC_9(0x0406);
  FUNC_9(0x04A1);
  FUNC_9(0x04AB);
  FUNC_9(0x04A8);
  if (VAR_5->rev == 2) {
   FUNC_9(0x04AD);
   FUNC_9(0x04AE);
  } else if (VAR_5->rev >= 3) {
   FUNC_9(0x04AD);
   FUNC_9(0x0415);
   FUNC_9(0x0416);
   FUNC_9(0x0417);
   FUNC_8(0x1A00, 0x2);
   FUNC_8(0x1A00, 0x3);
  }
  FUNC_9(0x04A2);
  FUNC_9(0x048A);
  FUNC_9(0x042B);
  FUNC_9(0x048C);
  FUNC_4(VAR_3, FUNC_3(VAR_3) & ~VAR_0);
  FUNC_1(VAR_3);
  break;
 default:
  FUNC_0(1);
 }
}
