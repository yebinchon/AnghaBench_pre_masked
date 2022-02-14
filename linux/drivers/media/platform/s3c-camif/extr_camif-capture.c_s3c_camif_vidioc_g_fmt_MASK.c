
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_pix_format {int bytesperline; int width; int colorspace; int field; int height; int pixelformat; int sizeimage; } ;
struct TYPE_2__ {struct v4l2_pix_format pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct file {int dummy; } ;
struct camif_frame {int f_width; int f_height; } ;
struct camif_vp {int payload; struct camif_fmt* out_fmt; struct camif_frame out_frame; } ;
struct camif_fmt {int ybpp; int fourcc; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct camif_vp* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_2, void *VAR_3,
      struct v4l2_format *VAR_4)
{
 struct camif_vp *VAR_5 = FUNC_0(VAR_2);
 struct v4l2_pix_format *VAR_6 = &VAR_4->fmt.pix;
 struct camif_frame *VAR_7 = &VAR_5->out_frame;
 const struct camif_fmt *VAR_8 = VAR_5->out_fmt;

 VAR_6->bytesperline = VAR_7->f_width * VAR_8->ybpp;
 VAR_6->sizeimage = VAR_5->payload;

 VAR_6->pixelformat = VAR_8->fourcc;
 VAR_6->width = VAR_7->f_width;
 VAR_6->height = VAR_7->f_height;
 VAR_6->field = VAR_1;
 VAR_6->colorspace = VAR_0;

 return 0;
}
