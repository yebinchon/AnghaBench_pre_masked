
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


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct venus_inst* FUNC_0 (struct file*) ;
 int FUNC_1 (struct venus_inst*,struct v4l2_format*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_3, void *VAR_4, struct v4l2_format *VAR_5)
{
 struct v4l2_pix_format_mplane *VAR_6 = &VAR_5->fmt.pix_mp;
 struct venus_inst *VAR_7 = FUNC_0(VAR_3);
 const struct venus_format *VAR_8;

 if (VAR_5->type == VAR_1)
  VAR_8 = VAR_7->fmt_cap;
 else if (VAR_5->type == VAR_2)
  VAR_8 = VAR_7->fmt_out;
 else
  return -VAR_0;

 VAR_6->pixelformat = VAR_8->pixfmt;

 if (VAR_5->type == VAR_1) {
  VAR_6->width = VAR_7->width;
  VAR_6->height = VAR_7->height;
  VAR_6->colorspace = VAR_7->colorspace;
  VAR_6->ycbcr_enc = VAR_7->ycbcr_enc;
  VAR_6->quantization = VAR_7->quantization;
  VAR_6->xfer_func = VAR_7->xfer_func;
 } else if (VAR_5->type == VAR_2) {
  VAR_6->width = VAR_7->out_width;
  VAR_6->height = VAR_7->out_height;
 }

 FUNC_1(VAR_7, VAR_5);

 return 0;
}
