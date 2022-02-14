
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vivid_fmt {unsigned int buffers; int* bit_depth; int* vdownsampling; unsigned int planes; scalar_t__ color_enc; scalar_t__* data_offset; } ;
struct v4l2_rect {unsigned int width; unsigned int height; unsigned int member_2; unsigned int member_3; int member_1; int member_0; } ;
struct vivid_dev {int* std_cap; size_t input; struct v4l2_rect src_rect; scalar_t__ has_crop_cap; scalar_t__ has_scaler_cap; int has_compose_cap; } ;
struct v4l2_plane_pix_format {unsigned int bytesperline; scalar_t__ sizeimage; int reserved; } ;
struct v4l2_pix_format_mplane {unsigned int width; unsigned int height; unsigned int num_planes; int reserved; int quantization; int xfer_func; int ycbcr_enc; int hsv_enc; int colorspace; int field; int pixelformat; struct v4l2_plane_pix_format* plane_fmt; } ;
struct v4l2_frmsize_discrete {unsigned int width; unsigned int height; } ;
struct TYPE_2__ {struct v4l2_pix_format_mplane pix_mp; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct file {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct vivid_dev*,int,char*,int ) ;
 int VAR_6 ;
 int FUNC_2 (int ,int ,int) ;
 struct v4l2_frmsize_discrete* FUNC_3 (int ,int ,int ,int ,unsigned int,unsigned int) ;
 int FUNC_4 (struct v4l2_rect*,struct v4l2_rect*) ;
 int FUNC_5 (struct v4l2_rect*,struct v4l2_rect*) ;
 struct vivid_dev* FUNC_6 (struct file*) ;
 int FUNC_7 (struct vivid_dev*) ;
 int FUNC_8 (struct vivid_dev*,int ) ;
 struct vivid_fmt* FUNC_9 (struct vivid_dev*,int ) ;
 int FUNC_10 (struct vivid_dev*) ;
 scalar_t__ FUNC_11 (struct vivid_dev*) ;
 scalar_t__ FUNC_12 (struct vivid_dev*) ;
 struct v4l2_rect VAR_7 ;
 struct v4l2_rect VAR_8 ;
 int FUNC_13 (struct vivid_dev*) ;
 int FUNC_14 (struct vivid_dev*) ;
 int FUNC_15 (struct vivid_dev*) ;
 int VAR_9 ;
 int VAR_10 ;

int FUNC_16(struct file *VAR_11, void *VAR_12,
   struct v4l2_format *VAR_13)
{
 struct v4l2_pix_format_mplane *VAR_14 = &VAR_13->fmt.pix_mp;
 struct v4l2_plane_pix_format *VAR_15 = VAR_14->plane_fmt;
 struct vivid_dev *VAR_16 = FUNC_6(VAR_11);
 const struct vivid_fmt *VAR_17;
 unsigned VAR_18, VAR_19;
 unsigned VAR_20 = 1;
 unsigned VAR_21, VAR_22;
 unsigned VAR_23;

 VAR_17 = FUNC_9(VAR_16, VAR_14->pixelformat);
 if (!VAR_17) {
  FUNC_1(VAR_16, 1, "Fourcc format (0x%08x) unknown.\n",
   VAR_14->pixelformat);
  VAR_14->pixelformat = VAR_3;
  VAR_17 = FUNC_9(VAR_16, VAR_14->pixelformat);
 }

 VAR_14->field = FUNC_8(VAR_16, VAR_14->field);
 if (FUNC_12(VAR_16)) {
  const struct v4l2_frmsize_discrete *VAR_24 =
   FUNC_3(VAR_9,
            VAR_5, VAR_10,
            VAR_6, VAR_14->width, VAR_14->height);

  VAR_21 = VAR_24->width;
  VAR_22 = VAR_24->height;
 } else if (FUNC_11(VAR_16)) {
  VAR_21 = 720;
  VAR_22 = (VAR_16->std_cap[VAR_16->input] & VAR_4) ? 480 : 576;
 } else {
  VAR_21 = VAR_16->src_rect.width;
  VAR_22 = VAR_16->src_rect.height;
 }
 if (FUNC_0(VAR_14->field))
  VAR_20 = 2;
 if (FUNC_12(VAR_16) ||
     (!VAR_16->has_scaler_cap && !VAR_16->has_crop_cap && !VAR_16->has_compose_cap)) {
  VAR_14->width = VAR_21;
  VAR_14->height = VAR_22 / VAR_20;
 } else {
  struct v4l2_rect VAR_25 = { 0, 0, VAR_14->width, VAR_14->height * VAR_20 };

  FUNC_5(&VAR_25, &VAR_8);
  FUNC_4(&VAR_25, &VAR_7);
  if (VAR_16->has_scaler_cap && !VAR_16->has_compose_cap) {
   struct v4l2_rect VAR_26 = { 0, 0, VAR_1 * VAR_21, VAR_1 * VAR_22 };

   FUNC_4(&VAR_25, &VAR_26);
  } else if (!VAR_16->has_scaler_cap && VAR_16->has_crop_cap && !VAR_16->has_compose_cap) {
   FUNC_4(&VAR_25, &VAR_16->src_rect);
  } else if (!VAR_16->has_scaler_cap && !VAR_16->has_crop_cap) {
   FUNC_5(&VAR_25, &VAR_16->src_rect);
  }
  VAR_14->width = VAR_25.width;
  VAR_14->height = VAR_25.height / VAR_20;
 }



 VAR_14->num_planes = VAR_17->buffers;
 for (VAR_23 = 0; VAR_23 < VAR_17->buffers; VAR_23++) {

  VAR_18 = (VAR_14->width * VAR_17->bit_depth[VAR_23]) >> 3;

  VAR_19 = (VAR_1 * VAR_0 * VAR_17->bit_depth[VAR_23]) >> 3;

  if (VAR_15[VAR_23].bytesperline > VAR_19)
   VAR_15[VAR_23].bytesperline = VAR_19;
  if (VAR_15[VAR_23].bytesperline < VAR_18)
   VAR_15[VAR_23].bytesperline = VAR_18;

  VAR_15[VAR_23].sizeimage = (VAR_15[VAR_23].bytesperline * VAR_14->height) /
    VAR_17->vdownsampling[VAR_23] + VAR_17->data_offset[VAR_23];

  FUNC_2(VAR_15[VAR_23].reserved, 0, sizeof(VAR_15[VAR_23].reserved));
 }
 for (VAR_23 = VAR_17->buffers; VAR_23 < VAR_17->planes; VAR_23++)
  VAR_15[0].sizeimage += (VAR_15[0].bytesperline * VAR_14->height *
   (VAR_17->bit_depth[VAR_23] / VAR_17->vdownsampling[VAR_23])) /
   (VAR_17->bit_depth[0] / VAR_17->vdownsampling[0]);

 VAR_14->colorspace = FUNC_7(VAR_16);
 if (VAR_17->color_enc == VAR_2)
  VAR_14->hsv_enc = FUNC_10(VAR_16);
 else
  VAR_14->ycbcr_enc = FUNC_15(VAR_16);
 VAR_14->xfer_func = FUNC_14(VAR_16);
 VAR_14->quantization = FUNC_13(VAR_16);
 FUNC_2(VAR_14->reserved, 0, sizeof(VAR_14->reserved));
 return 0;
}
