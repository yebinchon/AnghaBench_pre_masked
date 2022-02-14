
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vivid_fmt {unsigned int buffers; int* bit_depth; int* vdownsampling; unsigned int planes; scalar_t__* data_offset; } ;
struct v4l2_rect {unsigned int width; unsigned int height; unsigned int member_2; unsigned int member_3; int member_1; int member_0; } ;
struct v4l2_bt_timings {int flags; int width; int height; } ;
struct TYPE_3__ {struct v4l2_bt_timings bt; } ;
struct vivid_dev {int std_out; scalar_t__ dvi_d_out; struct v4l2_rect sink_rect; scalar_t__ has_compose_out; scalar_t__ has_scaler_out; int has_crop_out; TYPE_1__ dv_timings_out; } ;
struct v4l2_plane_pix_format {unsigned int bytesperline; scalar_t__ sizeimage; int reserved; } ;
struct v4l2_pix_format_mplane {unsigned int width; unsigned int height; unsigned int num_planes; scalar_t__ colorspace; int reserved; int quantization; int ycbcr_enc; int xfer_func; int field; int pixelformat; struct v4l2_plane_pix_format* plane_fmt; } ;
struct TYPE_4__ {struct v4l2_pix_format_mplane pix_mp; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct file {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (struct vivid_dev*,int,char*,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct v4l2_rect*,struct v4l2_rect*) ;
 int FUNC_4 (struct v4l2_rect*,struct v4l2_rect*) ;
 struct vivid_dev* FUNC_5 (struct file*) ;
 int FUNC_6 (struct vivid_dev*,int ) ;
 struct vivid_fmt* FUNC_7 (struct vivid_dev*,int ) ;
 scalar_t__ FUNC_8 (struct vivid_dev*) ;
 struct v4l2_rect VAR_14 ;
 struct v4l2_rect VAR_15 ;

int FUNC_9(struct file *VAR_16, void *VAR_17,
   struct v4l2_format *VAR_18)
{
 struct vivid_dev *VAR_19 = FUNC_5(VAR_16);
 struct v4l2_bt_timings *VAR_20 = &VAR_19->dv_timings_out.bt;
 struct v4l2_pix_format_mplane *VAR_21 = &VAR_18->fmt.pix_mp;
 struct v4l2_plane_pix_format *VAR_22 = VAR_21->plane_fmt;
 const struct vivid_fmt *VAR_23;
 unsigned VAR_24, VAR_25;
 unsigned VAR_26 = 1;
 unsigned VAR_27, VAR_28;
 unsigned VAR_29;

 VAR_23 = FUNC_7(VAR_19, VAR_21->pixelformat);
 if (!VAR_23) {
  FUNC_1(VAR_19, 1, "Fourcc format (0x%08x) unknown.\n",
   VAR_21->pixelformat);
  VAR_21->pixelformat = VAR_8;
  VAR_23 = FUNC_7(VAR_19, VAR_21->pixelformat);
 }

 VAR_21->field = FUNC_6(VAR_19, VAR_21->field);
 if (FUNC_8(VAR_19)) {
  VAR_27 = 720;
  VAR_28 = (VAR_19->std_out & VAR_11) ? 480 : 576;
 } else {
  VAR_27 = VAR_19->sink_rect.width;
  VAR_28 = VAR_19->sink_rect.height;
 }
 if (FUNC_0(VAR_21->field))
  VAR_26 = 2;
 if (!VAR_19->has_scaler_out && !VAR_19->has_crop_out && !VAR_19->has_compose_out) {
  VAR_21->width = VAR_27;
  VAR_21->height = VAR_28 / VAR_26;
 } else {
  struct v4l2_rect VAR_30 = { 0, 0, VAR_21->width, VAR_21->height * VAR_26 };

  FUNC_4(&VAR_30, &VAR_15);
  FUNC_3(&VAR_30, &VAR_14);
  if (VAR_19->has_scaler_out && !VAR_19->has_crop_out) {
   struct v4l2_rect VAR_31 = { 0, 0, VAR_1 * VAR_27, VAR_1 * VAR_28 };

   FUNC_3(&VAR_30, &VAR_31);
  } else if (!VAR_19->has_scaler_out && VAR_19->has_compose_out && !VAR_19->has_crop_out) {
   FUNC_3(&VAR_30, &VAR_19->sink_rect);
  } else if (!VAR_19->has_scaler_out && !VAR_19->has_compose_out) {
   FUNC_4(&VAR_30, &VAR_19->sink_rect);
  }
  VAR_21->width = VAR_30.width;
  VAR_21->height = VAR_30.height / VAR_26;
 }



 VAR_21->num_planes = VAR_23->buffers;
 for (VAR_29 = 0; VAR_29 < VAR_23->buffers; VAR_29++) {

  VAR_24 = (VAR_21->width * VAR_23->bit_depth[VAR_29]) >> 3;

  VAR_25 = (VAR_1 * VAR_0 * VAR_23->bit_depth[VAR_29]) >> 3;

  if (VAR_22[VAR_29].bytesperline > VAR_25)
   VAR_22[VAR_29].bytesperline = VAR_25;
  if (VAR_22[VAR_29].bytesperline < VAR_24)
   VAR_22[VAR_29].bytesperline = VAR_24;

  VAR_22[VAR_29].sizeimage = (VAR_22[VAR_29].bytesperline * VAR_21->height) /
    VAR_23->vdownsampling[VAR_29] + VAR_23->data_offset[VAR_29];

  FUNC_2(VAR_22[VAR_29].reserved, 0, sizeof(VAR_22[VAR_29].reserved));
 }
 for (VAR_29 = VAR_23->buffers; VAR_29 < VAR_23->planes; VAR_29++)
  VAR_22[0].sizeimage += (VAR_22[0].bytesperline * VAR_21->height *
   (VAR_23->bit_depth[VAR_29] / VAR_23->vdownsampling[VAR_29])) /
   (VAR_23->bit_depth[0] / VAR_23->vdownsampling[0]);

 VAR_21->xfer_func = VAR_12;
 VAR_21->ycbcr_enc = VAR_13;
 VAR_21->quantization = VAR_9;
 if (FUNC_8(VAR_19)) {
  VAR_21->colorspace = VAR_5;
 } else if (VAR_19->dvi_d_out || !(VAR_20->flags & VAR_7)) {
  VAR_21->colorspace = VAR_6;
  if (VAR_19->dvi_d_out)
   VAR_21->quantization = VAR_10;
 } else if (VAR_20->width == 720 && VAR_20->height <= 576) {
  VAR_21->colorspace = VAR_5;
 } else if (VAR_21->colorspace != VAR_5 &&
     VAR_21->colorspace != VAR_4 &&
     VAR_21->colorspace != VAR_3 &&
     VAR_21->colorspace != VAR_2 &&
     VAR_21->colorspace != VAR_6) {
  VAR_21->colorspace = VAR_4;
 }
 FUNC_2(VAR_21->reserved, 0, sizeof(VAR_21->reserved));
 return 0;
}
