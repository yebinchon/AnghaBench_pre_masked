
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_frame_interval {int interval; } ;
struct v4l2_mbus_framefmt {scalar_t__ code; int field; int colorspace; } ;
struct v4l2_subdev_format {scalar_t__ which; struct v4l2_mbus_framefmt format; int pad; } ;
struct v4l2_subdev {int dummy; } ;
struct ov965x_framesize {int dummy; } ;
struct ov965x {int apply_frame_fmt; int lock; int tslb_reg; struct v4l2_mbus_framefmt format; struct ov965x_framesize const* frame_size; scalar_t__ streaming; } ;
struct TYPE_3__ {scalar_t__ code; int tslb_reg; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct ov965x*,struct v4l2_subdev_frame_interval*) ;
 int FUNC_2 (struct v4l2_mbus_framefmt*,struct ov965x_framesize const**) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_1__* VAR_5 ;
 int FUNC_5 (struct ov965x*) ;
 struct ov965x* FUNC_6 (struct v4l2_subdev*) ;
 struct v4l2_mbus_framefmt* FUNC_7 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,int ) ;

__attribute__((used)) static int FUNC_8(struct v4l2_subdev *VAR_6,
     struct v4l2_subdev_pad_config *VAR_7,
     struct v4l2_subdev_format *VAR_8)
{
 unsigned int VAR_9 = FUNC_0(VAR_5);
 struct v4l2_mbus_framefmt *VAR_10 = &VAR_8->format;
 struct ov965x *VAR_11 = FUNC_6(VAR_6);
 const struct ov965x_framesize *VAR_12 = ((void*)0);
 int VAR_13 = 0;

 FUNC_2(VAR_10, &VAR_12);

 while (--VAR_9)
  if (VAR_5[VAR_9].code == VAR_10->code)
   break;

 VAR_10->colorspace = VAR_1;
 VAR_10->code = VAR_5[VAR_9].code;
 VAR_10->field = VAR_2;

 FUNC_3(&VAR_11->lock);

 if (VAR_8->which == VAR_4) {
  if (VAR_7) {
   VAR_10 = FUNC_7(VAR_6, VAR_7, VAR_8->pad);
   *VAR_10 = VAR_8->format;
  }
 } else {
  if (VAR_11->streaming) {
   VAR_13 = -VAR_0;
  } else {
   VAR_11->frame_size = VAR_12;
   VAR_11->format = VAR_8->format;
   VAR_11->tslb_reg = VAR_5[VAR_9].tslb_reg;
   VAR_11->apply_frame_fmt = 1;
  }
 }

 if (!VAR_13 && VAR_8->which == VAR_3) {
  struct v4l2_subdev_frame_interval VAR_14 = {
   .interval = { 0, 1 }
  };

  FUNC_1(VAR_11, &VAR_14);
 }
 FUNC_4(&VAR_11->lock);

 if (!VAR_13)
  FUNC_5(VAR_11);

 return VAR_13;
}
