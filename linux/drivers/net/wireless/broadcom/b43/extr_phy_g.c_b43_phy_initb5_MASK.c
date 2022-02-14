
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct b43_phy {int analog; int radio_ver; int rev; int channel; scalar_t__ gmode; struct b43_phy_g* g; } ;
struct b43_wldev {scalar_t__ bad_frames_preempt; TYPE_1__* dev; struct b43_phy phy; } ;
struct b43_phy_g {int tx_control; int rfatt; int bbatt; } ;
struct TYPE_2__ {scalar_t__ board_vendor; scalar_t__ board_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct b43_wldev*,int,int ) ;
 int FUNC_1 (struct b43_wldev*,int,int,int) ;
 int FUNC_2 (struct b43_wldev*,int,int) ;
 int FUNC_3 (struct b43_wldev*,int,int) ;
 int FUNC_4 (struct b43_wldev*,int,int) ;
 int FUNC_5 (struct b43_wldev*,int,int) ;
 int FUNC_6 (struct b43_wldev*,int) ;
 int FUNC_7 (struct b43_wldev*,int *,int *,int ) ;
 int FUNC_8 (struct b43_wldev*,int,int) ;

__attribute__((used)) static void FUNC_9(struct b43_wldev *VAR_4)
{
 struct b43_phy *VAR_5 = &VAR_4->phy;
 struct b43_phy_g *VAR_6 = VAR_5->g;
 u16 VAR_7, VAR_8;
 u8 VAR_9;

 if (VAR_5->analog == 1) {
  FUNC_4(VAR_4, 0x007A, 0x0050);
 }
 if ((VAR_4->dev->board_vendor != VAR_2) &&
     (VAR_4->dev->board_type != VAR_3)) {
  VAR_8 = 0x2120;
  for (VAR_7 = 0x00A8; VAR_7 < 0x00C7; VAR_7++) {
   FUNC_3(VAR_4, VAR_7, VAR_8);
   VAR_8 += 0x202;
  }
 }
 FUNC_1(VAR_4, 0x0035, 0xF0FF, 0x0700);
 if (VAR_5->radio_ver == 0x2050)
  FUNC_3(VAR_4, 0x0038, 0x0667);

 if (VAR_5->gmode || VAR_5->rev >= 2) {
  if (VAR_5->radio_ver == 0x2050) {
   FUNC_4(VAR_4, 0x007A, 0x0020);
   FUNC_4(VAR_4, 0x0051, 0x0004);
  }
  FUNC_8(VAR_4, VAR_0, 0x0000);

  FUNC_2(VAR_4, 0x0802, 0x0100);
  FUNC_2(VAR_4, 0x042B, 0x2000);

  FUNC_3(VAR_4, 0x001C, 0x186A);

  FUNC_1(VAR_4, 0x0013, 0x00FF, 0x1900);
  FUNC_1(VAR_4, 0x0035, 0xFFC0, 0x0064);
  FUNC_1(VAR_4, 0x005D, 0xFF80, 0x000A);
 }

 if (VAR_4->bad_frames_preempt) {
  FUNC_2(VAR_4, VAR_1, (1 << 11));
 }

 if (VAR_5->analog == 1) {
  FUNC_3(VAR_4, 0x0026, 0xCE00);
  FUNC_3(VAR_4, 0x0021, 0x3763);
  FUNC_3(VAR_4, 0x0022, 0x1BC3);
  FUNC_3(VAR_4, 0x0023, 0x06F9);
  FUNC_3(VAR_4, 0x0024, 0x037E);
 } else
  FUNC_3(VAR_4, 0x0026, 0xCC00);
 FUNC_3(VAR_4, 0x0030, 0x00C6);
 FUNC_8(VAR_4, 0x03EC, 0x3F22);

 if (VAR_5->analog == 1)
  FUNC_3(VAR_4, 0x0020, 0x3E1C);
 else
  FUNC_3(VAR_4, 0x0020, 0x301C);

 if (VAR_5->analog == 0)
  FUNC_8(VAR_4, 0x03E4, 0x3000);

 VAR_9 = VAR_5->channel;

 FUNC_0(VAR_4, 7, 0);

 if (VAR_5->radio_ver != 0x2050) {
  FUNC_5(VAR_4, 0x0075, 0x0080);
  FUNC_5(VAR_4, 0x0079, 0x0081);
 }

 FUNC_5(VAR_4, 0x0050, 0x0020);
 FUNC_5(VAR_4, 0x0050, 0x0023);

 if (VAR_5->radio_ver == 0x2050) {
  FUNC_5(VAR_4, 0x0050, 0x0020);
  FUNC_5(VAR_4, 0x005A, 0x0070);
 }

 FUNC_5(VAR_4, 0x005B, 0x007B);
 FUNC_5(VAR_4, 0x005C, 0x00B0);

 FUNC_4(VAR_4, 0x007A, 0x0007);

 FUNC_0(VAR_4, VAR_9, 0);

 FUNC_3(VAR_4, 0x0014, 0x0080);
 FUNC_3(VAR_4, 0x0032, 0x00CA);
 FUNC_3(VAR_4, 0x002A, 0x88A3);

 FUNC_7(VAR_4, &VAR_6->bbatt, &VAR_6->rfatt, VAR_6->tx_control);

 if (VAR_5->radio_ver == 0x2050)
  FUNC_5(VAR_4, 0x005D, 0x000D);

 FUNC_8(VAR_4, 0x03E4, (FUNC_6(VAR_4, 0x03E4) & 0xFFC0) | 0x0004);
}
