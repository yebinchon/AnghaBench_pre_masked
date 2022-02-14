
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vimc_pix_map {int code; } ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_mbus_code_enum {int code; int index; } ;
struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;
 struct vimc_pix_map* FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_1,
       struct v4l2_subdev_pad_config *VAR_2,
       struct v4l2_subdev_mbus_code_enum *VAR_3)
{
 const struct vimc_pix_map *VAR_4 = FUNC_0(VAR_3->index);

 if (!VAR_4)
  return -VAR_0;

 VAR_3->code = VAR_4->code;

 return 0;
}
