
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct i2c_client {int dummy; } ;
typedef int buf ;


 int FUNC_0 (struct i2c_client*,int*,int) ;

__attribute__((used)) static u16 FUNC_1(struct i2c_client *VAR_0)
{
 u8 VAR_1[4];
 int VAR_2 = FUNC_0(VAR_0, VAR_1, sizeof(VAR_1));
 if (VAR_2 == sizeof(VAR_1))
  return VAR_1[3] << 8;
 return 0;
}
