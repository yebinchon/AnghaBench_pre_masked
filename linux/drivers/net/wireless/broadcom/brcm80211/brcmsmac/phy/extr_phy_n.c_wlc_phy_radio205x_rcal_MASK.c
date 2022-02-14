
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int radiorev; int phy_rev; } ;
struct brcms_phy {TYPE_1__ pubpi; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int ,int) ;
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
 scalar_t__ FUNC_2 (int,char*) ;
 int FUNC_3 (struct brcms_phy*,int,int) ;
 int FUNC_4 (struct brcms_phy*,int ,int,int) ;
 int FUNC_5 (struct brcms_phy*,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct brcms_phy*,int,int) ;

__attribute__((used)) static u16 FUNC_8(struct brcms_phy *VAR_11)
{
 u16 VAR_12 = 0;
 int VAR_13;

 if (FUNC_0(VAR_11->pubpi.phy_rev, 7)) {

  if (VAR_11->pubpi.radiorev == 5) {

   FUNC_3(VAR_11, 0x342, ~(0x1 << 1));

   FUNC_6(10);

   FUNC_4(VAR_11, VAR_6, 0x1, 0x1);
   FUNC_4(VAR_11, VAR_10, 0x2,
          0x1);
  }
  FUNC_4(VAR_11, VAR_7, 0x1, 0x1);

  FUNC_6(10);

  FUNC_4(VAR_11, VAR_7, 0x3, 0x3);

  for (VAR_13 = 0; VAR_13 < VAR_0; VAR_13++) {
   VAR_12 = FUNC_5(VAR_11, VAR_8);
   if (VAR_12 & 0x1)
    break;

   FUNC_6(100);
  }

  if (FUNC_2(VAR_13 == VAR_0,
    "HW error: radio calib2"))
   return 0;

  FUNC_4(VAR_11, VAR_7, 0x2, 0x0);

  VAR_12 = FUNC_5(VAR_11, VAR_8) & 0x3e;

  FUNC_4(VAR_11, VAR_7, 0x1, 0x0);
  if (VAR_11->pubpi.radiorev == 5) {

   FUNC_4(VAR_11, VAR_6, 0x1, 0x0);
   FUNC_4(VAR_11, VAR_10, 0x2,
          0x0);
  }

  if ((VAR_11->pubpi.radiorev <= 4) || (VAR_11->pubpi.radiorev == 6)) {

   FUNC_4(VAR_11, VAR_9, 0x3c,
          VAR_12);
   FUNC_4(VAR_11, VAR_5, 0xf0,
          VAR_12 << 2);
  }

 } else if (FUNC_1(VAR_11->pubpi.phy_rev, 3)) {
  u16 VAR_14;

  VAR_14 =
   FUNC_5(
    VAR_11,
    VAR_2 |
    VAR_1);
  FUNC_7(VAR_11, VAR_2 | VAR_1,
    VAR_14 | 0x7);
  FUNC_6(10);

  FUNC_7(VAR_11, VAR_4 | VAR_1,
    0x1);
  FUNC_6(10);

  FUNC_7(VAR_11, VAR_4 | VAR_1,
    0x9);

  for (VAR_13 = 0; VAR_13 < VAR_0; VAR_13++) {
   VAR_12 = FUNC_5(
    VAR_11,
    VAR_3 |
    VAR_1);
   if (VAR_12 & 0x80)
    break;

   FUNC_6(100);
  }

  if (FUNC_2(VAR_13 == VAR_0,
    "HW error: radio calib3"))
   return 0;

  FUNC_7(VAR_11, VAR_4 | VAR_1,
    0x1);

  VAR_12 =
   FUNC_5(VAR_11,
           VAR_3 |
           VAR_1);

  FUNC_7(VAR_11, VAR_4 | VAR_1,
    0x0);

  FUNC_7(VAR_11, VAR_2 | VAR_1,
    VAR_14);

  return VAR_12 & 0x1f;
 }
 return VAR_12 & 0x3e;
}
