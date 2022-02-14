
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u32 ;
struct venus_inst {struct venus_format const* fmt_cap; struct venus_format const* fmt_out; int height; int width; int input_buf_size; int xfer_func; int quantization; int ycbcr_enc; int colorspace; int out_height; int out_width; } ;
struct venus_format {void* pixfmt; } ;
struct v4l2_pix_format_mplane {int height; int width; void* pixelformat; TYPE_1__* plane_fmt; int xfer_func; int quantization; int ycbcr_enc; int colorspace; } ;
struct TYPE_4__ {struct v4l2_pix_format_mplane pix_mp; } ;
struct v4l2_format {scalar_t__ type; TYPE_2__ fmt; } ;
struct file {int dummy; } ;
typedef int format ;
struct TYPE_3__ {int sizeimage; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct v4l2_format*,int ,int) ;
 struct venus_inst* FUNC_1 (struct file*) ;
 struct venus_format* FUNC_2 (struct venus_inst*,struct v4l2_format*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_2, void *VAR_3, struct v4l2_format *VAR_4)
{
 struct venus_inst *VAR_5 = FUNC_1(VAR_2);
 struct v4l2_pix_format_mplane *VAR_6 = &VAR_4->fmt.pix_mp;
 struct v4l2_pix_format_mplane VAR_7;
 const struct venus_format *VAR_8;
 struct v4l2_format VAR_9;
 u32 VAR_10 = 0, VAR_11 = 0;

 VAR_7 = *VAR_6;

 VAR_8 = FUNC_2(VAR_5, VAR_4);

 if (VAR_4->type == VAR_1) {
  VAR_10 = VAR_6->pixelformat;
  VAR_11 = VAR_5->fmt_cap->pixfmt;
 } else if (VAR_4->type == VAR_0) {
  VAR_11 = VAR_6->pixelformat;
  VAR_10 = VAR_5->fmt_out->pixfmt;
 }

 FUNC_0(&VAR_9, 0, sizeof(VAR_9));

 VAR_9.type = VAR_1;
 VAR_9.fmt.pix_mp.pixelformat = VAR_10;
 VAR_9.fmt.pix_mp.width = VAR_7.width;
 VAR_9.fmt.pix_mp.height = VAR_7.height;
 FUNC_2(VAR_5, &VAR_9);

 if (VAR_4->type == VAR_1) {
  VAR_5->out_width = VAR_9.fmt.pix_mp.width;
  VAR_5->out_height = VAR_9.fmt.pix_mp.height;
  VAR_5->colorspace = VAR_6->colorspace;
  VAR_5->ycbcr_enc = VAR_6->ycbcr_enc;
  VAR_5->quantization = VAR_6->quantization;
  VAR_5->xfer_func = VAR_6->xfer_func;
  VAR_5->input_buf_size = VAR_6->plane_fmt[0].sizeimage;
 }

 FUNC_0(&VAR_9, 0, sizeof(VAR_9));

 VAR_9.type = VAR_0;
 VAR_9.fmt.pix_mp.pixelformat = VAR_11;
 VAR_9.fmt.pix_mp.width = VAR_7.width;
 VAR_9.fmt.pix_mp.height = VAR_7.height;
 FUNC_2(VAR_5, &VAR_9);

 VAR_5->width = VAR_9.fmt.pix_mp.width;
 VAR_5->height = VAR_9.fmt.pix_mp.height;

 if (VAR_4->type == VAR_1)
  VAR_5->fmt_out = VAR_8;
 else if (VAR_4->type == VAR_0)
  VAR_5->fmt_cap = VAR_8;

 return 0;
}
