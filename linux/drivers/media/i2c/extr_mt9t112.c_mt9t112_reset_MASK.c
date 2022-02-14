
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;


 int FUNC_0 (int,struct i2c_client const*,int,int,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(const struct i2c_client *VAR_0)
{
 int VAR_1;

 FUNC_0(VAR_1, VAR_0, 0x001a, 0x0001, 0x0001);
 FUNC_1(1000, 5000);
 FUNC_0(VAR_1, VAR_0, 0x001a, 0x0001, 0x0000);

 return VAR_1;
}
