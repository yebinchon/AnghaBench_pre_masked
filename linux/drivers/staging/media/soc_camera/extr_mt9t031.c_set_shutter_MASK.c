
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i2c_client*,int ,int const) ;

__attribute__((used)) static int FUNC_1(struct i2c_client *VAR_2, const u32 VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_1, VAR_3 >> 16);

 if (VAR_4 >= 0)
  VAR_4 = FUNC_0(VAR_2, VAR_0, VAR_3 & 0xffff);

 return VAR_4;
}
