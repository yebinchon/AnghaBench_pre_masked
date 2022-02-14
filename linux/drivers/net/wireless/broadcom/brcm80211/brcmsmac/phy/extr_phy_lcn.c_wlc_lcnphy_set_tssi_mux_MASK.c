
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int phy_rev; } ;
struct brcms_phy {TYPE_1__ pubpi; } ;
typedef enum lcnphy_tssi_mode { ____Placeholder_lcnphy_tssi_mode } lcnphy_tssi_mode ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int) ;
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
 int FUNC_1 (struct brcms_phy*,int,int,int) ;
 int FUNC_2 (struct brcms_phy*,int ,int,int) ;
 int FUNC_3 (struct brcms_phy*,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct brcms_phy *VAR_12, enum lcnphy_tssi_mode VAR_13)
{
 FUNC_1(VAR_12, 0x4d7, (0x1 << 0), (0x1) << 0);

 FUNC_1(VAR_12, 0x4d7, (0x1 << 6), (1) << 6);

 if (VAR_1 == VAR_13) {
  FUNC_1(VAR_12, 0x4d9, (0x1 << 2), (0) << 2);

  FUNC_1(VAR_12, 0x4d9, (0x1 << 3), (1) << 3);

  if (FUNC_0(VAR_12->pubpi.phy_rev, 2)) {
   FUNC_2(VAR_12, VAR_9, 0x4, 0x4);
  } else {
   FUNC_2(VAR_12, VAR_7, 1, 0x1);
   FUNC_2(VAR_12, VAR_11, 0x8, 0x8);
   FUNC_2(VAR_12, VAR_3, 0x1, 0x0);
   FUNC_2(VAR_12, VAR_11, 0x4, 1<<2);
   FUNC_2(VAR_12, VAR_6, 0x10, 0x0);
   FUNC_2(VAR_12, VAR_11, 0x10, 1<<4);
   FUNC_2(VAR_12, VAR_6, 0x3, 0x0);
   FUNC_2(VAR_12, VAR_5, 0xff, 0x77);
   FUNC_2(VAR_12, VAR_3, 0x1e, 0xe<<1);
   FUNC_2(VAR_12, VAR_10, 0x80, 1<<7);
   FUNC_2(VAR_12, VAR_2, 0x7, 1<<1);
   FUNC_2(VAR_12, VAR_4, 0xf0, 0<<4);
  }
 } else {
  FUNC_1(VAR_12, 0x4d9, (0x1 << 2), (0x1) << 2);

  FUNC_1(VAR_12, 0x4d9, (0x1 << 3), (0) << 3);

  if (FUNC_0(VAR_12->pubpi.phy_rev, 2)) {
   FUNC_2(VAR_12, VAR_9, 0x4, 0x4);
  } else {
   FUNC_2(VAR_12, VAR_7, 1, 0);
   FUNC_2(VAR_12, VAR_11, 0x8, 0x8);
  }
 }
 FUNC_1(VAR_12, 0x637, (0x3 << 14), (0) << 14);

 if (VAR_0 == VAR_13) {
  FUNC_3(VAR_12, VAR_8, 1);
  FUNC_2(VAR_12, VAR_2, 0x7, 0x2);
  FUNC_2(VAR_12, VAR_10, 0x80, 0x1 << 7);
  FUNC_2(VAR_12, VAR_3, 0x1f, 0x3);
 }
}
