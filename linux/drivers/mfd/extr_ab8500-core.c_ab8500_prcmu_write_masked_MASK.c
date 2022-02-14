
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct ab8500 {int dev; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,int *,int *,int) ;

__attribute__((used)) static int FUNC_2(struct ab8500 *VAR_0, u16 VAR_1, u8 VAR_2,
 u8 VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1((u8)(VAR_1 >> 8), (u8)(VAR_1 & 0xFF), &VAR_3,
  &VAR_2, 1);
 if (VAR_4 < 0)
  FUNC_0(VAR_0->dev, "prcmu i2c error %d\n", VAR_4);
 return VAR_4;
}
