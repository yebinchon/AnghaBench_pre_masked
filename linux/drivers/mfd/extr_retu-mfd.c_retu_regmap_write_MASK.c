
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
typedef int u8 ;
typedef int u16 ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;
typedef int reg ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct i2c_client*,int ,int ) ;
 int FUNC_2 (int *,void const*,int) ;
 struct i2c_client* FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(void *VAR_0, const void *VAR_1, size_t VAR_2)
{
 u8 VAR_3;
 u16 VAR_4;
 struct device *VAR_5 = VAR_0;
 struct i2c_client *VAR_6 = FUNC_3(VAR_5);

 FUNC_0(VAR_2 != sizeof(VAR_3) + sizeof(VAR_4));
 FUNC_2(&VAR_3, VAR_1, sizeof(VAR_3));
 FUNC_2(&VAR_4, VAR_1 + sizeof(VAR_3), sizeof(VAR_4));
 return FUNC_1(VAR_6, VAR_3, VAR_4);
}
