
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev_pad_config {int dummy; } ;
struct TYPE_3__ {int height; int width; } ;
struct v4l2_subdev_format {TYPE_1__ format; int which; } ;
struct v4l2_subdev {int dummy; } ;
struct TYPE_4__ {int height; int width; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_0 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,struct v4l2_subdev_format*) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_3,
      struct v4l2_subdev_pad_config *VAR_4)
{
 struct v4l2_subdev_format VAR_5 = { };

 VAR_5.which = VAR_4 ? VAR_1 : VAR_0;
 VAR_5.format.width = VAR_2[0].width;
 VAR_5.format.height = VAR_2[0].height;

 FUNC_0(VAR_3, VAR_4, &VAR_5);

 return 0;
}
