
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct ab8500 {int dev; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__*,int) ;

__attribute__((used)) static int FUNC_2(struct ab8500 *VAR_0, u16 VAR_1)
{
 int VAR_2;
 u8 VAR_3;

 VAR_2 = FUNC_1((u8)(VAR_1 >> 8), (u8)(VAR_1 & 0xFF), &VAR_3, 1);
 if (VAR_2 < 0) {
  FUNC_0(VAR_0->dev, "prcmu i2c error %d\n", VAR_2);
  return VAR_2;
 }
 return (int)VAR_3;
}
