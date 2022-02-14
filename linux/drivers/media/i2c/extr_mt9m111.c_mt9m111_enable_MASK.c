
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt9m111 {int subdev; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 struct i2c_client* FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct mt9m111 *VAR_2)
{
 struct i2c_client *VAR_3 = FUNC_1(&VAR_2->subdev);
 return FUNC_0(VAR_1, VAR_0);
}
