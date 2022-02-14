
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfe_line {int dummy; } ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {int dummy; } ;
struct v4l2_subdev_format {struct v4l2_mbus_framefmt format; int which; int pad; } ;
struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;
 struct v4l2_mbus_framefmt* FUNC_0 (struct vfe_line*,struct v4l2_subdev_pad_config*,int ,int ) ;
 struct vfe_line* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_1,
     struct v4l2_subdev_pad_config *VAR_2,
     struct v4l2_subdev_format *VAR_3)
{
 struct vfe_line *VAR_4 = FUNC_1(VAR_1);
 struct v4l2_mbus_framefmt *VAR_5;

 VAR_5 = FUNC_0(VAR_4, VAR_2, VAR_3->pad, VAR_3->which);
 if (VAR_5 == ((void*)0))
  return -VAR_0;

 VAR_3->format = *VAR_5;

 return 0;
}
