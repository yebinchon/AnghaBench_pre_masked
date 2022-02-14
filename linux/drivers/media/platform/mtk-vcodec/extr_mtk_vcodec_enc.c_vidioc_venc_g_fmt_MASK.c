
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vb2_queue {int dummy; } ;
struct v4l2_pix_format_mplane {int num_planes; int xfer_func; int quantization; int ycbcr_enc; int colorspace; scalar_t__ flags; TYPE_3__* plane_fmt; int field; int pixelformat; int height; int width; } ;
struct TYPE_4__ {struct v4l2_pix_format_mplane pix_mp; } ;
struct v4l2_format {int type; TYPE_1__ fmt; } ;
struct mtk_vcodec_ctx {int xfer_func; int quantization; int ycbcr_enc; int colorspace; int m2m_ctx; } ;
struct mtk_q_data {int * sizeimage; int * bytesperline; TYPE_2__* fmt; int field; int coded_height; int coded_width; } ;
struct file {int dummy; } ;
struct TYPE_6__ {int * reserved; int sizeimage; int bytesperline; } ;
struct TYPE_5__ {int num_planes; int fourcc; } ;


 int VAR_0 ;
 struct mtk_vcodec_ctx* FUNC_0 (void*) ;
 int FUNC_1 (int *,int,int) ;
 struct mtk_q_data* FUNC_2 (struct mtk_vcodec_ctx*,int ) ;
 struct vb2_queue* FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_1, void *VAR_2,
        struct v4l2_format *VAR_3)
{
 struct v4l2_pix_format_mplane *VAR_4 = &VAR_3->fmt.pix_mp;
 struct mtk_vcodec_ctx *VAR_5 = FUNC_0(VAR_2);
 struct vb2_queue *VAR_6;
 struct mtk_q_data *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_3(VAR_5->m2m_ctx, VAR_3->type);
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_2(VAR_5, VAR_3->type);

 VAR_4->width = VAR_7->coded_width;
 VAR_4->height = VAR_7->coded_height;
 VAR_4->pixelformat = VAR_7->fmt->fourcc;
 VAR_4->field = VAR_7->field;
 VAR_4->num_planes = VAR_7->fmt->num_planes;
 for (VAR_8 = 0; VAR_8 < VAR_4->num_planes; VAR_8++) {
  VAR_4->plane_fmt[VAR_8].bytesperline = VAR_7->bytesperline[VAR_8];
  VAR_4->plane_fmt[VAR_8].sizeimage = VAR_7->sizeimage[VAR_8];
  FUNC_1(&(VAR_4->plane_fmt[VAR_8].reserved[0]), 0x0,
         sizeof(VAR_4->plane_fmt[VAR_8].reserved));
 }

 VAR_4->flags = 0;
 VAR_4->colorspace = VAR_5->colorspace;
 VAR_4->ycbcr_enc = VAR_5->ycbcr_enc;
 VAR_4->quantization = VAR_5->quantization;
 VAR_4->xfer_func = VAR_5->xfer_func;

 return 0;
}
