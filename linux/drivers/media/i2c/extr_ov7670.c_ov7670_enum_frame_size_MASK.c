
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_frame_size_enum {int index; scalar_t__ min_width; scalar_t__ max_width; scalar_t__ min_height; scalar_t__ max_height; scalar_t__ pad; } ;
struct v4l2_subdev {int dummy; } ;
struct ov7670_win_size {scalar_t__ width; scalar_t__ height; } ;
struct ov7670_info {scalar_t__ min_width; scalar_t__ min_height; TYPE_1__* devtype; } ;
typedef int __u32 ;
struct TYPE_2__ {unsigned int n_win_sizes; struct ov7670_win_size* win_sizes; } ;


 int VAR_0 ;
 struct ov7670_info* FUNC_0 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_1,
      struct v4l2_subdev_pad_config *VAR_2,
      struct v4l2_subdev_frame_size_enum *VAR_3)
{
 struct ov7670_info *VAR_4 = FUNC_0(VAR_1);
 int VAR_5;
 int VAR_6 = -1;
 __u32 VAR_7 = VAR_3->index;
 unsigned int VAR_8 = VAR_4->devtype->n_win_sizes;

 if (VAR_3->pad)
  return -VAR_0;





 for (VAR_5 = 0; VAR_5 < VAR_8; VAR_5++) {
  struct ov7670_win_size *VAR_9 = &VAR_4->devtype->win_sizes[VAR_5];
  if (VAR_4->min_width && VAR_9->width < VAR_4->min_width)
   continue;
  if (VAR_4->min_height && VAR_9->height < VAR_4->min_height)
   continue;
  if (VAR_7 == ++VAR_6) {
   VAR_3->min_width = VAR_3->max_width = VAR_9->width;
   VAR_3->min_height = VAR_3->max_height = VAR_9->height;
   return 0;
  }
 }

 return -VAR_0;
}
