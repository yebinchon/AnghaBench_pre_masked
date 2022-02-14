
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_frame_interval_enum {scalar_t__ pad; size_t index; scalar_t__ width; scalar_t__ height; int interval; } ;
struct v4l2_subdev {int dummy; } ;
struct TYPE_2__ {scalar_t__ width; scalar_t__ height; } ;
struct s5c73m3_interval {int interval; TYPE_1__ size; } ;
struct s5c73m3 {int lock; } ;


 size_t FUNC_0 (struct s5c73m3_interval*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct s5c73m3* FUNC_3 (struct v4l2_subdev*) ;
 struct s5c73m3_interval* VAR_2 ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_3,
         struct v4l2_subdev_pad_config *VAR_4,
         struct v4l2_subdev_frame_interval_enum *VAR_5)
{
 struct s5c73m3 *VAR_6 = FUNC_3(VAR_3);
 const struct s5c73m3_interval *VAR_7;
 int VAR_8 = 0;

 if (VAR_5->pad != VAR_1)
  return -VAR_0;
 if (VAR_5->index >= FUNC_0(VAR_2))
  return -VAR_0;

 FUNC_1(&VAR_6->lock);
 VAR_7 = &VAR_2[VAR_5->index];
 if (VAR_5->width > VAR_7->size.width || VAR_5->height > VAR_7->size.height)
  VAR_8 = -VAR_0;
 else
  VAR_5->interval = VAR_7->interval;
 FUNC_2(&VAR_6->lock);

 return VAR_8;
}
