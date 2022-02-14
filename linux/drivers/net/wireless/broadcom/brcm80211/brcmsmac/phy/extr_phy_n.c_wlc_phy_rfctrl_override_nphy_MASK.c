
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int phy_rev; } ;
struct brcms_phy {TYPE_1__ pubpi; } ;


 scalar_t__ FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (struct brcms_phy*,int,int) ;
 int FUNC_3 (struct brcms_phy*,int,int,int) ;
 int FUNC_4 (struct brcms_phy*,int,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void
FUNC_6(struct brcms_phy *VAR_0, u16 VAR_1, u16 VAR_2,
        u8 VAR_3, u8 VAR_4)
{
 u8 VAR_5;
 u16 VAR_6 = 0, VAR_7 = 0, VAR_8 = 0, VAR_9 = 0, VAR_10 =
  0, VAR_11 = 0;
 u8 VAR_12 = 0, VAR_13 = 0;

 if (FUNC_0(VAR_0->pubpi.phy_rev, 3) && FUNC_1(VAR_0->pubpi.phy_rev, 7)) {

  VAR_10 = VAR_1;
  for (VAR_5 = 0; VAR_5 < 2; VAR_5++) {

   switch (VAR_1) {
   case (0x1 << 1):
    VAR_8 = (VAR_5 == 0) ? 0xe7 : 0xec;
    VAR_9 = (VAR_5 == 0) ? 0x7a : 0x7d;
    VAR_11 = (0x1 << 0);
    VAR_13 = 0;
    break;
   case (0x1 << 2):
    VAR_8 = (VAR_5 == 0) ? 0xe7 : 0xec;
    VAR_9 = (VAR_5 == 0) ? 0x7a : 0x7d;
    VAR_11 = (0x1 << 1);
    VAR_13 = 1;
    break;
   case (0x1 << 3):
    VAR_8 = (VAR_5 == 0) ? 0xe7 : 0xec;
    VAR_9 = (VAR_5 == 0) ? 0x7a : 0x7d;
    VAR_11 = (0x1 << 2);
    VAR_13 = 2;
    break;
   case (0x1 << 4):
    VAR_8 = (VAR_5 == 0) ? 0xe7 : 0xec;
    VAR_9 = (VAR_5 == 0) ? 0x7a : 0x7d;
    VAR_11 = (0x1 << 4);
    VAR_13 = 4;
    break;
   case (0x1 << 5):
    VAR_8 = (VAR_5 == 0) ? 0xe7 : 0xec;
    VAR_9 = (VAR_5 == 0) ? 0x7a : 0x7d;
    VAR_11 = (0x1 << 5);
    VAR_13 = 5;
    break;
   case (0x1 << 6):
    VAR_8 = (VAR_5 == 0) ? 0xe7 : 0xec;
    VAR_9 = (VAR_5 == 0) ? 0x7a : 0x7d;
    VAR_11 = (0x1 << 6);
    VAR_13 = 6;
    break;
   case (0x1 << 7):
    VAR_8 = (VAR_5 == 0) ? 0xe7 : 0xec;
    VAR_9 = (VAR_5 == 0) ? 0x7a : 0x7d;
    VAR_11 = (0x1 << 7);
    VAR_13 = 7;
    break;
   case (0x1 << 8):
    VAR_8 = (VAR_5 == 0) ? 0xe7 : 0xec;
    VAR_9 = (VAR_5 == 0) ? 0x7a : 0x7d;
    VAR_11 = (0x7 << 8);
    VAR_13 = 8;
    break;
   case (0x1 << 11):
    VAR_8 = (VAR_5 == 0) ? 0xe7 : 0xec;
    VAR_9 = (VAR_5 == 0) ? 0x7a : 0x7d;
    VAR_11 = (0x7 << 13);
    VAR_13 = 13;
    break;

   case (0x1 << 9):
    VAR_8 = (VAR_5 == 0) ? 0xe7 : 0xec;
    VAR_9 = (VAR_5 == 0) ? 0xf8 : 0xfa;
    VAR_11 = (0x7 << 0);
    VAR_13 = 0;
    break;

   case (0x1 << 10):
    VAR_8 = (VAR_5 == 0) ? 0xe7 : 0xec;
    VAR_9 = (VAR_5 == 0) ? 0xf8 : 0xfa;
    VAR_11 = (0x7 << 4);
    VAR_13 = 4;
    break;

   case (0x1 << 12):
    VAR_8 = (VAR_5 == 0) ? 0xe7 : 0xec;
    VAR_9 = (VAR_5 == 0) ? 0x7b : 0x7e;
    VAR_11 = (0xffff << 0);
    VAR_13 = 0;
    break;
   case (0x1 << 13):
    VAR_8 = (VAR_5 == 0) ? 0xe7 : 0xec;
    VAR_9 = (VAR_5 == 0) ? 0x7c : 0x7f;
    VAR_11 = (0xffff << 0);
    VAR_13 = 0;
    break;
   case (0x1 << 14):
    VAR_8 = (VAR_5 == 0) ? 0xe7 : 0xec;
    VAR_9 = (VAR_5 == 0) ? 0xf9 : 0xfb;
    VAR_11 = (0x3 << 6);
    VAR_13 = 6;
    break;
   case (0x1 << 0):
    VAR_8 = (VAR_5 == 0) ? 0xe5 : 0xe6;
    VAR_9 = (VAR_5 == 0) ? 0xf9 : 0xfb;
    VAR_11 = (0x1 << 15);
    VAR_13 = 15;
    break;
   default:
    VAR_6 = 0xffff;
    break;
   }

   if (VAR_4) {
    FUNC_2(VAR_0, VAR_8, ~VAR_10);
    FUNC_2(VAR_0, VAR_9, ~VAR_11);
   } else {

    if ((VAR_3 == 0)
        || (VAR_3 & (1 << VAR_5))) {
     FUNC_4(VAR_0, VAR_8, VAR_10);

     if (VAR_6 != 0xffff)
      FUNC_3(VAR_0, VAR_9,
           VAR_11,
           (VAR_2 <<
            VAR_13));
    }
   }
  }
 } else {

  if (VAR_4) {
   FUNC_2(VAR_0, 0xec, ~VAR_1);
   VAR_2 = 0x0;
  } else {
   FUNC_4(VAR_0, 0xec, VAR_1);
  }

  for (VAR_5 = 0; VAR_5 < 2; VAR_5++) {

   switch (VAR_1) {
   case (0x1 << 1):
   case (0x1 << 9):
   case (0x1 << 12):
   case (0x1 << 13):
   case (0x1 << 14):
    VAR_6 = 0x78;

    VAR_3 = 0x1;
    break;
   case (0x1 << 2):
   case (0x1 << 3):
   case (0x1 << 4):
   case (0x1 << 5):
   case (0x1 << 6):
   case (0x1 << 7):
   case (0x1 << 8):
    VAR_6 = (VAR_5 == 0) ? 0x7a : 0x7d;
    break;
   case (0x1 << 10):
    VAR_6 = (VAR_5 == 0) ? 0x7b : 0x7e;
    break;
   case (0x1 << 11):
    VAR_6 = (VAR_5 == 0) ? 0x7c : 0x7f;
    break;
   default:
    VAR_6 = 0xffff;
   }

   switch (VAR_1) {
   case (0x1 << 1):
    VAR_7 = (0x7 << 3);
    VAR_12 = 3;
    break;
   case (0x1 << 9):
    VAR_7 = (0x1 << 2);
    VAR_12 = 2;
    break;
   case (0x1 << 12):
    VAR_7 = (0x1 << 8);
    VAR_12 = 8;
    break;
   case (0x1 << 13):
    VAR_7 = (0x1 << 9);
    VAR_12 = 9;
    break;
   case (0x1 << 14):
    VAR_7 = (0xf << 12);
    VAR_12 = 12;
    break;
   case (0x1 << 2):
    VAR_7 = (0x1 << 0);
    VAR_12 = 0;
    break;
   case (0x1 << 3):
    VAR_7 = (0x1 << 1);
    VAR_12 = 1;
    break;
   case (0x1 << 4):
    VAR_7 = (0x1 << 2);
    VAR_12 = 2;
    break;
   case (0x1 << 5):
    VAR_7 = (0x3 << 4);
    VAR_12 = 4;
    break;
   case (0x1 << 6):
    VAR_7 = (0x3 << 6);
    VAR_12 = 6;
    break;
   case (0x1 << 7):
    VAR_7 = (0x1 << 8);
    VAR_12 = 8;
    break;
   case (0x1 << 8):
    VAR_7 = (0x1 << 9);
    VAR_12 = 9;
    break;
   case (0x1 << 10):
    VAR_7 = 0x1fff;
    VAR_12 = 0x0;
    break;
   case (0x1 << 11):
    VAR_7 = 0x1fff;
    VAR_12 = 0x0;
    break;
   default:
    VAR_7 = 0x0;
    VAR_12 = 0x0;
    break;
   }

   if ((VAR_6 != 0xffff) && (VAR_3 & (1 << VAR_5)))
    FUNC_3(VAR_0, VAR_6, VAR_7, (VAR_2 << VAR_12));
  }

  FUNC_4(VAR_0, 0xec, (0x1 << 0));
  FUNC_4(VAR_0, 0x78, (0x1 << 0));
  FUNC_5(1);
  FUNC_2(VAR_0, 0xec, ~(0x1 << 0));
 }
}
