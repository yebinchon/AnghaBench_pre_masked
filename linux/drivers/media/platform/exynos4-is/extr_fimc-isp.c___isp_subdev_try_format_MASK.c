
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {int code; int colorspace; scalar_t__ height; scalar_t__ width; } ;
struct v4l2_subdev_format {scalar_t__ pad; scalar_t__ which; struct v4l2_mbus_framefmt format; } ;
struct fimc_isp {struct v4l2_mbus_framefmt sink_fmt; int subdev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 struct v4l2_mbus_framefmt* FUNC_0 (int *,struct v4l2_subdev_pad_config*,scalar_t__) ;
 int FUNC_1 (scalar_t__*,int ,int ,int ,scalar_t__*,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct fimc_isp *VAR_13,
        struct v4l2_subdev_pad_config *VAR_14,
        struct v4l2_subdev_format *VAR_15)
{
 struct v4l2_mbus_framefmt *VAR_16 = &VAR_15->format;
 struct v4l2_mbus_framefmt *VAR_17;

 VAR_16->colorspace = VAR_11;

 if (VAR_15->pad == VAR_2) {
  FUNC_1(&VAR_16->width, VAR_7,
    VAR_6, 0,
    &VAR_16->height, VAR_5,
    VAR_4, 0, 0);
  VAR_16->code = VAR_8;
 } else {
  if (VAR_15->which == VAR_12)
   VAR_17 = FUNC_0(&VAR_13->subdev, VAR_14,
      VAR_2);
  else
   VAR_17 = &VAR_13->sink_fmt;


  VAR_16->width = VAR_17->width - VAR_1;
  VAR_16->height = VAR_17->height - VAR_0;

  if (VAR_15->pad == VAR_3) {
   VAR_16->code = VAR_9;
   VAR_16->colorspace = VAR_10;
  } else {
   VAR_16->code = VAR_17->code;
  }
 }
}
