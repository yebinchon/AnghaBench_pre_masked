
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int height; int width; } ;
struct vivid_dev {TYPE_4__* fmt_cap; int tpg; int field_cap; TYPE_2__ fmt_cap_rect; } ;
struct v4l2_pix_format_mplane {int height; unsigned int num_planes; TYPE_3__* plane_fmt; int quantization; int ycbcr_enc; int hsv_enc; int xfer_func; int colorspace; int pixelformat; int field; int width; } ;
struct TYPE_5__ {struct v4l2_pix_format_mplane pix_mp; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct file {int dummy; } ;
struct TYPE_8__ {scalar_t__ color_enc; unsigned int buffers; int* vdownsampling; scalar_t__* data_offset; int fourcc; } ;
struct TYPE_7__ {scalar_t__ sizeimage; int bytesperline; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,unsigned int) ;
 int FUNC_1 (int *,unsigned int) ;
 struct vivid_dev* FUNC_2 (struct file*) ;
 int FUNC_3 (struct vivid_dev*) ;
 int FUNC_4 (struct vivid_dev*) ;
 int FUNC_5 (struct vivid_dev*) ;
 int FUNC_6 (struct vivid_dev*) ;
 int FUNC_7 (struct vivid_dev*) ;

int FUNC_8(struct file *VAR_1, void *VAR_2,
     struct v4l2_format *VAR_3)
{
 struct vivid_dev *VAR_4 = FUNC_2(VAR_1);
 struct v4l2_pix_format_mplane *VAR_5 = &VAR_3->fmt.pix_mp;
 unsigned VAR_6;

 VAR_5->width = VAR_4->fmt_cap_rect.width;
 VAR_5->height = VAR_4->fmt_cap_rect.height;
 VAR_5->field = VAR_4->field_cap;
 VAR_5->pixelformat = VAR_4->fmt_cap->fourcc;
 VAR_5->colorspace = FUNC_3(VAR_4);
 VAR_5->xfer_func = FUNC_6(VAR_4);
 if (VAR_4->fmt_cap->color_enc == VAR_0)
  VAR_5->hsv_enc = FUNC_4(VAR_4);
 else
  VAR_5->ycbcr_enc = FUNC_7(VAR_4);
 VAR_5->quantization = FUNC_5(VAR_4);
 VAR_5->num_planes = VAR_4->fmt_cap->buffers;
 for (VAR_6 = 0; VAR_6 < VAR_5->num_planes; VAR_6++) {
  VAR_5->plane_fmt[VAR_6].bytesperline = FUNC_0(&VAR_4->tpg, VAR_6);
  VAR_5->plane_fmt[VAR_6].sizeimage =
   (FUNC_1(&VAR_4->tpg, VAR_6) * VAR_5->height) /
   VAR_4->fmt_cap->vdownsampling[VAR_6] +
   VAR_4->fmt_cap->data_offset[VAR_6];
 }
 return 0;
}
