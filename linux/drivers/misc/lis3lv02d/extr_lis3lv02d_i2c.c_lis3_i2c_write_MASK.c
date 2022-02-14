
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lis3lv02d {struct i2c_client* bus_priv; } ;
struct i2c_client {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (struct i2c_client*,int,int ) ;

__attribute__((used)) static inline s32 FUNC_1(struct lis3lv02d *VAR_0, int VAR_1, u8 VAR_2)
{
 struct i2c_client *VAR_3 = VAR_0->bus_priv;
 return FUNC_0(VAR_3, VAR_1, VAR_2);
}
