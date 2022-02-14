
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vivid_fmt {unsigned int buffers; unsigned int planes; unsigned int* vdownsampling; scalar_t__* data_offset; int fourcc; } ;
struct TYPE_5__ {int height; int width; } ;
struct vivid_dev {unsigned int* bytesperline_out; int quantization_out; int ycbcr_enc_out; int xfer_func_out; int colorspace_out; int field_out; TYPE_2__ fmt_out_rect; struct vivid_fmt* fmt_out; } ;
struct v4l2_pix_format_mplane {int height; unsigned int num_planes; TYPE_3__* plane_fmt; int quantization; int ycbcr_enc; int xfer_func; int colorspace; int pixelformat; int field; int width; } ;
struct TYPE_4__ {struct v4l2_pix_format_mplane pix_mp; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct file {int dummy; } ;
struct TYPE_6__ {unsigned int bytesperline; scalar_t__ sizeimage; } ;


 struct vivid_dev* FUNC_0 (struct file*) ;

int FUNC_1(struct file *VAR_0, void *VAR_1,
     struct v4l2_format *VAR_2)
{
 struct vivid_dev *VAR_3 = FUNC_0(VAR_0);
 struct v4l2_pix_format_mplane *VAR_4 = &VAR_2->fmt.pix_mp;
 const struct vivid_fmt *VAR_5 = VAR_3->fmt_out;
 unsigned VAR_6;

 VAR_4->width = VAR_3->fmt_out_rect.width;
 VAR_4->height = VAR_3->fmt_out_rect.height;
 VAR_4->field = VAR_3->field_out;
 VAR_4->pixelformat = VAR_5->fourcc;
 VAR_4->colorspace = VAR_3->colorspace_out;
 VAR_4->xfer_func = VAR_3->xfer_func_out;
 VAR_4->ycbcr_enc = VAR_3->ycbcr_enc_out;
 VAR_4->quantization = VAR_3->quantization_out;
 VAR_4->num_planes = VAR_5->buffers;
 for (VAR_6 = 0; VAR_6 < VAR_4->num_planes; VAR_6++) {
  VAR_4->plane_fmt[VAR_6].bytesperline = VAR_3->bytesperline_out[VAR_6];
  VAR_4->plane_fmt[VAR_6].sizeimage =
   VAR_4->plane_fmt[VAR_6].bytesperline * VAR_4->height +
   VAR_5->data_offset[VAR_6];
 }
 for (VAR_6 = VAR_5->buffers; VAR_6 < VAR_5->planes; VAR_6++) {
  unsigned VAR_7 = VAR_3->bytesperline_out[VAR_6];

  VAR_4->plane_fmt[0].sizeimage +=
   (VAR_7 * VAR_4->height) / VAR_5->vdownsampling[VAR_6];
 }
 return 0;
}
