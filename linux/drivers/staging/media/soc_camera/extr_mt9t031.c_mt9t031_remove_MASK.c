
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt9t031 {int hdl; int subdev; int clk; } ;
struct i2c_client {int dummy; } ;


 struct mt9t031* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_0)
{
 struct mt9t031 *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_1->clk);
 FUNC_3(&VAR_1->subdev);
 FUNC_2(&VAR_1->hdl);

 return 0;
}
