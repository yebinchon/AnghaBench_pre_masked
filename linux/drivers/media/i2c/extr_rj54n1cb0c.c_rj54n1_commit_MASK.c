
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct i2c_client*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_1)
{
 int VAR_2 = FUNC_1(VAR_1, VAR_0, 1);
 FUNC_0(10);
 if (!VAR_2)
  VAR_2 = FUNC_1(VAR_1, VAR_0, 0);
 return VAR_2;
}
