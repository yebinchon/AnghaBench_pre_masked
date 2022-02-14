
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ width; scalar_t__ height; scalar_t__ code; } ;
struct v4l2_subdev_format {TYPE_1__ format; } ;
struct v4l2_subdev {int dummy; } ;
struct media_link {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct v4l2_subdev *VAR_1,
     struct media_link *VAR_2,
     struct v4l2_subdev_format *VAR_3,
     struct v4l2_subdev_format *VAR_4)
{

 if (VAR_3->format.width != VAR_4->format.width ||
     VAR_3->format.height != VAR_4->format.height)
  return -VAR_0;

 if (VAR_3->format.code != VAR_4->format.code)
  return -VAR_0;

 return 0;
}
