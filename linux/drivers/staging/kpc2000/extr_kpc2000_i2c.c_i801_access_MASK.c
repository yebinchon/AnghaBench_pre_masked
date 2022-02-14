
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union i2c_smbus_data {int byte; int word; } ;
typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int dev; } ;
struct i2c_device {int features; TYPE_1__ adapter; } ;
struct i2c_adapter {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned short VAR_3 ;





 char VAR_4 ;

 char VAR_5 ;


 int VAR_6 ;

 int FUNC_0 (struct i2c_device*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct i2c_device*) ;
 int FUNC_2 (struct i2c_device*) ;
 int FUNC_3 (struct i2c_device*) ;
 int FUNC_4 (struct i2c_device*) ;
 int FUNC_5 (int *,char*,...) ;
 struct i2c_device* FUNC_6 (struct i2c_adapter*) ;
 int FUNC_7 (struct i2c_device*,union i2c_smbus_data*,char,int,int) ;
 int FUNC_8 (struct i2c_device*,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int,int ) ;

__attribute__((used)) static s32 FUNC_11(struct i2c_adapter *VAR_9, u16 VAR_10, unsigned short VAR_11, char VAR_12, u8 VAR_13, int VAR_14, union i2c_smbus_data *VAR_15)
{
 int VAR_16;
 int VAR_17 = 0;
 int VAR_18, VAR_19 = 0;
 struct i2c_device *VAR_20 = FUNC_6(VAR_9);

 VAR_16 = (VAR_20->features & VAR_2) && (VAR_11 & VAR_3) && VAR_14 != 132 && VAR_14 != 133;

 switch (VAR_14) {
 case 132:
  FUNC_5(&VAR_20->adapter.dev, "  [acc] SMBUS_QUICK\n");
  FUNC_10(((VAR_10 & 0x7f) << 1) | (VAR_12 & 0x01), FUNC_1(VAR_20));
  VAR_19 = VAR_6;
  break;
 case 135:
  FUNC_5(&VAR_20->adapter.dev, "  [acc] SMBUS_BYTE\n");

  FUNC_10(((VAR_10 & 0x7f) << 1) | (VAR_12 & 0x01), FUNC_1(VAR_20));
  if (VAR_12 == VAR_5)
   FUNC_10(VAR_13, FUNC_2(VAR_20));
  VAR_19 = 130;
  break;
 case 134:
  FUNC_5(&VAR_20->adapter.dev, "  [acc] SMBUS_BYTE_DATA\n");
  FUNC_10(((VAR_10 & 0x7f) << 1) | (VAR_12 & 0x01), FUNC_1(VAR_20));
  FUNC_10(VAR_13, FUNC_2(VAR_20));
  if (VAR_12 == VAR_5)
   FUNC_10(VAR_15->byte, FUNC_3(VAR_20));
  VAR_19 = 129;
  break;
 case 131:
  FUNC_5(&VAR_20->adapter.dev, "  [acc] SMBUS_WORD_DATA\n");
  FUNC_10(((VAR_10 & 0x7f) << 1) | (VAR_12 & 0x01), FUNC_1(VAR_20));
  FUNC_10(VAR_13, FUNC_2(VAR_20));
  if (VAR_12 == VAR_5) {
   FUNC_10(VAR_15->word & 0xff, FUNC_3(VAR_20));
   FUNC_10((VAR_15->word & 0xff00) >> 8, FUNC_4(VAR_20));
  }
  VAR_19 = 128;
  break;
 case 136:
  FUNC_5(&VAR_20->adapter.dev, "  [acc] SMBUS_BLOCK_DATA\n");
  FUNC_10(((VAR_10 & 0x7f) << 1) | (VAR_12 & 0x01), FUNC_1(VAR_20));
  FUNC_10(VAR_13, FUNC_2(VAR_20));
  VAR_17 = 1;
  break;
 case 133:
  FUNC_5(&VAR_20->adapter.dev, "  [acc] SMBUS_I2C_BLOCK_DATA\n");



  FUNC_10((VAR_10 & 0x7f) << 1, FUNC_1(VAR_20));
  if (VAR_12 == VAR_4) {



   FUNC_10(VAR_13, FUNC_4(VAR_20));
  } else {
   FUNC_10(VAR_13, FUNC_2(VAR_20));
  }
  VAR_17 = 1;
  break;
 default:
  FUNC_5(&VAR_20->adapter.dev, "  [acc] Unsupported transaction %d\n", VAR_14);
  return -VAR_1;
 }

 if (VAR_16) {
  FUNC_5(&VAR_20->adapter.dev, "  [acc] hwpec: yes\n");
  FUNC_10(FUNC_9(FUNC_0(VAR_20)) | VAR_7, FUNC_0(VAR_20));
 } else {
  FUNC_5(&VAR_20->adapter.dev, "  [acc] hwpec: no\n");
  FUNC_10(FUNC_9(FUNC_0(VAR_20)) & (~VAR_7), FUNC_0(VAR_20));
 }

 if (VAR_17) {

  FUNC_5(&VAR_20->adapter.dev, "  [acc] block: yes\n");
  VAR_18 = FUNC_7(VAR_20, VAR_15, VAR_12, VAR_14, VAR_16);
 } else {
  FUNC_5(&VAR_20->adapter.dev, "  [acc] block: no\n");
  VAR_18 = FUNC_8(VAR_20, VAR_19 | VAR_0);
 }





 if (VAR_16 || VAR_17) {
  FUNC_5(&VAR_20->adapter.dev, "  [acc] hwpec || block\n");
  FUNC_10(FUNC_9(FUNC_0(VAR_20)) & ~(VAR_7 | VAR_8), FUNC_0(VAR_20));
 }
 if (VAR_17) {
  FUNC_5(&VAR_20->adapter.dev, "  [acc] block\n");
  return VAR_18;
 }
 if (VAR_18) {
  FUNC_5(&VAR_20->adapter.dev, "  [acc] ret %d\n", VAR_18);
  return VAR_18;
 }
 if ((VAR_12 == VAR_5) || (VAR_19 == VAR_6)) {
  FUNC_5(&VAR_20->adapter.dev, "  [acc] I2C_SMBUS_WRITE || I801_QUICK  -> ret 0\n");
  return 0;
 }

 switch (VAR_19 & 0x7f) {
 case 130:
 case 129:
  FUNC_5(&VAR_20->adapter.dev, "  [acc] I801_BYTE or I801_BYTE_DATA\n");
  VAR_15->byte = FUNC_9(FUNC_3(VAR_20));
  break;
 case 128:
  FUNC_5(&VAR_20->adapter.dev, "  [acc] I801_WORD_DATA\n");
  VAR_15->word = FUNC_9(FUNC_3(VAR_20)) + (FUNC_9(FUNC_4(VAR_20)) << 8);
  break;
 }
 return 0;
}
