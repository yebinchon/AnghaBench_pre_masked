
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct video_mux {struct v4l2_mbus_framefmt* format_mbus; } ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_framefmt {int dummy; } ;




 struct v4l2_mbus_framefmt* FUNC_0 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,unsigned int) ;
 struct video_mux* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static struct v4l2_mbus_framefmt *
FUNC_2(struct v4l2_subdev *VAR_0,
      struct v4l2_subdev_pad_config *VAR_1,
      unsigned int VAR_2, u32 VAR_3)
{
 struct video_mux *VAR_4 = FUNC_1(VAR_0);

 switch (VAR_3) {
 case 128:
  return FUNC_0(VAR_0, VAR_1, VAR_2);
 case 129:
  return &VAR_4->format_mbus[VAR_2];
 default:
  return ((void*)0);
 }
}
