
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt9m032 {int subdev; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct i2c_client*,int ,int) ;
 struct i2c_client* FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct mt9m032 *VAR_4, bool VAR_5, bool VAR_6)
{
 struct i2c_client *VAR_7 = FUNC_1(&VAR_4->subdev);
 int VAR_8 = (VAR_5 << VAR_3)
      | (VAR_6 << VAR_1)
      | VAR_2
      | 0x0007;

 return FUNC_0(VAR_7, VAR_0, VAR_8);
}
