
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;
typedef int s8 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i2c_client*,int ,int*) ;
 struct i2c_client* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_2, long *VAR_3)
{
 struct i2c_client *VAR_4 = FUNC_1(VAR_2);
 int VAR_5;
 u8 VAR_6;
 s8 VAR_7;

 VAR_5 = FUNC_0(VAR_4, VAR_0, &VAR_6);
 if (VAR_5 < 0)
  return VAR_5;


 VAR_7 = VAR_6 << 1;
 *VAR_3 = (VAR_6 & VAR_1 ? 4069 : 4340) * (VAR_7 >> 1);

 return 0;
}
