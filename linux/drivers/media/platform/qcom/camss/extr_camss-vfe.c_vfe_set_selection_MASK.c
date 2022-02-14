
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfe_line {scalar_t__ id; } ;
struct v4l2_rect {int height; int width; } ;
struct v4l2_subdev_selection {scalar_t__ target; scalar_t__ pad; int which; struct v4l2_rect r; int member_0; } ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct TYPE_2__ {int height; int width; } ;
struct v4l2_subdev_format {TYPE_1__ format; scalar_t__ pad; int which; int member_0; } ;
struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 struct v4l2_rect* FUNC_0 (struct vfe_line*,struct v4l2_subdev_pad_config*,int ) ;
 struct v4l2_rect* FUNC_1 (struct vfe_line*,struct v4l2_subdev_pad_config*,int ) ;
 struct vfe_line* FUNC_2 (struct v4l2_subdev*) ;
 int FUNC_3 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,struct v4l2_subdev_format*) ;
 int FUNC_4 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,struct v4l2_subdev_format*) ;
 int FUNC_5 (struct vfe_line*,struct v4l2_subdev_pad_config*,struct v4l2_rect*,int ) ;
 int FUNC_6 (struct vfe_line*,struct v4l2_subdev_pad_config*,struct v4l2_rect*,int ) ;

__attribute__((used)) static int FUNC_7(struct v4l2_subdev *VAR_6,
        struct v4l2_subdev_pad_config *VAR_7,
        struct v4l2_subdev_selection *VAR_8)
{
 struct vfe_line *VAR_9 = FUNC_2(VAR_6);
 struct v4l2_rect *VAR_10;
 int VAR_11;

 if (VAR_9->id != VAR_5)
  return -VAR_0;

 if (VAR_8->target == VAR_3 &&
  VAR_8->pad == VAR_1) {
  struct v4l2_subdev_selection VAR_12 = { 0 };

  VAR_10 = FUNC_0(VAR_9, VAR_7, VAR_8->which);
  if (VAR_10 == ((void*)0))
   return -VAR_0;

  FUNC_5(VAR_9, VAR_7, &VAR_8->r, VAR_8->which);
  *VAR_10 = VAR_8->r;


  VAR_12.which = VAR_8->which;
  VAR_12.pad = VAR_2;
  VAR_12.target = VAR_4;
  VAR_12.r = *VAR_10;
  VAR_11 = FUNC_7(VAR_6, VAR_7, &VAR_12);
 } else if (VAR_8->target == VAR_4 &&
  VAR_8->pad == VAR_2) {
  struct v4l2_subdev_format VAR_13 = { 0 };

  VAR_10 = FUNC_1(VAR_9, VAR_7, VAR_8->which);
  if (VAR_10 == ((void*)0))
   return -VAR_0;

  FUNC_6(VAR_9, VAR_7, &VAR_8->r, VAR_8->which);
  *VAR_10 = VAR_8->r;


  VAR_13.which = VAR_8->which;
  VAR_13.pad = VAR_2;
  VAR_11 = FUNC_3(VAR_6, VAR_7, &VAR_13);
  if (VAR_11 < 0)
   return VAR_11;

  VAR_13.format.width = VAR_10->width;
  VAR_13.format.height = VAR_10->height;
  VAR_11 = FUNC_4(VAR_6, VAR_7, &VAR_13);
 } else {
  VAR_11 = -VAR_0;
 }

 return VAR_11;
}
