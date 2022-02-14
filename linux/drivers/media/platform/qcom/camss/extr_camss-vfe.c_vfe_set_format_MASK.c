
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfe_line {scalar_t__ id; } ;
struct TYPE_2__ {int height; int width; } ;
struct v4l2_subdev_selection {TYPE_1__ r; int target; scalar_t__ pad; int which; int member_0; } ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {int height; int width; } ;
struct v4l2_subdev_format {struct v4l2_mbus_framefmt format; int which; scalar_t__ pad; } ;
struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct v4l2_mbus_framefmt* FUNC_0 (struct vfe_line*,struct v4l2_subdev_pad_config*,scalar_t__,int ) ;
 struct vfe_line* FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,struct v4l2_subdev_selection*) ;
 int FUNC_3 (struct vfe_line*,struct v4l2_subdev_pad_config*,scalar_t__,struct v4l2_mbus_framefmt*,int ) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_5,
     struct v4l2_subdev_pad_config *VAR_6,
     struct v4l2_subdev_format *VAR_7)
{
 struct vfe_line *VAR_8 = FUNC_1(VAR_5);
 struct v4l2_mbus_framefmt *VAR_9;

 VAR_9 = FUNC_0(VAR_8, VAR_6, VAR_7->pad, VAR_7->which);
 if (VAR_9 == ((void*)0))
  return -VAR_0;

 FUNC_3(VAR_8, VAR_6, VAR_7->pad, &VAR_7->format, VAR_7->which);
 *VAR_9 = VAR_7->format;

 if (VAR_7->pad == VAR_1) {
  struct v4l2_subdev_selection VAR_10 = { 0 };
  int VAR_11;


  VAR_9 = FUNC_0(VAR_8, VAR_6, VAR_2,
       VAR_7->which);

  *VAR_9 = VAR_7->format;
  FUNC_3(VAR_8, VAR_6, VAR_2, VAR_9,
          VAR_7->which);

  if (VAR_8->id != VAR_4)
   return 0;


  VAR_10.which = VAR_7->which;
  VAR_10.pad = VAR_1;
  VAR_10.target = VAR_3;
  VAR_10.r.width = VAR_7->format.width;
  VAR_10.r.height = VAR_7->format.height;
  VAR_11 = FUNC_2(VAR_5, VAR_6, &VAR_10);
  if (VAR_11 < 0)
   return VAR_11;
 }

 return 0;
}
