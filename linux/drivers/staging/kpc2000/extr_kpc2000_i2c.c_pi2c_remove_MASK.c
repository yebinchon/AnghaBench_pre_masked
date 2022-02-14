
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct i2c_device {int adapter; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct platform_device*) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_0)
{
 struct i2c_device *VAR_1;

 VAR_1 = (struct i2c_device *)FUNC_1(VAR_0);

 FUNC_0(&VAR_1->adapter);
 return 0;
}
