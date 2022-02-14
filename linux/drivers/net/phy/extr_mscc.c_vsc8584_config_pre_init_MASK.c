
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct reg_val {int member_0; int member_1; int val; int reg; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;
struct phy_device {TYPE_1__ mdio; } ;
struct firmware {scalar_t__ size; } ;


 unsigned int FUNC_0 (struct reg_val const*) ;
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
 int VAR_19 ;
 int FUNC_1 (int) ;
 int VAR_20 ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,char*,int ,int) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct phy_device*,int ) ;
 int FUNC_6 (struct phy_device*,int ,int) ;
 int FUNC_7 (struct firmware const*) ;
 int FUNC_8 (struct firmware const**,int ,struct device*) ;
 int FUNC_9 (struct phy_device*,int ,int ) ;
 int FUNC_10 (struct phy_device*,int ,scalar_t__,int*) ;
 int FUNC_11 (struct phy_device*) ;
 int FUNC_12 (struct phy_device*,int) ;
 scalar_t__ FUNC_13 (struct phy_device*,struct firmware const*) ;

__attribute__((used)) static int FUNC_14(struct phy_device *VAR_21)
{
 const struct reg_val VAR_22[] = {
  {0x07fa, 0x0050100f},
  {0x1688, 0x00049f81},
  {0x0f90, 0x00688980},
  {0x03a4, 0x0000d8f0},
  {0x0fc0, 0x00000400},
  {0x0f82, 0x0012b002},
  {0x1686, 0x00000004},
  {0x168c, 0x00d2c46f},
  {0x17a2, 0x00000620},
  {0x16a0, 0x00eeffdd},
  {0x16a6, 0x00071448},
  {0x16a4, 0x0013132f},
  {0x16a8, 0x00000000},
  {0x0ffc, 0x00c0a028},
  {0x0fe8, 0x0091b06c},
  {0x0fea, 0x00041600},
  {0x0f80, 0x00fffaff},
  {0x0fec, 0x00901809},
  {0x0ffe, 0x00b01007},
  {0x16b0, 0x00eeff00},
  {0x16b2, 0x00007000},
  {0x16b4, 0x00000814},
 };
 const struct reg_val VAR_23[] = {
  {0x0486, 0x0008a518},
  {0x0488, 0x006dc696},
  {0x048a, 0x00000912},
 };
 const struct firmware *VAR_24;
 struct device *VAR_25 = &VAR_21->mdio.dev;
 unsigned int VAR_26;
 u16 VAR_27, VAR_28;
 int VAR_29;

 FUNC_6(VAR_21, VAR_1, VAR_7);


 VAR_28 = FUNC_5(VAR_21, VAR_4);
 VAR_28 |= VAR_19;
 FUNC_6(VAR_21, VAR_4, VAR_28);

 FUNC_6(VAR_21, VAR_0, 0);

 VAR_28 = FUNC_5(VAR_21, VAR_2);
 VAR_28 |= VAR_18;
 FUNC_6(VAR_21, VAR_2, VAR_28);






 FUNC_6(VAR_21, VAR_1, VAR_6);

 FUNC_6(VAR_21, VAR_10, 0x2000);

 FUNC_6(VAR_21, VAR_1, VAR_8);

 FUNC_6(VAR_21, VAR_11, 0x1f20);

 VAR_28 = FUNC_5(VAR_21, VAR_12);
 VAR_28 |= 0x8000;
 FUNC_6(VAR_21, VAR_12, VAR_28);

 FUNC_6(VAR_21, VAR_1, VAR_9);

 FUNC_6(VAR_21, VAR_13, VAR_20 | FUNC_1(0x2fa4));

 VAR_28 = FUNC_5(VAR_21, VAR_14);
 VAR_28 &= ~0x007f;
 VAR_28 |= 0x0019;
 FUNC_6(VAR_21, VAR_14, VAR_28);

 FUNC_6(VAR_21, VAR_13, VAR_20 | FUNC_1(0x0fa4));

 for (VAR_26 = 0; VAR_26 < FUNC_0(VAR_22); VAR_26++)
  FUNC_9(VAR_21, VAR_22[VAR_26].reg, VAR_22[VAR_26].val);

 FUNC_6(VAR_21, VAR_1, VAR_5);

 FUNC_6(VAR_21, VAR_3, 0x028e);

 FUNC_6(VAR_21, VAR_1, VAR_9);

 for (VAR_26 = 0; VAR_26 < FUNC_0(VAR_23); VAR_26++)
  FUNC_9(VAR_21, VAR_23[VAR_26].reg, VAR_23[VAR_26].val);

 FUNC_6(VAR_21, VAR_1, VAR_8);

 VAR_28 = FUNC_5(VAR_21, VAR_12);
 VAR_28 &= ~0x8000;
 FUNC_6(VAR_21, VAR_12, VAR_28);

 FUNC_6(VAR_21, VAR_1, VAR_7);


 VAR_28 = FUNC_5(VAR_21, VAR_4);
 VAR_28 &= ~VAR_19;
 FUNC_6(VAR_21, VAR_4, VAR_28);

 VAR_29 = FUNC_8(&VAR_24, VAR_15, VAR_25);
 if (VAR_29) {
  FUNC_3(VAR_25, "failed to load firmware %s, ret: %d\n",
   VAR_15, VAR_29);
  return VAR_29;
 }


 VAR_29 = FUNC_10(VAR_21,
     VAR_17,
     VAR_24->size + 1, &VAR_27);
 if (VAR_29)
  goto out;

 if (VAR_27 != VAR_16) {
  FUNC_2(VAR_25, "FW CRC is not the expected one, patching FW\n");
  if (FUNC_13(VAR_21, VAR_24))
   FUNC_4(VAR_25,
     "failed to patch FW, expect non-optimal device\n");
 }

 FUNC_12(VAR_21, 0);


 VAR_29 = FUNC_10(VAR_21,
     VAR_17,
     VAR_24->size + 1, &VAR_27);
 if (VAR_29)
  goto out;

 if (VAR_27 != VAR_16)
  FUNC_4(VAR_25,
    "FW CRC after patching is not the expected one, expect non-optimal device\n");

 VAR_29 = FUNC_11(VAR_21);
 if (VAR_29)
  goto out;

 FUNC_12(VAR_21, 1);

out:
 FUNC_6(VAR_21, VAR_1, VAR_7);

 FUNC_7(VAR_24);

 return VAR_29;
}
