
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vb2_queue {int dummy; } ;
struct v4l2_plane_pix_format {int sizeimage; int bytesperline; } ;
struct TYPE_6__ {int num_planes; struct v4l2_plane_pix_format* plane_fmt; int field; int height; int width; } ;
struct TYPE_5__ {int pixelformat; } ;
struct TYPE_7__ {TYPE_2__ pix_mp; TYPE_1__ pix; } ;
struct v4l2_format {TYPE_3__ fmt; int type; } ;
struct mtk_video_fmt {int fourcc; } ;
struct mtk_vcodec_ctx {scalar_t__ state; int m2m_ctx; } ;
struct mtk_q_data {struct mtk_video_fmt const* fmt; int * sizeimage; int * bytesperline; int field; int coded_height; int coded_width; } ;
struct file {int dummy; } ;
struct TYPE_8__ {int fourcc; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct mtk_vcodec_ctx* FUNC_0 (void*) ;
 int FUNC_1 (char*,...) ;
 struct mtk_video_fmt* FUNC_2 (struct v4l2_format*) ;
 struct mtk_q_data* FUNC_3 (struct mtk_vcodec_ctx*,int ) ;
 TYPE_4__* VAR_5 ;
 struct vb2_queue* FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (struct vb2_queue*) ;
 int FUNC_6 (struct mtk_vcodec_ctx*,int ) ;
 int FUNC_7 (struct v4l2_format*,struct mtk_video_fmt const*) ;

__attribute__((used)) static int FUNC_8(struct file *VAR_6, void *VAR_7,
        struct v4l2_format *VAR_8)
{
 struct mtk_vcodec_ctx *VAR_9 = FUNC_0(VAR_7);
 struct vb2_queue *VAR_10;
 struct mtk_q_data *VAR_11;
 int VAR_12, VAR_13;
 const struct mtk_video_fmt *VAR_14;

 VAR_10 = FUNC_4(VAR_9->m2m_ctx, VAR_8->type);
 if (!VAR_10) {
  FUNC_1("fail to get vq");
  return -VAR_2;
 }

 if (FUNC_5(VAR_10)) {
  FUNC_1("queue busy");
  return -VAR_1;
 }

 VAR_11 = FUNC_3(VAR_9, VAR_8->type);
 if (!VAR_11) {
  FUNC_1("fail to get q data");
  return -VAR_2;
 }

 VAR_14 = FUNC_2(VAR_8);
 if (!VAR_14) {
  VAR_8->fmt.pix.pixelformat = VAR_5[VAR_0].fourcc;
  VAR_14 = FUNC_2(VAR_8);
 }

 VAR_11->fmt = VAR_14;
 VAR_13 = FUNC_7(VAR_8, VAR_11->fmt);
 if (VAR_13)
  return VAR_13;

 VAR_11->coded_width = VAR_8->fmt.pix_mp.width;
 VAR_11->coded_height = VAR_8->fmt.pix_mp.height;
 VAR_11->field = VAR_8->fmt.pix_mp.field;

 for (VAR_12 = 0; VAR_12 < VAR_8->fmt.pix_mp.num_planes; VAR_12++) {
  struct v4l2_plane_pix_format *VAR_15;

  VAR_15 = &VAR_8->fmt.pix_mp.plane_fmt[VAR_12];
  VAR_11->bytesperline[VAR_12] = VAR_15->bytesperline;
  VAR_11->sizeimage[VAR_12] = VAR_15->sizeimage;
 }

 if (VAR_9->state == VAR_3) {
  VAR_13 = FUNC_6(VAR_9, VAR_11->fmt->fourcc);
  if (VAR_13) {
   FUNC_1("venc_if_init failed=%d, codec type=%x",
     VAR_13, VAR_11->fmt->fourcc);
   return -VAR_1;
  }
  VAR_9->state = VAR_4;
 }

 return 0;
}
