
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_rect {int dummy; } ;
struct mt9p031 {struct v4l2_rect crop; int subdev; } ;




 struct v4l2_rect* FUNC_0 (int *,struct v4l2_subdev_pad_config*,unsigned int) ;

__attribute__((used)) static struct v4l2_rect *
FUNC_1(struct mt9p031 *VAR_0, struct v4l2_subdev_pad_config *VAR_1,
       unsigned int VAR_2, u32 VAR_3)
{
 switch (VAR_3) {
 case 128:
  return FUNC_0(&VAR_0->subdev, VAR_1, VAR_2);
 case 129:
  return &VAR_0->crop;
 default:
  return ((void*)0);
 }
}
