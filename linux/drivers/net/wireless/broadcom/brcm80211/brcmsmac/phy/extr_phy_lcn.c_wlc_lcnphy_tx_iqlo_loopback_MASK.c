
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int phy_rev; } ;
struct brcms_phy {int radio_chanspec; TYPE_1__ pubpi; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int) ;
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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_2 (struct brcms_phy*,int ,int) ;
 int * VAR_19 ;
 int FUNC_3 (struct brcms_phy*,int,int,int) ;
 int FUNC_4 (struct brcms_phy*,int ,int,int) ;
 int FUNC_5 (struct brcms_phy*,int ,int) ;
 int FUNC_6 (struct brcms_phy*,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct brcms_phy*,int ,int) ;

__attribute__((used)) static void
FUNC_9(struct brcms_phy *VAR_20, u16 *VAR_21)
{
 u16 VAR_22;
 int VAR_23;
 for (VAR_23 = 0; VAR_23 < 20; VAR_23++)
  VAR_21[VAR_23] =
   FUNC_6(VAR_20, VAR_19[VAR_23]);

 FUNC_3(VAR_20, 0x44c, (0x1 << 12), 1 << 12);
 FUNC_3(VAR_20, 0x44d, (0x1 << 14), 1 << 14);

 FUNC_3(VAR_20, 0x44c, (0x1 << 11), 1 << 11);
 FUNC_3(VAR_20, 0x44d, (0x1 << 13), 0 << 13);

 FUNC_3(VAR_20, 0x43b, (0x1 << 1), 1 << 1);
 FUNC_3(VAR_20, 0x43c, (0x1 << 1), 0 << 1);

 FUNC_3(VAR_20, 0x43b, (0x1 << 0), 1 << 0);
 FUNC_3(VAR_20, 0x43c, (0x1 << 0), 0 << 0);

 if (FUNC_1(VAR_20->pubpi.phy_rev, 2))
  FUNC_2(VAR_20, VAR_7, 0xFD);
 else
  FUNC_2(VAR_20, VAR_7, 0xF9);
 FUNC_5(VAR_20, VAR_17, 0x1);

 FUNC_5(VAR_20, VAR_6, 0x01);
 FUNC_5(VAR_20, VAR_17, 0x18);
 FUNC_7(20);

 if (FUNC_1(VAR_20->pubpi.phy_rev, 2)) {
  if (FUNC_0(VAR_20->radio_chanspec))
   FUNC_4(VAR_20, VAR_7, 1, 0);
  else
   FUNC_5(VAR_20, VAR_7, 1);
 } else {
  if (FUNC_0(VAR_20->radio_chanspec))
   FUNC_4(VAR_20, VAR_7, 3, 1);
  else
   FUNC_5(VAR_20, VAR_7, 0x3);
 }

 FUNC_7(20);

 FUNC_8(VAR_20, VAR_4, 0xF);
 if (FUNC_1(VAR_20->pubpi.phy_rev, 2)) {
  if (FUNC_0(VAR_20->radio_chanspec))
   FUNC_4(VAR_20, VAR_5, 0xF, 0x4);
  else
   FUNC_4(VAR_20, VAR_5, 0xF, 0x6);
 } else {
  if (FUNC_0(VAR_20->radio_chanspec))
   FUNC_4(VAR_20, VAR_5, 0x1e, 0x4 << 1);
  else
   FUNC_4(VAR_20, VAR_5, 0x1e, 0x6 << 1);
 }

 FUNC_7(20);

 FUNC_8(VAR_20, VAR_0, 0x8);
 FUNC_5(VAR_20, VAR_15, 0x80);
 FUNC_7(20);

 FUNC_5(VAR_20, VAR_14, 0x10);
 FUNC_5(VAR_20, VAR_18, 0x44);
 FUNC_7(20);

 FUNC_5(VAR_20, VAR_2, 0x7);
 FUNC_5(VAR_20, VAR_16, 0x10);
 FUNC_7(20);

 FUNC_8(VAR_20, VAR_1, 0x1);
 FUNC_7(20);

 VAR_22 = 0x2A6;
 FUNC_4(VAR_20, VAR_12, 0x3 << 0, (VAR_22 >> 8) & 0x3);
 FUNC_8(VAR_20, VAR_13, (VAR_22 & 0xff));
 FUNC_5(VAR_20, VAR_18, 0x44);
 FUNC_7(20);

 FUNC_5(VAR_20, VAR_14, 0x10);
 FUNC_7(20);
 FUNC_8(VAR_20, VAR_3, 0x02);
 FUNC_5(VAR_20, VAR_15, 0x06);
 FUNC_8(VAR_20, VAR_6, 0x11);
 FUNC_8(VAR_20, VAR_8, 0xcc);
 FUNC_8(VAR_20, VAR_9, 0x2e);
 FUNC_8(VAR_20, VAR_10, 0xd7);
 FUNC_8(VAR_20, VAR_11, 0x15);
}
