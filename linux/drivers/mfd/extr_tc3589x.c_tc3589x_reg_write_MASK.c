
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tc3589x {int dev; int i2c; } ;


 int FUNC_0 (int ,char*,int ,int) ;
 int FUNC_1 (int ,int ,int ) ;

int FUNC_2(struct tc3589x *VAR_0, u8 VAR_1, u8 VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0->i2c, VAR_1, VAR_2);
 if (VAR_3 < 0)
  FUNC_0(VAR_0->dev, "failed to write reg %#x: %d\n",
   VAR_1, VAR_3);

 return VAR_3;
}
