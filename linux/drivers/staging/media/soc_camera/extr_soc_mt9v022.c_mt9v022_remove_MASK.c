
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soc_camera_subdev_desc {int (* free_bus ) (struct soc_camera_subdev_desc*) ;} ;
struct mt9v022 {int hdl; int subdev; int clk; } ;
struct i2c_client {int dummy; } ;


 struct soc_camera_subdev_desc* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct soc_camera_subdev_desc*) ;
 struct mt9v022* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_0)
{
 struct mt9v022 *VAR_1 = FUNC_2(VAR_0);
 struct soc_camera_subdev_desc *VAR_2 = FUNC_0(VAR_0);

 FUNC_3(VAR_1->clk);
 FUNC_5(&VAR_1->subdev);
 if (VAR_2->free_bus)
  VAR_2->free_bus(VAR_2);
 FUNC_4(&VAR_1->hdl);

 return 0;
}
