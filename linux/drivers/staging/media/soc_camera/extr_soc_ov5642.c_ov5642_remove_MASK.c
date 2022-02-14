
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soc_camera_subdev_desc {int (* free_bus ) (struct soc_camera_subdev_desc*) ;} ;
struct ov5642 {int clk; } ;
struct i2c_client {int dummy; } ;


 struct soc_camera_subdev_desc* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct soc_camera_subdev_desc*) ;
 struct ov5642* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_0)
{
 struct soc_camera_subdev_desc *VAR_1 = FUNC_0(VAR_0);
 struct ov5642 *VAR_2 = FUNC_2(VAR_0);

 FUNC_3(VAR_2->clk);
 if (VAR_1->free_bus)
  VAR_1->free_bus(VAR_1);

 return 0;
}
