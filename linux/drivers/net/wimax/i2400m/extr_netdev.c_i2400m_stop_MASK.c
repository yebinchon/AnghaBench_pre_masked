
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct i2400m {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (int,struct device*,char*,struct net_device*,struct i2400m*) ;
 int FUNC_1 (int,struct device*,char*,struct net_device*,struct i2400m*) ;
 struct device* FUNC_2 (struct i2400m*) ;
 int FUNC_3 (struct i2400m*) ;
 struct i2400m* FUNC_4 (struct net_device*) ;

__attribute__((used)) static
int FUNC_5(struct net_device *VAR_0)
{
 struct i2400m *VAR_1 = FUNC_4(VAR_0);
 struct device *VAR_2 = FUNC_2(VAR_1);

 FUNC_1(3, VAR_2, "(net_dev %p [i2400m %p])\n", VAR_0, VAR_1);
 FUNC_3(VAR_1);
 FUNC_0(3, VAR_2, "(net_dev %p [i2400m %p]) = 0\n", VAR_0, VAR_1);
 return 0;
}
