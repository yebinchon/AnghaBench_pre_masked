
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int subdev; } ;
struct xtpg_device {struct v4l2_mbus_framefmt* formats; TYPE_1__ xvip; } ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {int dummy; } ;




 struct v4l2_mbus_framefmt* FUNC_0 (int *,struct v4l2_subdev_pad_config*,unsigned int) ;

__attribute__((used)) static struct v4l2_mbus_framefmt *
FUNC_1(struct xtpg_device *VAR_0,
        struct v4l2_subdev_pad_config *VAR_1,
        unsigned int VAR_2, u32 VAR_3)
{
 switch (VAR_3) {
 case 128:
  return FUNC_0(&VAR_0->xvip.subdev, VAR_1, VAR_2);
 case 129:
  return &VAR_0->formats[VAR_2];
 default:
  return ((void*)0);
 }
}
