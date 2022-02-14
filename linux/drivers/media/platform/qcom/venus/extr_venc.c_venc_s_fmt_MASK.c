
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u32 ;
struct venus_inst {int output_buf_size; struct venus_format const* fmt_cap; struct venus_format const* fmt_out; int height; int width; int xfer_func; int quantization; int ycbcr_enc; int colorspace; int out_height; int out_width; } ;
struct venus_format {void* pixfmt; } ;
struct v4l2_pix_format_mplane {TYPE_2__* plane_fmt; int height; int width; void* pixelformat; int xfer_func; int quantization; int ycbcr_enc; int colorspace; } ;
struct TYPE_3__ {struct v4l2_pix_format_mplane pix_mp; } ;
struct v4l2_format {scalar_t__ type; TYPE_1__ fmt; } ;
struct file {int dummy; } ;
typedef int format ;
struct TYPE_4__ {int sizeimage; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct v4l2_format*,int ,int) ;
 struct venus_inst* FUNC_1 (struct file*) ;
 struct venus_format* FUNC_2 (struct venus_inst*,struct v4l2_format*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_3, void *VAR_4, struct v4l2_format *VAR_5)
{
 struct venus_inst *VAR_6 = FUNC_1(VAR_3);
 struct v4l2_pix_format_mplane *VAR_7 = &VAR_5->fmt.pix_mp;
 struct v4l2_pix_format_mplane VAR_8;
 const struct venus_format *VAR_9;
 struct v4l2_format VAR_10;
 u32 VAR_11 = 0, VAR_12 = 0;

 VAR_8 = *VAR_7;

 VAR_9 = FUNC_2(VAR_6, VAR_5);
 if (!VAR_9)
  return -VAR_0;

 if (VAR_5->type == VAR_2) {
  VAR_11 = VAR_7->pixelformat;
  VAR_12 = VAR_6->fmt_cap->pixfmt;
 } else if (VAR_5->type == VAR_1) {
  VAR_12 = VAR_7->pixelformat;
  VAR_11 = VAR_6->fmt_out->pixfmt;
 }

 FUNC_0(&VAR_10, 0, sizeof(VAR_10));

 VAR_10.type = VAR_2;
 VAR_10.fmt.pix_mp.pixelformat = VAR_11;
 VAR_10.fmt.pix_mp.width = VAR_8.width;
 VAR_10.fmt.pix_mp.height = VAR_8.height;
 FUNC_2(VAR_6, &VAR_10);

 if (VAR_5->type == VAR_2) {
  VAR_6->out_width = VAR_10.fmt.pix_mp.width;
  VAR_6->out_height = VAR_10.fmt.pix_mp.height;
  VAR_6->colorspace = VAR_7->colorspace;
  VAR_6->ycbcr_enc = VAR_7->ycbcr_enc;
  VAR_6->quantization = VAR_7->quantization;
  VAR_6->xfer_func = VAR_7->xfer_func;
 }

 FUNC_0(&VAR_10, 0, sizeof(VAR_10));

 VAR_10.type = VAR_1;
 VAR_10.fmt.pix_mp.pixelformat = VAR_12;
 VAR_10.fmt.pix_mp.width = VAR_8.width;
 VAR_10.fmt.pix_mp.height = VAR_8.height;
 FUNC_2(VAR_6, &VAR_10);

 VAR_6->width = VAR_10.fmt.pix_mp.width;
 VAR_6->height = VAR_10.fmt.pix_mp.height;

 if (VAR_5->type == VAR_2)
  VAR_6->fmt_out = VAR_9;
 else if (VAR_5->type == VAR_1) {
  VAR_6->fmt_cap = VAR_9;
  VAR_6->output_buf_size = VAR_7->plane_fmt[0].sizeimage;
 }

 return 0;
}
