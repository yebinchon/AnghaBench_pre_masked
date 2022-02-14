
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_pix_format {int height; int sizeimage; int bytesperline; int pixelformat; int field; int colorspace; int width; } ;
struct TYPE_3__ {struct v4l2_pix_format pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct ivtv_open_id {scalar_t__ type; struct ivtv* itv; } ;
struct TYPE_4__ {int height; int width; } ;
struct ivtv {TYPE_2__ cxhdl; } ;
struct file {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ivtv_open_id* FUNC_0 (void*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_5, void *VAR_6, struct v4l2_format *VAR_7)
{
 struct ivtv_open_id *VAR_8 = FUNC_0(VAR_6);
 struct ivtv *VAR_9 = VAR_8->itv;
 struct v4l2_pix_format *VAR_10 = &VAR_7->fmt.pix;

 VAR_10->width = VAR_9->cxhdl.width;
 VAR_10->height = VAR_9->cxhdl.height;
 VAR_10->colorspace = VAR_1;
 VAR_10->field = VAR_2;
 if (VAR_8->type == VAR_0) {
  VAR_10->pixelformat = VAR_3;

  VAR_10->sizeimage = VAR_10->height * 720 * 3 / 2;
  VAR_10->bytesperline = 720;
 } else {
  VAR_10->pixelformat = VAR_4;
  VAR_10->sizeimage = 128 * 1024;
  VAR_10->bytesperline = 0;
 }
 return 0;
}
