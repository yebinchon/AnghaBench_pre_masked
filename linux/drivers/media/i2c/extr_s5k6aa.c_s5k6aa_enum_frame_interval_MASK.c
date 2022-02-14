
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_frame_interval_enum {size_t index; scalar_t__ width; scalar_t__ height; int interval; } ;
struct v4l2_subdev {int dummy; } ;
struct TYPE_2__ {scalar_t__ width; scalar_t__ height; } ;
struct s5k6aa_interval {int interval; TYPE_1__ size; } ;
struct s5k6aa {int lock; } ;


 size_t FUNC_0 (struct s5k6aa_interval*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct s5k6aa_interval* VAR_5 ;
 struct s5k6aa* FUNC_3 (struct v4l2_subdev*) ;
 int FUNC_4 (scalar_t__*,int ,int ,int,scalar_t__*,int ,int ,int,int ) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_6,
         struct v4l2_subdev_pad_config *VAR_7,
         struct v4l2_subdev_frame_interval_enum *VAR_8)
{
 struct s5k6aa *VAR_9 = FUNC_3(VAR_6);
 const struct s5k6aa_interval *VAR_10;
 int VAR_11 = 0;

 if (VAR_8->index >= FUNC_0(VAR_5))
  return -VAR_0;

 FUNC_4(&VAR_8->width, VAR_4,
         VAR_3, 1,
         &VAR_8->height, VAR_2,
         VAR_1, 1, 0);

 FUNC_1(&VAR_9->lock);
 VAR_10 = &VAR_5[VAR_8->index];
 if (VAR_8->width > VAR_10->size.width || VAR_8->height > VAR_10->size.height)
  VAR_11 = -VAR_0;
 else
  VAR_8->interval = VAR_10->interval;
 FUNC_2(&VAR_9->lock);

 return VAR_11;
}
