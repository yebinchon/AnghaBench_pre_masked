
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct video_i2c_data {TYPE_3__* chip; } ;
struct TYPE_5__ {int height; int width; } ;
struct v4l2_frmsizeenum {scalar_t__ index; scalar_t__ pixel_format; TYPE_2__ discrete; int type; } ;
struct v4l2_frmsize_discrete {int height; int width; } ;
struct file {int dummy; } ;
struct TYPE_6__ {TYPE_1__* format; struct v4l2_frmsize_discrete* size; } ;
struct TYPE_4__ {scalar_t__ pixelformat; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct video_i2c_data* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_2, void *VAR_3,
           struct v4l2_frmsizeenum *VAR_4)
{
 const struct video_i2c_data *VAR_5 = FUNC_0(VAR_2);
 const struct v4l2_frmsize_discrete *VAR_6 = VAR_5->chip->size;


 if (VAR_4->index > 0)
  return -VAR_0;

 if (VAR_4->pixel_format != VAR_5->chip->format->pixelformat)
  return -VAR_0;

 VAR_4->type = VAR_1;
 VAR_4->discrete.width = VAR_6->width;
 VAR_4->discrete.height = VAR_6->height;

 return 0;
}
