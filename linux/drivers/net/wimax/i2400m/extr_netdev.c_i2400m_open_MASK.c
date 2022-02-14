
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct i2400m {int init_mutex; scalar_t__ updown; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,struct device*,char*,struct net_device*,struct i2400m*,int) ;
 int FUNC_1 (int,struct device*,char*,struct net_device*,struct i2400m*) ;
 struct device* FUNC_2 (struct i2400m*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct i2400m* FUNC_5 (struct net_device*) ;

__attribute__((used)) static
int FUNC_6(struct net_device *VAR_1)
{
 int VAR_2;
 struct i2400m *VAR_3 = FUNC_5(VAR_1);
 struct device *VAR_4 = FUNC_2(VAR_3);

 FUNC_1(3, VAR_4, "(net_dev %p [i2400m %p])\n", VAR_1, VAR_3);

 FUNC_3(&VAR_3->init_mutex);
 if (VAR_3->updown)
  VAR_2 = 0;
 else
  VAR_2 = -VAR_0;
 FUNC_4(&VAR_3->init_mutex);
 FUNC_0(3, VAR_4, "(net_dev %p [i2400m %p]) = %d\n",
  VAR_1, VAR_3, VAR_2);
 return VAR_2;
}
