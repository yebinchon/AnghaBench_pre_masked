
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_i2c_data {TYPE_1__* chip; } ;
struct v4l2_frmsize_discrete {scalar_t__ width; scalar_t__ height; } ;
struct v4l2_frmivalenum {size_t index; scalar_t__ width; scalar_t__ height; int discrete; int type; } ;
struct file {int dummy; } ;
struct TYPE_2__ {size_t num_frame_intervals; int * frame_intervals; struct v4l2_frmsize_discrete* size; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct video_i2c_data* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_2, void *VAR_3,
        struct v4l2_frmivalenum *VAR_4)
{
 const struct video_i2c_data *VAR_5 = FUNC_0(VAR_2);
 const struct v4l2_frmsize_discrete *VAR_6 = VAR_5->chip->size;

 if (VAR_4->index >= VAR_5->chip->num_frame_intervals)
  return -VAR_0;

 if (VAR_4->width != VAR_6->width || VAR_4->height != VAR_6->height)
  return -VAR_0;

 VAR_4->type = VAR_1;
 VAR_4->discrete = VAR_5->chip->frame_intervals[VAR_4->index];

 return 0;
}
