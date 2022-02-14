
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int width; int height; int code; } ;
struct v4l2_subdev_format {TYPE_4__ format; int which; } ;
struct TYPE_6__ {int width; int height; } ;
struct TYPE_7__ {TYPE_2__ pix; } ;
struct v4l2_format {TYPE_3__ fmt; } ;
struct ivtv_open_id {struct ivtv* itv; } ;
struct TYPE_5__ {int width; int height; int video_encoding; } ;
struct ivtv {int sd_video; TYPE_1__ cxhdl; int capturing; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 struct ivtv_open_id* FUNC_1 (void*) ;
 int FUNC_2 (struct file*,void*,struct v4l2_format*) ;
 int FUNC_3 (struct file*,void*,struct v4l2_format*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ,int *,struct v4l2_subdev_format*) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_6, void *VAR_7, struct v4l2_format *VAR_8)
{
 struct ivtv_open_id *VAR_9 = FUNC_1(VAR_7);
 struct ivtv *VAR_10 = VAR_9->itv;
 struct v4l2_subdev_format VAR_11 = {
  .which = VAR_3,
 };
 int VAR_12 = FUNC_3(VAR_6, VAR_7, VAR_8);
 int VAR_13 = VAR_8->fmt.pix.width;
 int VAR_14 = VAR_8->fmt.pix.height;

 if (VAR_12)
  return VAR_12;

 if (VAR_10->cxhdl.width == VAR_13 && VAR_10->cxhdl.height == VAR_14)
  return 0;

 if (FUNC_0(&VAR_10->capturing) > 0)
  return -VAR_0;

 VAR_10->cxhdl.width = VAR_13;
 VAR_10->cxhdl.height = VAR_14;
 if (FUNC_4(VAR_10->cxhdl.video_encoding) == VAR_2)
  VAR_8->fmt.pix.width /= 2;
 VAR_11.format.width = VAR_8->fmt.pix.width;
 VAR_11.format.height = VAR_14;
 VAR_11.format.code = VAR_1;
 FUNC_5(VAR_10->sd_video, VAR_4, VAR_5, ((void*)0), &VAR_11);
 return FUNC_2(VAR_6, VAR_7, VAR_8);
}
