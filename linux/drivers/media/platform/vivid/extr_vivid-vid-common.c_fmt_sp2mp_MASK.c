
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_plane_pix_format {int reserved; int bytesperline; int sizeimage; } ;
struct v4l2_pix_format_mplane {int num_planes; int flags; int quantization; int ycbcr_enc; int xfer_func; int colorspace; int field; int pixelformat; int height; int width; int reserved; struct v4l2_plane_pix_format* plane_fmt; } ;
struct v4l2_pix_format {int bytesperline; int sizeimage; int flags; int quantization; int ycbcr_enc; int xfer_func; int colorspace; int field; int pixelformat; int height; int width; } ;
struct TYPE_2__ {struct v4l2_pix_format pix; struct v4l2_pix_format_mplane pix_mp; } ;
struct v4l2_format {scalar_t__ type; TYPE_1__ fmt; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,int) ;

void FUNC_1(const struct v4l2_format *VAR_3, struct v4l2_format *VAR_4)
{
 struct v4l2_pix_format_mplane *VAR_5 = &VAR_4->fmt.pix_mp;
 struct v4l2_plane_pix_format *VAR_6 = &VAR_5->plane_fmt[0];
 const struct v4l2_pix_format *VAR_7 = &VAR_3->fmt.pix;
 bool VAR_8 = VAR_3->type == VAR_0;

 FUNC_0(VAR_5->reserved, 0, sizeof(VAR_5->reserved));
 VAR_4->type = VAR_8 ? VAR_1 :
      VAR_2;
 VAR_5->width = VAR_7->width;
 VAR_5->height = VAR_7->height;
 VAR_5->pixelformat = VAR_7->pixelformat;
 VAR_5->field = VAR_7->field;
 VAR_5->colorspace = VAR_7->colorspace;
 VAR_5->xfer_func = VAR_7->xfer_func;

 VAR_5->ycbcr_enc = VAR_7->ycbcr_enc;
 VAR_5->quantization = VAR_7->quantization;
 VAR_5->num_planes = 1;
 VAR_5->flags = VAR_7->flags;
 VAR_6->sizeimage = VAR_7->sizeimage;
 VAR_6->bytesperline = VAR_7->bytesperline;
 FUNC_0(VAR_6->reserved, 0, sizeof(VAR_6->reserved));
}
