
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt9p031 {int clk_div; int subdev; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct mt9p031*,int ,int ) ;
 int FUNC_2 (struct i2c_client*,int ,int ) ;
 struct i2c_client* FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct mt9p031 *VAR_5)
{
 struct i2c_client *VAR_6 = FUNC_3(&VAR_5->subdev);
 int VAR_7;


 VAR_7 = FUNC_2(VAR_6, VAR_2, VAR_4);
 if (VAR_7 < 0)
  return VAR_7;
 VAR_7 = FUNC_2(VAR_6, VAR_2, VAR_3);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 = FUNC_2(VAR_6, VAR_1,
       FUNC_0(VAR_5->clk_div));
 if (VAR_7 < 0)
  return VAR_7;

 return FUNC_1(VAR_5, VAR_0,
       0);
}
