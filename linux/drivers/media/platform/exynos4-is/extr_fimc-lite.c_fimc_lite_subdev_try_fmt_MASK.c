
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {int height; int width; int colorspace; int code; int field; } ;
struct v4l2_subdev_format {scalar_t__ pad; scalar_t__ which; struct v4l2_mbus_framefmt format; } ;
struct v4l2_rect {int height; int width; } ;
struct flite_frame {struct v4l2_rect rect; TYPE_1__* fmt; } ;
struct flite_drvdata {int max_height; int out_width_align; int max_width; } ;
struct fimc_lite {int subdev; struct flite_frame inp_frame; struct flite_drvdata* dd; } ;
struct fimc_fmt {int mbus_code; int colorspace; } ;
struct TYPE_2__ {int colorspace; int mbus_code; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 struct fimc_fmt* FUNC_2 (int *,int *,int ,int ) ;
 int FUNC_3 (int,int ,int *,char*,int ,int ,int ,int ) ;
 struct v4l2_rect* FUNC_4 (int *,struct v4l2_subdev_pad_config*,scalar_t__) ;
 struct v4l2_mbus_framefmt* FUNC_5 (int *,struct v4l2_subdev_pad_config*,scalar_t__) ;
 int FUNC_6 (int *,int,int ,scalar_t__,int *,int ,int ,int ,int ) ;

__attribute__((used)) static const struct fimc_fmt *FUNC_7(struct fimc_lite *VAR_4,
     struct v4l2_subdev_pad_config *VAR_5,
     struct v4l2_subdev_format *VAR_6)
{
 struct flite_drvdata *VAR_7 = VAR_4->dd;
 struct v4l2_mbus_framefmt *VAR_8 = &VAR_6->format;
 const struct fimc_fmt *VAR_9 = ((void*)0);

 if (VAR_6->pad == VAR_0) {
  FUNC_6(&VAR_8->width, 8, VAR_7->max_width,
    FUNC_1(VAR_7->out_width_align) - 1,
    &VAR_8->height, 0, VAR_7->max_height, 0, 0);

  VAR_9 = FUNC_2(((void*)0), &VAR_8->code, 0, 0);
  if (FUNC_0(!VAR_9))
   return ((void*)0);

  VAR_8->colorspace = VAR_9->colorspace;
  VAR_8->code = VAR_9->mbus_code;
 } else {
  struct flite_frame *VAR_10 = &VAR_4->inp_frame;
  struct v4l2_mbus_framefmt *VAR_11;
  struct v4l2_rect *VAR_12;

  if (VAR_6->which == VAR_2) {
   VAR_11 = FUNC_5(&VAR_4->subdev, VAR_5,
      VAR_0);

   VAR_8->code = VAR_11->code;
   VAR_8->colorspace = VAR_11->colorspace;

   VAR_12 = FUNC_4(&VAR_4->subdev, VAR_5,
      VAR_0);
  } else {
   VAR_8->code = VAR_10->fmt->mbus_code;
   VAR_8->colorspace = VAR_10->fmt->colorspace;
   VAR_12 = &VAR_10->rect;
  }


  VAR_8->width = VAR_12->width;
  VAR_8->height = VAR_12->height;
 }

 VAR_8->field = VAR_1;

 FUNC_3(1, VAR_3, &VAR_4->subdev, "code: %#x (%d), %dx%d\n",
   VAR_8->code, VAR_8->colorspace, VAR_8->width, VAR_8->height);

 return VAR_9;
}
