
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct venus_inst {int out_height; int out_width; int xfer_func; int quantization; int ycbcr_enc; int colorspace; int height; int width; struct venus_format* fmt_out; struct venus_format* fmt_cap; } ;
struct venus_format {int pixfmt; } ;
struct v4l2_pix_format_mplane {int height; int width; int xfer_func; int quantization; int ycbcr_enc; int colorspace; int pixelformat; } ;
struct TYPE_2__ {struct v4l2_pix_format_mplane pix_mp; } ;
struct v4l2_format {scalar_t__ type; TYPE_1__ fmt; } ;
struct file {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct venus_inst* FUNC_0 (struct file*) ;
 int FUNC_1 (struct venus_inst*) ;
 int FUNC_2 (struct venus_inst*,struct v4l2_format*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_2, void *VAR_3, struct v4l2_format *VAR_4)
{
 struct venus_inst *VAR_5 = FUNC_0(VAR_2);
 const struct venus_format *VAR_6 = ((void*)0);
 struct v4l2_pix_format_mplane *VAR_7 = &VAR_4->fmt.pix_mp;
 int VAR_8;

 if (VAR_4->type == VAR_0)
  VAR_6 = VAR_5->fmt_cap;
 else if (VAR_4->type == VAR_1)
  VAR_6 = VAR_5->fmt_out;

 if (VAR_4->type == VAR_0) {
  VAR_8 = FUNC_1(VAR_5);
  if (VAR_8)
   return VAR_8;
 }

 VAR_7->pixelformat = VAR_6->pixfmt;

 if (VAR_4->type == VAR_0) {
  VAR_7->width = VAR_5->width;
  VAR_7->height = VAR_5->height;
  VAR_7->colorspace = VAR_5->colorspace;
  VAR_7->ycbcr_enc = VAR_5->ycbcr_enc;
  VAR_7->quantization = VAR_5->quantization;
  VAR_7->xfer_func = VAR_5->xfer_func;
 } else if (VAR_4->type == VAR_1) {
  VAR_7->width = VAR_5->out_width;
  VAR_7->height = VAR_5->out_height;
 }

 FUNC_2(VAR_5, VAR_4);

 return 0;
}
