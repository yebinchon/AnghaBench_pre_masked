
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct TYPE_2__ {struct device* parent; } ;
struct i2c_adapter {TYPE_1__ dev; } ;
struct device {int dummy; } ;
typedef int EETag ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,char*,scalar_t__,int) ;
 int FUNC_1 (struct i2c_adapter*,int,scalar_t__,int*,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct i2c_adapter *VAR_5,
        u16 VAR_6, u32 VAR_7, u8 *VAR_8, u32 *VAR_9)
{
 struct device *VAR_10 = VAR_5->dev.parent;
 int VAR_11 = 0;
 u16 VAR_12 = VAR_3, VAR_13, VAR_14 = 0;
 u8 VAR_15[3];

 while (VAR_12 + sizeof(u16) + 1 < VAR_2) {
  if (FUNC_1(VAR_5, 0x50, VAR_12, VAR_15, sizeof(VAR_15)))
   return -1;
  VAR_14 = (VAR_15[0] << 8) | VAR_15[1];
  if (VAR_14 == VAR_0 || VAR_14 == VAR_1)
   return -1;
  if (VAR_14 == VAR_6)
   break;
  VAR_12 += sizeof(u16) + 1 + VAR_15[2];
 }
 if (VAR_12 + sizeof(u16) + 1 + VAR_15[2] > VAR_2) {
  FUNC_0(VAR_10, "Reached EOEE @ Tag = %04x Length = %3d\n",
   VAR_14, VAR_15[2]);
  return -1;
 }
 VAR_13 = VAR_15[2];
 if (VAR_13 > VAR_7)
  VAR_13 = (u16) VAR_7;
 if (VAR_13 > 0) {
  VAR_12 += sizeof(u16) + 1;
  VAR_11 = FUNC_1(VAR_5, 0x50, VAR_12, VAR_8, VAR_13);
  if (!VAR_11) {
   *VAR_9 = VAR_15[2];




  }
 }
 return VAR_11;
}
