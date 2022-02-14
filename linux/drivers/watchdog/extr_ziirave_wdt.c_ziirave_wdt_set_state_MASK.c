
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int parent; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_client*,int ,int) ;
 struct i2c_client* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct watchdog_device *VAR_1, int VAR_2)
{
 struct i2c_client *VAR_3 = FUNC_1(VAR_1->parent);

 return FUNC_0(VAR_3, VAR_0, VAR_2);
}
