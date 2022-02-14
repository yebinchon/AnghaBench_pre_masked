
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_frame_size_enum {size_t index; scalar_t__ code; int min_height; int max_height; int min_width; int max_width; } ;
struct v4l2_subdev {int dummy; } ;
struct imx319 {int mutex; } ;
struct TYPE_3__ {int height; int width; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct imx319*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_1__* VAR_1 ;
 struct imx319* FUNC_4 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_2,
      struct v4l2_subdev_pad_config *VAR_3,
      struct v4l2_subdev_frame_size_enum *VAR_4)
{
 struct imx319 *VAR_5 = FUNC_4(VAR_2);

 if (VAR_4->index >= FUNC_0(VAR_1))
  return -VAR_0;

 FUNC_2(&VAR_5->mutex);
 if (VAR_4->code != FUNC_1(VAR_5)) {
  FUNC_3(&VAR_5->mutex);
  return -VAR_0;
 }
 FUNC_3(&VAR_5->mutex);

 VAR_4->min_width = VAR_1[VAR_4->index].width;
 VAR_4->max_width = VAR_4->min_width;
 VAR_4->min_height = VAR_1[VAR_4->index].height;
 VAR_4->max_height = VAR_4->min_height;

 return 0;
}
