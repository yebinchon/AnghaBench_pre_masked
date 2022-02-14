
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_rect {int width; int height; int left; int top; } ;
struct v4l2_subdev_selection {scalar_t__ which; scalar_t__ target; struct v4l2_rect r; } ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev {int dummy; } ;
struct mt9v022 {scalar_t__ fmts; int y_skip_top; struct v4l2_rect rect; int vblank; int hblank; int chip_version; TYPE_1__* reg; } ;
struct i2c_client {int dev; } ;
struct TYPE_2__ {int max_total_shutter_width; } ;


 void* FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_1 (int *,char*,int,int) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_14 ;
 int FUNC_3 (struct i2c_client*,int ) ;
 int FUNC_4 (struct i2c_client*,int ,int) ;
 int FUNC_5 (int*,int*,int ,int ,int ) ;
 struct mt9v022* FUNC_6 (struct i2c_client*) ;
 int FUNC_7 (int ,int) ;
 struct i2c_client* FUNC_8 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_9(struct v4l2_subdev *VAR_15,
  struct v4l2_subdev_pad_config *VAR_16,
  struct v4l2_subdev_selection *VAR_17)
{
 struct i2c_client *VAR_18 = FUNC_8(VAR_15);
 struct mt9v022 *VAR_19 = FUNC_6(VAR_18);
 struct v4l2_rect VAR_20 = VAR_17->r;
 int VAR_21, VAR_22;
 int VAR_23;

 if (VAR_17->which != VAR_13 ||
     VAR_17->target != VAR_12)
  return -VAR_0;


 if (VAR_19->fmts == VAR_14) {
  VAR_20.width = FUNC_0(VAR_20.width, 2);
  VAR_20.height = FUNC_0(VAR_20.height, 2);

 }

 FUNC_5(&VAR_20.left, &VAR_20.width,
       VAR_2, VAR_7, VAR_5);

 FUNC_5(&VAR_20.top, &VAR_20.height,
       VAR_8, VAR_6, VAR_4);


 VAR_23 = FUNC_3(VAR_18, VAR_1);
 if (VAR_23 >= 0) {
  if (VAR_23 & 1)
   VAR_23 = FUNC_4(VAR_18, VAR_19->reg->max_total_shutter_width,
     VAR_20.height + VAR_19->y_skip_top + 43);
 }

 if (!VAR_23)
  VAR_23 = FUNC_4(VAR_18, VAR_3, VAR_20.left);
 if (!VAR_23)
  VAR_23 = FUNC_4(VAR_18, VAR_9, VAR_20.top);




 if (FUNC_2(VAR_19->chip_version)) {
  VAR_21 = 690;
  VAR_22 = 61;
 } else {
  VAR_21 = 660;
  VAR_22 = 43;
 }
 if (!VAR_23)
  VAR_23 = FUNC_7(VAR_19->hblank,
    VAR_20.width > VAR_21 - VAR_22 ?
    VAR_22 : VAR_21 - VAR_20.width);
 if (!VAR_23)
  VAR_23 = FUNC_7(VAR_19->vblank, 45);
 if (!VAR_23)
  VAR_23 = FUNC_4(VAR_18, VAR_11, VAR_20.width);
 if (!VAR_23)
  VAR_23 = FUNC_4(VAR_18, VAR_10,
    VAR_20.height + VAR_19->y_skip_top);

 if (VAR_23 < 0)
  return VAR_23;

 FUNC_1(&VAR_18->dev, "Frame %dx%d pixel\n", VAR_20.width, VAR_20.height);

 VAR_19->rect = VAR_20;

 return 0;
}
