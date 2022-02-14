
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_7__ {int (* write_reg ) (struct ixgbe_hw*,int,int ,int) ;int (* read_reg ) (struct ixgbe_hw*,int,int ,int*) ;} ;
struct TYPE_8__ {TYPE_3__ ops; } ;
struct TYPE_5__ {scalar_t__ (* read ) (struct ixgbe_hw*,int,int*) ;} ;
struct TYPE_6__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_4__ phy; TYPE_2__ eeprom; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct ixgbe_hw*,char*,...) ;
 int FUNC_1 (struct ixgbe_hw*,char*,int) ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*,int*,int*) ;
 int FUNC_4 (struct ixgbe_hw*,int,int ,int*) ;
 int FUNC_5 (struct ixgbe_hw*,int,int ,int) ;
 int FUNC_6 (struct ixgbe_hw*,int,int ,int*) ;
 scalar_t__ FUNC_7 (struct ixgbe_hw*,int,int*) ;
 scalar_t__ FUNC_8 (struct ixgbe_hw*,int,int*) ;
 scalar_t__ FUNC_9 (struct ixgbe_hw*,int,int*) ;
 scalar_t__ FUNC_10 (struct ixgbe_hw*,int,int*) ;
 int FUNC_11 (struct ixgbe_hw*,int,int ,int) ;
 int FUNC_12 (int,int) ;

s32 FUNC_13(struct ixgbe_hw *VAR_10)
{
 u16 VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
 bool VAR_16 = 0;
 u16 VAR_17, VAR_18;
 u16 VAR_19 = 0;
 s32 VAR_20;
 u32 VAR_21;


 if (FUNC_2(VAR_10))
  return 0;

 VAR_10->phy.ops.read_reg(VAR_10, VAR_6, VAR_8, &VAR_19);


 VAR_10->phy.ops.write_reg(VAR_10, VAR_6, VAR_8,
         (VAR_19 | VAR_7));

 for (VAR_21 = 0; VAR_21 < 100; VAR_21++) {
  VAR_10->phy.ops.read_reg(VAR_10, VAR_6, VAR_8,
         &VAR_19);
  if ((VAR_19 & VAR_7) == 0)
   break;
  FUNC_12(10000, 20000);
 }

 if ((VAR_19 & VAR_7) != 0) {
  FUNC_0(VAR_10, "PHY reset did not complete.\n");
  return VAR_5;
 }


 VAR_20 = FUNC_3(VAR_10, &VAR_17,
            &VAR_18);
 if (VAR_20)
  return VAR_20;

 VAR_20 = VAR_10->eeprom.ops.read(VAR_10, VAR_18, &VAR_15);
 VAR_18++;
 while (!VAR_16) {



  VAR_20 = VAR_10->eeprom.ops.read(VAR_10, VAR_18, &VAR_13);
  if (VAR_20)
   goto err_eeprom;
  VAR_12 = (VAR_13 & VAR_1) >>
      VAR_2;
  VAR_14 = VAR_13 & VAR_4;
  switch (VAR_12) {
  case 128:
   VAR_18++;
   FUNC_0(VAR_10, "DELAY: %d MS\n", VAR_14);
   FUNC_12(VAR_14 * 1000, VAR_14 * 2000);
   break;
  case 129:
   FUNC_0(VAR_10, "DATA:\n");
   VAR_18++;
   VAR_20 = VAR_10->eeprom.ops.read(VAR_10, VAR_18++,
            &VAR_11);
   if (VAR_20)
    goto err_eeprom;
   for (VAR_21 = 0; VAR_21 < VAR_14; VAR_21++) {
    VAR_20 = VAR_10->eeprom.ops.read(VAR_10, VAR_18,
             &VAR_13);
    if (VAR_20)
     goto err_eeprom;
    VAR_10->phy.ops.write_reg(VAR_10, VAR_11,
            VAR_9, VAR_13);
    FUNC_0(VAR_10, "Wrote %4.4x to %4.4x\n", VAR_13,
           VAR_11);
    VAR_18++;
    VAR_11++;
   }
   break;
  case 130:
   VAR_18++;
   FUNC_0(VAR_10, "CONTROL:\n");
   if (VAR_14 == VAR_0) {
    FUNC_0(VAR_10, "EOL\n");
    VAR_16 = 1;
   } else if (VAR_14 == VAR_3) {
    FUNC_0(VAR_10, "SOL\n");
   } else {
    FUNC_0(VAR_10, "Bad control value\n");
    return VAR_5;
   }
   break;
  default:
   FUNC_0(VAR_10, "Bad control type\n");
   return VAR_5;
  }
 }

 return VAR_20;

err_eeprom:
 FUNC_1(VAR_10, "eeprom read at offset %d failed\n", VAR_18);
 return VAR_5;
}
