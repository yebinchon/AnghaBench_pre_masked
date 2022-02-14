
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_pix_format {int height; int bytesperline; int sizeimage; int pixelformat; int width; int field; int colorspace; } ;
struct TYPE_4__ {struct v4l2_pix_format pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct ivtv_open_id {scalar_t__ type; struct ivtv* itv; } ;
struct TYPE_6__ {int lace_mode; int v4l2_src_h; int v4l2_src_w; } ;
struct TYPE_5__ {int height; int width; } ;
struct ivtv {int v4l2_cap; TYPE_3__ yuv_info; TYPE_2__ main_rect; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

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
 int VAR_12 ;
 struct ivtv_open_id* FUNC_0 (void*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_13, void *VAR_14, struct v4l2_format *VAR_15)
{
 struct ivtv_open_id *VAR_16 = FUNC_0(VAR_14);
 struct ivtv *VAR_17 = VAR_16->itv;
 struct v4l2_pix_format *VAR_18 = &VAR_15->fmt.pix;

 if (!(VAR_17->v4l2_cap & VAR_4))
  return -VAR_0;
 VAR_18->width = VAR_17->main_rect.width;
 VAR_18->height = VAR_17->main_rect.height;
 VAR_18->colorspace = VAR_5;
 VAR_18->field = VAR_7;
 if (VAR_16->type == VAR_1) {
  switch (VAR_17->yuv_info.lace_mode & VAR_2) {
  case 129:
   VAR_18->field = (VAR_17->yuv_info.lace_mode & VAR_3) ?
    VAR_8 : VAR_9;
   break;
  case 128:
   VAR_18->field = VAR_10;
   break;
  default:
   VAR_18->field = VAR_6;
   break;
  }
  VAR_18->pixelformat = VAR_11;
  VAR_18->bytesperline = 720;
  VAR_18->width = VAR_17->yuv_info.v4l2_src_w;
  VAR_18->height = VAR_17->yuv_info.v4l2_src_h;

  VAR_18->sizeimage =
   1080 * ((VAR_18->height + 31) & ~31);
 } else {
  VAR_18->pixelformat = VAR_12;
  VAR_18->sizeimage = 128 * 1024;
  VAR_18->bytesperline = 0;
 }
 return 0;
}
