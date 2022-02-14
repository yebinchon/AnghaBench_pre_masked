
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (struct i2c_client*,int ) ;

__attribute__((used)) static void FUNC_2(struct i2c_client *VAR_1)
{
 u16 VAR_2;

 VAR_2 = FUNC_1(VAR_1, VAR_0);

 FUNC_0(&VAR_1->dev, "MAX17040 Fuel-Gauge Ver 0x%x\n", VAR_2);
}
