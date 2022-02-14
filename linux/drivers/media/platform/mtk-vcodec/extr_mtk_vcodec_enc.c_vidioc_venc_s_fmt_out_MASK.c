
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vb2_queue {int dummy; } ;
struct v4l2_plane_pix_format {int sizeimage; int bytesperline; } ;
struct v4l2_pix_format_mplane {int num_planes; struct v4l2_plane_pix_format* plane_fmt; int xfer_func; int quantization; int ycbcr_enc; int colorspace; int field; void* height; void* width; } ;
struct TYPE_4__ {int pixelformat; } ;
struct TYPE_5__ {struct v4l2_pix_format_mplane pix_mp; TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; int type; } ;
struct mtk_video_fmt {int dummy; } ;
struct mtk_vcodec_ctx {int xfer_func; int quantization; int ycbcr_enc; int colorspace; int m2m_ctx; } ;
struct mtk_q_data {int * sizeimage; int * bytesperline; int field; void* coded_height; void* coded_width; struct mtk_video_fmt const* fmt; void* visible_height; void* visible_width; } ;
struct file {int dummy; } ;
struct TYPE_6__ {int fourcc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 void* FUNC_0 (void*,int ,int ) ;
 struct mtk_vcodec_ctx* FUNC_1 (void*) ;
 int FUNC_2 (char*) ;
 struct mtk_video_fmt* FUNC_3 (struct v4l2_format*) ;
 struct mtk_q_data* FUNC_4 (struct mtk_vcodec_ctx*,int ) ;
 TYPE_3__* VAR_7 ;
 struct vb2_queue* FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (struct vb2_queue*) ;
 int FUNC_7 (struct v4l2_format*,struct mtk_video_fmt const*) ;

__attribute__((used)) static int FUNC_8(struct file *VAR_8, void *VAR_9,
        struct v4l2_format *VAR_10)
{
 struct mtk_vcodec_ctx *VAR_11 = FUNC_1(VAR_9);
 struct vb2_queue *VAR_12;
 struct mtk_q_data *VAR_13;
 int VAR_14, VAR_15;
 const struct mtk_video_fmt *VAR_16;
 struct v4l2_pix_format_mplane *VAR_17 = &VAR_10->fmt.pix_mp;

 VAR_12 = FUNC_5(VAR_11->m2m_ctx, VAR_10->type);
 if (!VAR_12) {
  FUNC_2("fail to get vq");
  return -VAR_1;
 }

 if (FUNC_6(VAR_12)) {
  FUNC_2("queue busy");
  return -VAR_0;
 }

 VAR_13 = FUNC_4(VAR_11, VAR_10->type);
 if (!VAR_13) {
  FUNC_2("fail to get q data");
  return -VAR_1;
 }

 VAR_16 = FUNC_3(VAR_10);
 if (!VAR_16) {
  VAR_10->fmt.pix.pixelformat = VAR_7[VAR_6].fourcc;
  VAR_16 = FUNC_3(VAR_10);
 }

 VAR_17->height = FUNC_0(VAR_17->height,
    VAR_4,
    VAR_2);
 VAR_17->width = FUNC_0(VAR_17->width,
    VAR_5,
    VAR_3);

 VAR_13->visible_width = VAR_10->fmt.pix_mp.width;
 VAR_13->visible_height = VAR_10->fmt.pix_mp.height;
 VAR_13->fmt = VAR_16;
 VAR_14 = FUNC_7(VAR_10, VAR_13->fmt);
 if (VAR_14)
  return VAR_14;

 VAR_13->coded_width = VAR_10->fmt.pix_mp.width;
 VAR_13->coded_height = VAR_10->fmt.pix_mp.height;

 VAR_13->field = VAR_10->fmt.pix_mp.field;
 VAR_11->colorspace = VAR_10->fmt.pix_mp.colorspace;
 VAR_11->ycbcr_enc = VAR_10->fmt.pix_mp.ycbcr_enc;
 VAR_11->quantization = VAR_10->fmt.pix_mp.quantization;
 VAR_11->xfer_func = VAR_10->fmt.pix_mp.xfer_func;

 for (VAR_15 = 0; VAR_15 < VAR_10->fmt.pix_mp.num_planes; VAR_15++) {
  struct v4l2_plane_pix_format *VAR_18;

  VAR_18 = &VAR_10->fmt.pix_mp.plane_fmt[VAR_15];
  VAR_13->bytesperline[VAR_15] = VAR_18->bytesperline;
  VAR_13->sizeimage[VAR_15] = VAR_18->sizeimage;
 }

 return 0;
}
