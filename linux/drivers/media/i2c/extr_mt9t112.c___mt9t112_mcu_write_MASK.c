
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (struct i2c_client const*,int,int ) ;

__attribute__((used)) static int FUNC_1(const struct i2c_client *VAR_0,
          u16 VAR_1, u16 VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0, 0x098E, VAR_1);
 if (VAR_3 < 0)
  return VAR_3;

 return FUNC_0(VAR_0, 0x0990, VAR_2);
}
