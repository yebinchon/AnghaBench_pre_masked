
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {scalar_t__ code; int field; int colorspace; } ;
struct v4l2_subdev_format {scalar_t__ which; struct v4l2_mbus_framefmt format; int pad; } ;
struct v4l2_subdev {int dummy; } ;
struct ov2659_framesize {int dummy; } ;
struct ov2659 {int lock; int link_frequency; TYPE_1__* pdata; struct v4l2_mbus_framefmt format; int format_ctrl_regs; struct ov2659_framesize const* frame_size; scalar_t__ streaming; } ;
struct i2c_client {int dev; } ;
typedef int s64 ;
struct TYPE_5__ {scalar_t__ code; int format_ctrl_regs; } ;
struct TYPE_4__ {int link_frequency; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct v4l2_mbus_framefmt*,struct ov2659_framesize const**) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 TYPE_2__* VAR_5 ;
 struct ov2659* FUNC_6 (struct v4l2_subdev*) ;
 int FUNC_7 (int ,int) ;
 struct i2c_client* FUNC_8 (struct v4l2_subdev*) ;
 struct v4l2_mbus_framefmt* FUNC_9 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,int ) ;

__attribute__((used)) static int FUNC_10(struct v4l2_subdev *VAR_6,
     struct v4l2_subdev_pad_config *VAR_7,
     struct v4l2_subdev_format *VAR_8)
{
 struct i2c_client *VAR_9 = FUNC_8(VAR_6);
 int VAR_10 = FUNC_0(VAR_5);
 struct v4l2_mbus_framefmt *VAR_11 = &VAR_8->format;
 const struct ov2659_framesize *VAR_12 = ((void*)0);
 struct ov2659 *VAR_13 = FUNC_6(VAR_6);
 int VAR_14 = 0;

 FUNC_2(&VAR_9->dev, "ov2659_set_fmt\n");

 FUNC_1(VAR_11, &VAR_12);

 while (--VAR_10 >= 0)
  if (VAR_5[VAR_10].code == VAR_11->code)
   break;

 if (VAR_10 < 0) {
  VAR_10 = 0;
  VAR_11->code = VAR_5[VAR_10].code;
 }

 VAR_11->colorspace = VAR_2;
 VAR_11->field = VAR_3;

 FUNC_4(&VAR_13->lock);

 if (VAR_8->which == VAR_4) {




 } else {
  s64 VAR_15;

  if (VAR_13->streaming) {
   FUNC_5(&VAR_13->lock);
   return -VAR_0;
  }

  VAR_13->frame_size = VAR_12;
  VAR_13->format = VAR_8->format;
  VAR_13->format_ctrl_regs =
   VAR_5[VAR_10].format_ctrl_regs;

  if (VAR_13->format.code != VAR_1)
   VAR_15 = VAR_13->pdata->link_frequency / 2;
  else
   VAR_15 = VAR_13->pdata->link_frequency;

  VAR_14 = FUNC_7(VAR_13->link_frequency, VAR_15);
  if (VAR_14 < 0)
   FUNC_3(&VAR_9->dev,
     "failed to set link_frequency rate (%d)\n",
     VAR_14);
 }

 FUNC_5(&VAR_13->lock);
 return VAR_14;
}
