
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucsi_ccg {int ucsi; } ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;


 struct ucsi_ccg* FUNC_0 (struct i2c_client*) ;
 struct i2c_client* FUNC_1 (struct device*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0)
{
 struct i2c_client *VAR_1 = FUNC_1(VAR_0);
 struct ucsi_ccg *VAR_2 = FUNC_0(VAR_1);

 return FUNC_2(VAR_2->ucsi);
}
