
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int height; int width; } ;
struct via_camera {TYPE_1__ sensor_format; int mbus_code; } ;
struct v4l2_subdev_frame_interval_enum {int interval; int which; int height; int width; int code; int index; } ;
struct v4l2_frmivalenum {scalar_t__ pixel_format; scalar_t__ width; scalar_t__ height; int discrete; int type; int index; } ;
struct file {int dummy; } ;
struct TYPE_4__ {scalar_t__ pixelformat; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct via_camera*,int ,int ,int *,struct v4l2_subdev_frame_interval_enum*) ;
 TYPE_2__* VAR_10 ;
 struct via_camera* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_11, void *VAR_12,
  struct v4l2_frmivalenum *VAR_13)
{
 struct via_camera *VAR_14 = FUNC_1(VAR_11);
 struct v4l2_subdev_frame_interval_enum VAR_15 = {
  .index = VAR_13->index,
  .code = VAR_14->mbus_code,
  .width = VAR_14->sensor_format.width,
  .height = VAR_14->sensor_format.height,
  .which = VAR_5,
 };
 unsigned int VAR_16;
 int VAR_17;

 for (VAR_16 = 0; VAR_16 < VAR_1; VAR_16++)
  if (VAR_13->pixel_format == VAR_10[VAR_16].pixelformat)
   break;
 if (VAR_16 >= VAR_1)
  return -VAR_0;
 if (VAR_13->width < VAR_3 || VAR_13->width > VAR_7 ||
     VAR_13->height < VAR_2 || VAR_13->height > VAR_6)
  return -VAR_0;
 VAR_17 = FUNC_0(VAR_14, VAR_9, VAR_8, ((void*)0), &VAR_15);
 if (VAR_17)
  return VAR_17;
 VAR_13->type = VAR_4;
 VAR_13->discrete = VAR_15.interval;
 return 0;
}
