
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int rev; } ;
struct b43_wldev {TYPE_1__ phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int VAR_12 ;
 int FUNC_2 (struct b43_wldev*,int,int) ;
 int FUNC_3 (struct b43_wldev*,int ,int) ;
 int FUNC_4 (struct b43_wldev*,int ,int) ;
 int FUNC_5 (struct b43_wldev*,int ,int,int) ;
 int FUNC_6 (struct b43_wldev*,int ) ;
 int FUNC_7 (struct b43_wldev*,int ,int) ;
 int FUNC_8 (struct b43_wldev*,int ,int,int) ;
 int FUNC_9 (struct b43_wldev*,int ) ;
 int FUNC_10 (struct b43_wldev*,int) ;

__attribute__((used)) static void FUNC_11(struct b43_wldev *VAR_13)
{
 u16 VAR_14;
 int VAR_15;


 for (VAR_15 = 0; VAR_15 < 64; VAR_15++) {
  if (VAR_13->phy.rev >= 2)
   FUNC_3(VAR_13, FUNC_0(7, VAR_15 + 1), VAR_15);
  else
   FUNC_3(VAR_13, FUNC_0(10, VAR_15 + 1), VAR_15);
 }

 FUNC_5(VAR_13, VAR_10, 0xFF00, 0xFF);
 FUNC_5(VAR_13, VAR_10, 0x8FFF, 0x5000);
 FUNC_5(VAR_13, VAR_9, 0xFFC0, 0x1F);
 if (VAR_13->phy.rev < 2) {
  FUNC_4(VAR_13, VAR_1, 0xEFFF);
  FUNC_5(VAR_13, VAR_1, 0xDFFF, 0x2000);
 } else {
  FUNC_4(VAR_13, FUNC_1(0x103), 0xFFFE);
  FUNC_5(VAR_13, FUNC_1(0x103), 0xFFFB, 0x4);
  FUNC_5(VAR_13, FUNC_1(0x103), 0xFFEF, 0x10);
  FUNC_8(VAR_13, VAR_0, 0xF3, 0x1);
  FUNC_9(VAR_13, VAR_12);
 }
 FUNC_5(VAR_13, VAR_9, 0x7FFF, 0x8000);
 FUNC_4(VAR_13, VAR_8, 0xFF);
 FUNC_7(VAR_13, VAR_8, 0xA);
 FUNC_5(VAR_13, VAR_4,
   ~VAR_5 & 0xFFFF,
   VAR_6);
 FUNC_4(VAR_13, VAR_10, 0xF8FF);
 FUNC_5(VAR_13, VAR_4,
   ~VAR_5 & 0xFFFF,
   VAR_7);

 if (VAR_13->phy.rev < 2) {
  FUNC_5(VAR_13, VAR_2, 0xEFFF, 0x1000);
  FUNC_4(VAR_13, VAR_3, 0xEFFF);
 } else {
  FUNC_10(VAR_13, 0x7F);
 }

 FUNC_2(VAR_13, 1, 1);

 VAR_14 = FUNC_6(VAR_13, VAR_11);
 if (VAR_14 & 0x8000) {
  FUNC_5(VAR_13, VAR_9,
    0xFFC0, (VAR_14 & 0xFF) - 32);
 }

 FUNC_4(VAR_13, VAR_2, 0xEFFF);



}
