
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43_phy {scalar_t__ type; int rev; } ;
struct b43_wldev {struct b43_phy phy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct b43_wldev*) ;
 int FUNC_2 (struct b43_wldev*) ;
 int FUNC_3 (struct b43_wldev*) ;
 int FUNC_4 (struct b43_wldev*) ;
 int FUNC_5 (struct b43_wldev*) ;
 int FUNC_6 (struct b43_wldev*) ;
 int FUNC_7 (struct b43_wldev*) ;
 int FUNC_8 (struct b43_wldev*) ;
 int FUNC_9 (struct b43_wldev*) ;
 int FUNC_10 (struct b43_wldev*) ;
 int FUNC_11 (struct b43_wldev*) ;
 int FUNC_12 (struct b43_wldev*) ;
 int FUNC_13 (struct b43_wldev*) ;
 int FUNC_14 (struct b43_wldev*) ;
 int FUNC_15 (struct b43_wldev*) ;
 int FUNC_16 (struct b43_wldev*) ;
 int FUNC_17 (struct b43_wldev*) ;
 int FUNC_18 (struct b43_wldev*) ;

void FUNC_19(struct b43_wldev *VAR_1)
{
 struct b43_phy *VAR_2 = &VAR_1->phy;

 if (VAR_2->type == VAR_0) {
  switch (VAR_2->rev) {
  case 1:
   FUNC_8(VAR_1);
   FUNC_9(VAR_1);
   FUNC_7(VAR_1);
   FUNC_5(VAR_1);
   FUNC_10(VAR_1);
   FUNC_12(VAR_1);
   FUNC_15(VAR_1);
   FUNC_13(VAR_1);
   FUNC_3(VAR_1);
   FUNC_18(VAR_1);
   FUNC_1(VAR_1);
   break;
  case 2:
  case 6:
  case 7:
  case 8:
  case 9:
   FUNC_16(VAR_1);
   FUNC_8(VAR_1);
   FUNC_14(VAR_1);
   FUNC_12(VAR_1);
   FUNC_13(VAR_1);
   FUNC_11(VAR_1);
   FUNC_18(VAR_1);
   FUNC_1(VAR_1);
   FUNC_2(VAR_1);
   FUNC_17(VAR_1);
   break;
  default:
   FUNC_0(1);
  }
  FUNC_4(VAR_1);
 } else {
  FUNC_0(1);
 }

 FUNC_6(VAR_1);
}
