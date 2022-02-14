
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct et8ek8_sensor {int subdev; } ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_client*,int ,int,int) ;
 struct i2c_client* FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct et8ek8_sensor *VAR_1)
{
 struct i2c_client *VAR_2 = FUNC_1(&VAR_1->subdev);

 return FUNC_0(VAR_2, VAR_0, 0x1252, 0x30);
}
