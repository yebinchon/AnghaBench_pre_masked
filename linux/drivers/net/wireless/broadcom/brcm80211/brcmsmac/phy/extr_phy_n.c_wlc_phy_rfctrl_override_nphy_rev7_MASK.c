
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int phy_rev; } ;
struct brcms_phy {TYPE_1__ pubpi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (struct brcms_phy*,int,int) ;
 int FUNC_2 (struct brcms_phy*,int,int,int) ;
 int FUNC_3 (struct brcms_phy*,int,int) ;

__attribute__((used)) static void
FUNC_4(struct brcms_phy *VAR_3, u16 VAR_4, u16 VAR_5,
      u8 VAR_6, u8 VAR_7, u8 VAR_8)
{
 u8 VAR_9;
 u16 VAR_10 = 0, VAR_11 = 0, VAR_12 = 0, VAR_13 = 0, VAR_14 = 0;
 u8 VAR_15 = 0;

 if (FUNC_0(VAR_3->pubpi.phy_rev, 7)) {
  VAR_13 = VAR_4;
  for (VAR_9 = 0; VAR_9 < 2; VAR_9++) {
   if (VAR_8 == VAR_0) {

    switch (VAR_4) {
    case (0x1 << 2):
     VAR_11 = (VAR_9 == 0) ? 0xe7 : 0xec;
     VAR_12 = (VAR_9 == 0) ? 0x7a :
         0x7d;
     VAR_14 = (0x1 << 1);
     VAR_15 = 1;
     break;
    case (0x1 << 3):
     VAR_11 = (VAR_9 == 0) ? 0xe7 : 0xec;
     VAR_12 = (VAR_9 == 0) ? 0x7a :
         0x7d;
     VAR_14 = (0x1 << 2);
     VAR_15 = 2;
     break;
    case (0x1 << 4):
     VAR_11 = (VAR_9 == 0) ? 0xe7 : 0xec;
     VAR_12 = (VAR_9 == 0) ? 0x7a :
         0x7d;
     VAR_14 = (0x1 << 4);
     VAR_15 = 4;
     break;
    case (0x1 << 5):
     VAR_11 = (VAR_9 == 0) ? 0xe7 : 0xec;
     VAR_12 = (VAR_9 == 0) ? 0x7a :
         0x7d;
     VAR_14 = (0x1 << 5);
     VAR_15 = 5;
     break;
    case (0x1 << 6):
     VAR_11 = (VAR_9 == 0) ? 0xe7 : 0xec;
     VAR_12 = (VAR_9 == 0) ? 0x7a :
         0x7d;
     VAR_14 = (0x1 << 6);
     VAR_15 = 6;
     break;
    case (0x1 << 7):
     VAR_11 = (VAR_9 == 0) ? 0xe7 : 0xec;
     VAR_12 = (VAR_9 == 0) ? 0x7a :
         0x7d;
     VAR_14 = (0x1 << 7);
     VAR_15 = 7;
     break;
    case (0x1 << 10):
     VAR_11 = (VAR_9 == 0) ? 0xe7 : 0xec;
     VAR_12 = (VAR_9 == 0) ? 0xf8 :
         0xfa;
     VAR_14 = (0x7 << 4);
     VAR_15 = 4;
     break;
    case (0x1 << 11):
     VAR_11 = (VAR_9 == 0) ? 0xe7 : 0xec;
     VAR_12 = (VAR_9 == 0) ? 0x7b :
         0x7e;
     VAR_14 = (0xffff << 0);
     VAR_15 = 0;
     break;
    case (0x1 << 12):
     VAR_11 = (VAR_9 == 0) ? 0xe7 : 0xec;
     VAR_12 = (VAR_9 == 0) ? 0x7c :
         0x7f;
     VAR_14 = (0xffff << 0);
     VAR_15 = 0;
     break;
    case (0x3 << 13):
     VAR_11 = (VAR_9 == 0) ? 0xe7 : 0xec;
     VAR_12 = (VAR_9 == 0) ? 0x348 :
         0x349;
     VAR_14 = (0xff << 0);
     VAR_15 = 0;
     break;
    case (0x1 << 13):
     VAR_11 = (VAR_9 == 0) ? 0xe7 : 0xec;
     VAR_12 = (VAR_9 == 0) ? 0x348 :
         0x349;
     VAR_14 = (0xf << 0);
     VAR_15 = 0;
     break;
    default:
     VAR_10 = 0xffff;
     break;
    }
   } else if (VAR_8 ==
       VAR_1) {

    switch (VAR_4) {
    case (0x1 << 1):
     VAR_11 = (VAR_9 == 0) ? 0x342 :
        0x343;
     VAR_12 = (VAR_9 == 0) ? 0x340 :
         0x341;
     VAR_14 = (0x1 << 1);
     VAR_15 = 1;
     break;
    case (0x1 << 3):
     VAR_11 = (VAR_9 == 0) ? 0x342 :
        0x343;
     VAR_12 = (VAR_9 == 0) ? 0x340 :
         0x341;
     VAR_14 = (0x1 << 3);
     VAR_15 = 3;
     break;
    case (0x1 << 5):
     VAR_11 = (VAR_9 == 0) ? 0x342 :
        0x343;
     VAR_12 = (VAR_9 == 0) ? 0x340 :
         0x341;
     VAR_14 = (0x1 << 5);
     VAR_15 = 5;
     break;
    case (0x1 << 4):
     VAR_11 = (VAR_9 == 0) ? 0x342 :
        0x343;
     VAR_12 = (VAR_9 == 0) ? 0x340 :
         0x341;
     VAR_14 = (0x1 << 4);
     VAR_15 = 4;
     break;
    case (0x1 << 2):

     VAR_11 = (VAR_9 == 0) ? 0x342 :
        0x343;
     VAR_12 = (VAR_9 == 0) ? 0x340 :
         0x341;
     VAR_14 = (0x1 << 2);
     VAR_15 = 2;
     break;
    case (0x1 << 7):

     VAR_11 = (VAR_9 == 0) ? 0x342 :
        0x343;
     VAR_12 = (VAR_9 == 0) ? 0x340 :
         0x341;
     VAR_14 = (0x7 << 8);
     VAR_15 = 8;
     break;
    case (0x1 << 11):
     VAR_11 = (VAR_9 == 0) ? 0x342 :
        0x343;
     VAR_12 = (VAR_9 == 0) ? 0x340 :
         0x341;
     VAR_14 = (0x1 << 14);
     VAR_15 = 14;
     break;
    case (0x1 << 10):
     VAR_11 = (VAR_9 == 0) ? 0x342 :
        0x343;
     VAR_12 = (VAR_9 == 0) ? 0x340 :
         0x341;
     VAR_14 = (0x1 << 13);
     VAR_15 = 13;
     break;
    case (0x1 << 9):
     VAR_11 = (VAR_9 == 0) ? 0x342 :
        0x343;
     VAR_12 = (VAR_9 == 0) ? 0x340 :
         0x341;
     VAR_14 = (0x1 << 12);
     VAR_15 = 12;
     break;
    case (0x1 << 8):
     VAR_11 = (VAR_9 == 0) ? 0x342 :
        0x343;
     VAR_12 = (VAR_9 == 0) ? 0x340 :
         0x341;
     VAR_14 = (0x1 << 11);
     VAR_15 = 11;
     break;
    case (0x1 << 6):
     VAR_11 = (VAR_9 == 0) ? 0x342 :
        0x343;
     VAR_12 = (VAR_9 == 0) ? 0x340 :
         0x341;
     VAR_14 = (0x1 << 6);
     VAR_15 = 6;
     break;
    case (0x1 << 0):
     VAR_11 = (VAR_9 == 0) ? 0x342 :
        0x343;
     VAR_12 = (VAR_9 == 0) ? 0x340 :
         0x341;
     VAR_14 = (0x1 << 0);
     VAR_15 = 0;
     break;
    default:
     VAR_10 = 0xffff;
     break;
    }
   } else if (VAR_8 ==
       VAR_2) {

    switch (VAR_4) {
    case (0x1 << 3):
     VAR_11 = (VAR_9 == 0) ? 0x346 :
        0x347;
     VAR_12 = (VAR_9 == 0) ? 0x344 :
         0x345;
     VAR_14 = (0x1 << 3);
     VAR_15 = 3;
     break;
    case (0x1 << 1):
     VAR_11 = (VAR_9 == 0) ? 0x346 :
        0x347;
     VAR_12 = (VAR_9 == 0) ? 0x344 :
         0x345;
     VAR_14 = (0x1 << 1);
     VAR_15 = 1;
     break;
    case (0x1 << 0):
     VAR_11 = (VAR_9 == 0) ? 0x346 :
        0x347;
     VAR_12 = (VAR_9 == 0) ? 0x344 :
         0x345;
     VAR_14 = (0x1 << 0);
     VAR_15 = 0;
     break;
    case (0x1 << 2):
     VAR_11 = (VAR_9 == 0) ? 0x346 :
        0x347;
     VAR_12 = (VAR_9 == 0) ? 0x344 :
         0x345;
     VAR_14 = (0x1 << 2);
     VAR_15 = 2;
     break;
    case (0x1 << 4):
     VAR_11 = (VAR_9 == 0) ? 0x346 :
        0x347;
     VAR_12 = (VAR_9 == 0) ? 0x344 :
         0x345;
     VAR_14 = (0x1 << 4);
     VAR_15 = 4;
     break;
    default:
     VAR_10 = 0xffff;
     break;
    }
   }

   if (VAR_7) {
    FUNC_1(VAR_3, VAR_11, ~VAR_13);
    FUNC_1(VAR_3, VAR_12, ~VAR_14);
   } else {

    if ((VAR_6 == 0)
        || (VAR_6 & (1 << VAR_9))) {
     FUNC_3(VAR_3, VAR_11, VAR_13);

     if (VAR_10 != 0xffff)
      FUNC_2(VAR_3, VAR_12,
           VAR_14,
           (VAR_5 <<
            VAR_15));
    }
   }
  }
 }
}
