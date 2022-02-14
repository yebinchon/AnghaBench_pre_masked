
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43_phy {int rev; int channel; int radio_on; } ;
struct b43_wldev {struct b43_phy phy; int wl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct b43_wldev*,int ,int ) ;
 int FUNC_1 (struct b43_wldev*) ;
 int FUNC_2 (struct b43_wldev*) ;
 int FUNC_3 (struct b43_wldev*) ;
 int FUNC_4 (struct b43_wldev*,int,int) ;
 int FUNC_5 (struct b43_wldev*,int,int ) ;
 int FUNC_6 (struct b43_wldev*,int ) ;
 int FUNC_7 (struct b43_wldev*,int ) ;
 int FUNC_8 (int ,char*) ;

__attribute__((used)) static void FUNC_9(struct b43_wldev *VAR_4,
     bool VAR_5)
{
 struct b43_phy *VAR_6 = &VAR_4->phy;

 if (FUNC_6(VAR_4, VAR_1) & VAR_0)
  FUNC_8(VAR_4->wl, "MAC not suspended\n");

 if (VAR_5) {
  if (VAR_6->rev >= 19) {

  } else if (VAR_6->rev >= 8) {
   FUNC_0(VAR_4, VAR_2,
         ~VAR_3);
  } else if (VAR_6->rev >= 7) {

  } else if (VAR_6->rev >= 3) {
   FUNC_0(VAR_4, VAR_2,
         ~VAR_3);

   FUNC_4(VAR_4, 0x09, ~0x2);

   FUNC_5(VAR_4, 0x204D, 0);
   FUNC_5(VAR_4, 0x2053, 0);
   FUNC_5(VAR_4, 0x2058, 0);
   FUNC_5(VAR_4, 0x205E, 0);
   FUNC_4(VAR_4, 0x2062, ~0xF0);
   FUNC_5(VAR_4, 0x2064, 0);

   FUNC_5(VAR_4, 0x304D, 0);
   FUNC_5(VAR_4, 0x3053, 0);
   FUNC_5(VAR_4, 0x3058, 0);
   FUNC_5(VAR_4, 0x305E, 0);
   FUNC_4(VAR_4, 0x3062, ~0xF0);
   FUNC_5(VAR_4, 0x3064, 0);
  }
 } else {
  if (VAR_6->rev >= 19) {

  } else if (VAR_6->rev >= 7) {
   if (!VAR_4->phy.radio_on)
    FUNC_1(VAR_4);
   FUNC_7(VAR_4, VAR_4->phy.channel);
  } else if (VAR_6->rev >= 3) {
   if (!VAR_4->phy.radio_on)
    FUNC_3(VAR_4);
   FUNC_7(VAR_4, VAR_4->phy.channel);
  } else {
   FUNC_2(VAR_4);
  }
 }
}
