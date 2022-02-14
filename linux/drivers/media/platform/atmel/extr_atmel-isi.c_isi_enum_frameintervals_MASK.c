
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev_frame_interval_enum {int interval; int code; int which; int height; int width; int index; } ;
struct v4l2_frmivalenum {int discrete; int type; int pixel_format; int height; int width; int index; } ;
struct isi_format {int mbus_code; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int subdev; } ;
struct atmel_isi {TYPE_1__ entity; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct isi_format* FUNC_0 (struct atmel_isi*,int ) ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ,int *,struct v4l2_subdev_frame_interval_enum*) ;
 struct atmel_isi* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_5, void *VAR_6,
        struct v4l2_frmivalenum *VAR_7)
{
 struct atmel_isi *VAR_8 = FUNC_2(VAR_5);
 const struct isi_format *VAR_9;
 struct v4l2_subdev_frame_interval_enum VAR_10 = {
  .index = VAR_7->index,
  .width = VAR_7->width,
  .height = VAR_7->height,
  .which = VAR_2,
 };
 int VAR_11;

 VAR_9 = FUNC_0(VAR_8, VAR_7->pixel_format);
 if (!VAR_9)
  return -VAR_0;

 VAR_10.code = VAR_9->mbus_code;

 VAR_11 = FUNC_1(VAR_8->entity.subdev, VAR_4,
          VAR_3, ((void*)0), &VAR_10);
 if (VAR_11)
  return VAR_11;

 VAR_7->type = VAR_1;
 VAR_7->discrete = VAR_10.interval;

 return 0;
}
