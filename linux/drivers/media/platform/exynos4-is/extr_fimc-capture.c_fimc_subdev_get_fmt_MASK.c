
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {int colorspace; int height; int width; int code; } ;
struct v4l2_subdev_format {scalar_t__ which; int pad; struct v4l2_mbus_framefmt format; } ;
struct v4l2_subdev {int dummy; } ;
struct fimc_frame {int height; int width; TYPE_1__* fmt; } ;
struct TYPE_4__ {struct v4l2_mbus_framefmt ci_fmt; struct v4l2_mbus_framefmt wb_fmt; struct fimc_ctx* ctx; } ;
struct fimc_dev {int lock; TYPE_2__ vid_cap; } ;
struct fimc_ctx {struct fimc_frame s_frame; } ;
struct TYPE_3__ {int mbus_code; } ;





 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct fimc_dev* FUNC_3 (struct v4l2_subdev*) ;
 struct v4l2_mbus_framefmt* FUNC_4 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,int) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_2,
          struct v4l2_subdev_pad_config *VAR_3,
          struct v4l2_subdev_format *VAR_4)
{
 struct fimc_dev *VAR_5 = FUNC_3(VAR_2);
 struct fimc_ctx *VAR_6 = VAR_5->vid_cap.ctx;
 struct fimc_frame *VAR_7 = &VAR_6->s_frame;
 struct v4l2_mbus_framefmt *VAR_8;

 if (VAR_4->which == VAR_1) {
  VAR_8 = FUNC_4(VAR_2, VAR_3, VAR_4->pad);
  VAR_4->format = *VAR_8;
  return 0;
 }

 VAR_8 = &VAR_4->format;
 FUNC_1(&VAR_5->lock);

 switch (VAR_4->pad) {
 case 128:
  if (!FUNC_0(VAR_7->fmt == ((void*)0)))
   VAR_8->code = VAR_7->fmt->mbus_code;

  VAR_8->width = VAR_7->width;
  VAR_8->height = VAR_7->height;
  break;
 case 129:
  *VAR_8 = VAR_5->vid_cap.wb_fmt;
  break;
 case 130:
 default:
  *VAR_8 = VAR_5->vid_cap.ci_fmt;
  break;
 }

 FUNC_2(&VAR_5->lock);
 VAR_8->colorspace = VAR_0;

 return 0;
}
