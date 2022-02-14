
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct vb2_queue {int dummy; } ;
struct v4l2_pix_format_mplane {TYPE_5__* plane_fmt; int pixelformat; int num_planes; int height; int width; int xfer_func; int quantization; int ycbcr_enc; int colorspace; int field; } ;
struct TYPE_6__ {struct v4l2_pix_format_mplane pix_mp; } ;
struct v4l2_format {int type; TYPE_1__ fmt; } ;
struct TYPE_8__ {int cap_fourcc; int buf_w; } ;
struct TYPE_7__ {int buf_h; int buf_w; int * fb_sz; } ;
struct mtk_vcodec_ctx {scalar_t__ state; int id; TYPE_3__ last_decoded_picinfo; TYPE_2__ picinfo; int xfer_func; int quantization; int ycbcr_enc; int colorspace; int m2m_ctx; } ;
struct mtk_q_data {int * sizeimage; int * bytesperline; TYPE_4__* fmt; int coded_height; int coded_width; int visible_height; int visible_width; } ;
struct file {int dummy; } ;
struct TYPE_10__ {int sizeimage; int bytesperline; } ;
struct TYPE_9__ {int fourcc; int num_planes; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct mtk_vcodec_ctx* FUNC_0 (void*) ;
 int FUNC_1 (int,char*,int ,int ,scalar_t__) ;
 int FUNC_2 (char*,int ) ;
 struct mtk_q_data* FUNC_3 (struct mtk_vcodec_ctx*,int ) ;
 struct vb2_queue* FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_5, void *VAR_6,
        struct v4l2_format *VAR_7)
{
 struct mtk_vcodec_ctx *VAR_8 = FUNC_0(VAR_6);
 struct v4l2_pix_format_mplane *VAR_9 = &VAR_7->fmt.pix_mp;
 struct vb2_queue *VAR_10;
 struct mtk_q_data *VAR_11;

 VAR_10 = FUNC_4(VAR_8->m2m_ctx, VAR_7->type);
 if (!VAR_10) {
  FUNC_2("no vb2 queue for type=%d", VAR_7->type);
  return -VAR_0;
 }

 VAR_11 = FUNC_3(VAR_8, VAR_7->type);

 VAR_9->field = VAR_4;
 VAR_9->colorspace = VAR_8->colorspace;
 VAR_9->ycbcr_enc = VAR_8->ycbcr_enc;
 VAR_9->quantization = VAR_8->quantization;
 VAR_9->xfer_func = VAR_8->xfer_func;

 if ((VAR_7->type == VAR_2) &&
     (VAR_8->state >= VAR_1)) {






  VAR_11->sizeimage[0] = VAR_8->picinfo.fb_sz[0];
  VAR_11->sizeimage[1] = VAR_8->picinfo.fb_sz[1];
  VAR_11->bytesperline[0] = VAR_8->last_decoded_picinfo.buf_w;
  VAR_11->bytesperline[1] = VAR_8->last_decoded_picinfo.buf_w;
  VAR_11->coded_width = VAR_8->picinfo.buf_w;
  VAR_11->coded_height = VAR_8->picinfo.buf_h;
  VAR_8->last_decoded_picinfo.cap_fourcc = VAR_11->fmt->fourcc;







  VAR_9->width = VAR_11->coded_width;
  VAR_9->height = VAR_11->coded_height;





  VAR_9->num_planes = VAR_11->fmt->num_planes;
  VAR_9->pixelformat = VAR_11->fmt->fourcc;
  VAR_9->plane_fmt[0].bytesperline = VAR_11->bytesperline[0];
  VAR_9->plane_fmt[0].sizeimage = VAR_11->sizeimage[0];
  VAR_9->plane_fmt[1].bytesperline = VAR_11->bytesperline[1];
  VAR_9->plane_fmt[1].sizeimage = VAR_11->sizeimage[1];

 } else if (VAR_7->type == VAR_3) {






  VAR_9->width = VAR_11->visible_width;
  VAR_9->height = VAR_11->visible_height;
  VAR_9->plane_fmt[0].bytesperline = VAR_11->bytesperline[0];
  VAR_9->plane_fmt[0].sizeimage = VAR_11->sizeimage[0];
  VAR_9->pixelformat = VAR_11->fmt->fourcc;
  VAR_9->num_planes = VAR_11->fmt->num_planes;
 } else {
  VAR_9->width = VAR_11->coded_width;
  VAR_9->height = VAR_11->coded_height;
  VAR_9->num_planes = VAR_11->fmt->num_planes;
  VAR_9->pixelformat = VAR_11->fmt->fourcc;
  VAR_9->plane_fmt[0].bytesperline = VAR_11->bytesperline[0];
  VAR_9->plane_fmt[0].sizeimage = VAR_11->sizeimage[0];
  VAR_9->plane_fmt[1].bytesperline = VAR_11->bytesperline[1];
  VAR_9->plane_fmt[1].sizeimage = VAR_11->sizeimage[1];

  FUNC_1(1, "[%d] type=%d state=%d Format information could not be read, not ready yet!",
    VAR_8->id, VAR_7->type, VAR_8->state);
 }

 return 0;
}
