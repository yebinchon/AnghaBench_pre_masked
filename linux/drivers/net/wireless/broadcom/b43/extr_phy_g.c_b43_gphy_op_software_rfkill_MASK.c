
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct b43_phy {unsigned int channel; scalar_t__ gmode; scalar_t__ radio_on; struct b43_phy_g* g; } ;
struct b43_wldev {struct b43_phy phy; } ;
struct TYPE_2__ {int valid; int rfover; int rfoverval; } ;
struct b43_phy_g {TYPE_1__ radio_off_context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct b43_wldev*,unsigned int,int) ;
 int FUNC_1 (struct b43_wldev*,int) ;
 int FUNC_2 (struct b43_wldev*,int,int) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct b43_wldev *VAR_2,
     bool VAR_3)
{
 struct b43_phy *VAR_4 = &VAR_2->phy;
 struct b43_phy_g *VAR_5 = VAR_4->g;
 unsigned int VAR_6;

 FUNC_3();

 if (!VAR_3) {

  if (VAR_4->radio_on)
   return;

  FUNC_2(VAR_2, 0x0015, 0x8000);
  FUNC_2(VAR_2, 0x0015, 0xCC00);
  FUNC_2(VAR_2, 0x0015, (VAR_4->gmode ? 0x00C0 : 0x0000));
  if (VAR_5->radio_off_context.valid) {

   FUNC_2(VAR_2, VAR_0,
          VAR_5->radio_off_context.rfover);
   FUNC_2(VAR_2, VAR_1,
          VAR_5->radio_off_context.rfoverval);
   VAR_5->radio_off_context.valid = 0;
  }
  VAR_6 = VAR_4->channel;
  FUNC_0(VAR_2, 6, 1);
  FUNC_0(VAR_2, VAR_6, 0);
 } else {

  u16 VAR_7, VAR_8;

  VAR_7 = FUNC_1(VAR_2, VAR_0);
  VAR_8 = FUNC_1(VAR_2, VAR_1);
  VAR_5->radio_off_context.rfover = VAR_7;
  VAR_5->radio_off_context.rfoverval = VAR_8;
  VAR_5->radio_off_context.valid = 1;
  FUNC_2(VAR_2, VAR_0, VAR_7 | 0x008C);
  FUNC_2(VAR_2, VAR_1, VAR_8 & 0xFF73);
 }
}
