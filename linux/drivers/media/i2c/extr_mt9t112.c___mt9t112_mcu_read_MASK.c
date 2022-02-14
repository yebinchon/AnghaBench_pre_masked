
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (struct i2c_client const*,int) ;
 int FUNC_1 (struct i2c_client const*,int,int ) ;

__attribute__((used)) static int FUNC_2(const struct i2c_client *VAR_0, u16 VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0, 0x098E, VAR_1);
 if (VAR_2 < 0)
  return VAR_2;

 return FUNC_0(VAR_0, 0x0990);
}
