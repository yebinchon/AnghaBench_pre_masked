
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43_phy {int rev; } ;
struct b43_wldev {struct b43_phy phy; } ;


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
 int VAR_12 ;
 int FUNC_0 (int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (struct b43_wldev*,int ,int,int) ;
 int FUNC_2 (struct b43_wldev*,int ,int) ;
 int FUNC_3 (struct b43_wldev*,int ,int,int) ;
 int FUNC_4 (struct b43_wldev*,int ) ;
 int FUNC_5 (struct b43_wldev*,int ,int) ;
 int FUNC_6 (struct b43_wldev*,int,int) ;

__attribute__((used)) static void FUNC_7(struct b43_wldev *VAR_16)
{
 struct b43_phy *VAR_17 = &VAR_16->phy;

 if (VAR_17->rev == 1) {
  FUNC_1(VAR_16, VAR_1, 0, 254);
  FUNC_1(VAR_16, VAR_1, 1, 13);
  FUNC_1(VAR_16, VAR_1, 2, 19);
  FUNC_1(VAR_16, VAR_1, 3, 25);
  FUNC_1(VAR_16, VAR_2, 0, 0x2710);
  FUNC_1(VAR_16, VAR_2, 1, 0x9B83);
  FUNC_1(VAR_16, VAR_2, 2, 0x9B83);
  FUNC_1(VAR_16, VAR_2, 3, 0x0F8D);
  FUNC_5(VAR_16, VAR_9, 4);
 } else {
  FUNC_1(VAR_16, VAR_0, 0, 254);
  FUNC_1(VAR_16, VAR_0, 1, 13);
  FUNC_1(VAR_16, VAR_0, 2, 19);
  FUNC_1(VAR_16, VAR_0, 3, 25);
 }

 FUNC_3(VAR_16, VAR_6, 0x00FF, 0x5700);
 FUNC_3(VAR_16, FUNC_0(0x1A), ~0x007F, 0x000F);
 FUNC_3(VAR_16, FUNC_0(0x1A), ~0x3F80, 0x2B80);
 FUNC_3(VAR_16, VAR_5, 0xF0FF, 0x0300);
 FUNC_6(VAR_16, 0x7A, 0x0008);
 FUNC_3(VAR_16, VAR_12, ~0x000F, 0x0008);
 FUNC_3(VAR_16, VAR_13, ~0x0F00, 0x0600);
 FUNC_3(VAR_16, VAR_11, ~0x0F00, 0x0700);
 FUNC_3(VAR_16, VAR_12, ~0x0F00, 0x0100);
 if (VAR_17->rev == 1) {
  FUNC_3(VAR_16, VAR_11, ~0x000F, 0x0007);
 }
 FUNC_3(VAR_16, FUNC_0(0x88), ~0x00FF, 0x001C);
 FUNC_3(VAR_16, FUNC_0(0x88), ~0x3F00, 0x0200);
 FUNC_3(VAR_16, FUNC_0(0x96), ~0x00FF, 0x001C);
 FUNC_3(VAR_16, FUNC_0(0x89), ~0x00FF, 0x0020);
 FUNC_3(VAR_16, FUNC_0(0x89), ~0x3F00, 0x0200);
 FUNC_3(VAR_16, FUNC_0(0x82), ~0x00FF, 0x002E);
 FUNC_3(VAR_16, FUNC_0(0x96), 0x00FF, 0x1A00);
 FUNC_3(VAR_16, FUNC_0(0x81), ~0x00FF, 0x0028);
 FUNC_3(VAR_16, FUNC_0(0x81), 0x00FF, 0x2C00);
 if (VAR_17->rev == 1) {
  FUNC_5(VAR_16, VAR_14, 0x092B);
  FUNC_3(VAR_16, FUNC_0(0x1B), ~0x001E, 0x0002);
 } else {
  FUNC_2(VAR_16, FUNC_0(0x1B), ~0x001E);
  FUNC_5(VAR_16, FUNC_0(0x1F), 0x287A);
  FUNC_3(VAR_16, VAR_10, ~0x000F, 0x0004);
  if (VAR_17->rev >= 6) {
   FUNC_5(VAR_16, FUNC_0(0x22), 0x287A);
   FUNC_3(VAR_16, VAR_10, 0x0FFF, 0x3000);
  }
 }
 FUNC_3(VAR_16, VAR_8, 0x8080, 0x7874);
 FUNC_5(VAR_16, FUNC_0(0x8E), 0x1C00);
 if (VAR_17->rev == 1) {
  FUNC_3(VAR_16, VAR_7, ~0x0F00, 0x0600);
  FUNC_5(VAR_16, FUNC_0(0x8B), 0x005E);
  FUNC_3(VAR_16, VAR_5, ~0x00FF, 0x001E);
  FUNC_5(VAR_16, FUNC_0(0x8D), 0x0002);
  FUNC_1(VAR_16, VAR_4, 0, 0);
  FUNC_1(VAR_16, VAR_4, 1, 7);
  FUNC_1(VAR_16, VAR_4, 2, 16);
  FUNC_1(VAR_16, VAR_4, 3, 28);
 } else {
  FUNC_1(VAR_16, VAR_3, 0, 0);
  FUNC_1(VAR_16, VAR_3, 1, 7);
  FUNC_1(VAR_16, VAR_3, 2, 16);
  FUNC_1(VAR_16, VAR_3, 3, 28);
 }
 if (VAR_17->rev >= 6) {
  FUNC_2(VAR_16, FUNC_0(0x26), ~0x0003);
  FUNC_2(VAR_16, FUNC_0(0x26), ~0x1000);
 }
 FUNC_4(VAR_16, VAR_15);
}
