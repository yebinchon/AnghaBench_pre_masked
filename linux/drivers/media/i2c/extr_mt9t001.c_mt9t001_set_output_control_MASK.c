
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mt9t001 {int output_control; int subdev; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_client*,int ,int) ;
 struct i2c_client* FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct mt9t001 *VAR_1, u16 VAR_2,
          u16 VAR_3)
{
 struct i2c_client *VAR_4 = FUNC_1(&VAR_1->subdev);
 u16 VAR_5 = (VAR_1->output_control & ~VAR_2) | VAR_3;
 int VAR_6;

 if (VAR_5 == VAR_1->output_control)
  return 0;

 VAR_6 = FUNC_0(VAR_4, VAR_0, VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_1->output_control = VAR_5;
 return 0;
}
