
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {int height; int width; int code; int colorspace; } ;
struct v4l2_subdev_format {scalar_t__ which; scalar_t__ pad; struct v4l2_mbus_framefmt format; } ;
struct v4l2_subdev {int dummy; } ;
struct TYPE_4__ {int height; int width; } ;
struct flite_frame {TYPE_2__ rect; int f_height; int f_width; TYPE_1__* fmt; } ;
struct fimc_lite {int lock; struct flite_frame inp_frame; } ;
struct TYPE_3__ {int mbus_code; int colorspace; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct v4l2_mbus_framefmt* FUNC_0 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct fimc_lite* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_2,
        struct v4l2_subdev_pad_config *VAR_3,
        struct v4l2_subdev_format *VAR_4)
{
 struct fimc_lite *VAR_5 = FUNC_3(VAR_2);
 struct v4l2_mbus_framefmt *VAR_6 = &VAR_4->format;
 struct flite_frame *VAR_7 = &VAR_5->inp_frame;

 if (VAR_4->which == VAR_1) {
  VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_4->pad);
  VAR_4->format = *VAR_6;
  return 0;
 }

 FUNC_1(&VAR_5->lock);
 VAR_6->colorspace = VAR_7->fmt->colorspace;
 VAR_6->code = VAR_7->fmt->mbus_code;

 if (VAR_4->pad == VAR_0) {

  VAR_6->width = VAR_7->f_width;
  VAR_6->height = VAR_7->f_height;
 } else {

  VAR_6->width = VAR_7->rect.width;
  VAR_6->height = VAR_7->rect.height;
 }
 FUNC_2(&VAR_5->lock);
 return 0;
}
