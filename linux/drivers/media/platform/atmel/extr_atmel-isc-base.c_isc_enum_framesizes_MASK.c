
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct v4l2_subdev_frame_size_enum {int max_height; int max_width; int code; int which; int index; } ;
struct TYPE_12__ {int height; int width; } ;
struct v4l2_frmsizeenum {scalar_t__ pixel_format; TYPE_5__ discrete; int type; int index; } ;
struct TYPE_11__ {TYPE_3__* sd_format; } ;
struct isc_device {int num_user_formats; TYPE_4__ config; TYPE_2__* current_subdev; TYPE_1__** user_formats; } ;
struct file {int dummy; } ;
struct TYPE_13__ {scalar_t__ fourcc; } ;
struct TYPE_10__ {int mbus_code; } ;
struct TYPE_9__ {int sd; } ;
struct TYPE_8__ {scalar_t__ fourcc; } ;


 int FUNC_0 (TYPE_6__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_6__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,int ,int *,struct v4l2_subdev_frame_size_enum*) ;
 struct isc_device* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_6, void *VAR_7,
          struct v4l2_frmsizeenum *VAR_8)
{
 struct isc_device *VAR_9 = FUNC_2(VAR_6);
 struct v4l2_subdev_frame_size_enum VAR_10 = {
  .index = VAR_8->index,
  .which = VAR_2,
 };
 int VAR_11 = -VAR_0;
 int VAR_12;

 for (VAR_12 = 0; VAR_12 < VAR_9->num_user_formats; VAR_12++)
  if (VAR_9->user_formats[VAR_12]->fourcc == VAR_8->pixel_format)
   VAR_11 = 0;

 for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_3); VAR_12++)
  if (VAR_3[VAR_12].fourcc == VAR_8->pixel_format)
   VAR_11 = 0;

 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_1(VAR_9->current_subdev->sd, VAR_5, VAR_4,
          ((void*)0), &VAR_10);
 if (VAR_11)
  return VAR_11;

 VAR_10.code = VAR_9->config.sd_format->mbus_code;

 VAR_8->type = VAR_1;
 VAR_8->discrete.width = VAR_10.max_width;
 VAR_8->discrete.height = VAR_10.max_height;

 return 0;
}
