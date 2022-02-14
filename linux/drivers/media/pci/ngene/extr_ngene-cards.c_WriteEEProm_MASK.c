
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_2__ {struct device* parent; } ;
struct i2c_adapter {TYPE_1__ dev; } ;
struct device {int dummy; } ;
typedef int EETag ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (struct i2c_adapter*,int,scalar_t__,int*,int) ;
 int FUNC_2 (struct i2c_adapter*,int,scalar_t__,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct i2c_adapter *VAR_5,
         u16 VAR_6, u32 VAR_7, u8 *VAR_8)
{
 struct device *VAR_9 = VAR_5->dev.parent;
 int VAR_10 = 0;
 u16 VAR_11 = VAR_4;
 u8 VAR_12[3];
 u16 VAR_13 = 0;
 int VAR_14, VAR_15;

 while (VAR_11 + sizeof(u16) + 1 < VAR_3) {
  if (FUNC_1(VAR_5, 0x50, VAR_11, VAR_12, sizeof(VAR_12)))
   return -1;
  VAR_13 = (VAR_12[0] << 8) | VAR_12[1];
  if (VAR_13 == VAR_1 || VAR_13 == VAR_2)
   return -1;
  if (VAR_13 == VAR_6)
   break;
  VAR_11 += sizeof(u16) + 1 + VAR_12[2];
 }
 if (VAR_11 + sizeof(u16) + 1 + VAR_12[2] > VAR_3) {
  FUNC_0(VAR_9, "Reached EOEE @ Tag = %04x Length = %3d\n",
   VAR_13, VAR_12[2]);
  return -1;
 }

 if (VAR_7 > VAR_12[2])
  return -VAR_0;




 VAR_11 += sizeof(u16) + 1;
 for (VAR_15 = 0; VAR_15 < VAR_7; VAR_15++, VAR_11++) {
  VAR_10 = FUNC_2(VAR_5, 0x50, VAR_11, VAR_8[VAR_15]);

  if (VAR_10)
   break;


  VAR_14 = 10;
  while (VAR_14) {
   u8 VAR_16;

   FUNC_3(50);
   VAR_10 = FUNC_1(VAR_5, 0x50, VAR_11, &VAR_16, 1);
   if (VAR_10)
    break;
   if (VAR_16 != VAR_8[VAR_15])
    FUNC_0(VAR_9, "eeprom write error\n");
   VAR_14 -= 1;
  }
  if (VAR_10) {
   FUNC_0(VAR_9, "Timeout polling eeprom\n");
   break;
  }
 }
 return VAR_10;
}
