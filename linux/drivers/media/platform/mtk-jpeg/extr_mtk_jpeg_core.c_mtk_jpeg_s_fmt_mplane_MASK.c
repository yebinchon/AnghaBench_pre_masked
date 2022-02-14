
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vb2_queue {int dummy; } ;
struct v4l2_pix_format_mplane {TYPE_3__* plane_fmt; int quantization; int xfer_func; int ycbcr_enc; int colorspace; int height; int width; int pixelformat; } ;
struct TYPE_5__ {struct v4l2_pix_format_mplane pix_mp; } ;
struct v4l2_format {int type; TYPE_1__ fmt; } ;
struct mtk_jpeg_q_data {int * sizeimage; int * bytesperline; TYPE_4__* fmt; int h; int w; } ;
struct mtk_jpeg_dev {int v4l2_dev; } ;
struct TYPE_6__ {int m2m_ctx; } ;
struct mtk_jpeg_ctx {int quantization; int xfer_func; int ycbcr_enc; int colorspace; TYPE_2__ fh; struct mtk_jpeg_dev* jpeg; } ;
struct TYPE_8__ {int fourcc; int colplanes; } ;
struct TYPE_7__ {int sizeimage; int bytesperline; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 TYPE_4__* FUNC_1 (struct mtk_jpeg_ctx*,int ,unsigned int) ;
 struct mtk_jpeg_q_data* FUNC_2 (struct mtk_jpeg_ctx*,int ) ;
 int FUNC_3 (int,int ,int *,char*,int,int,int,...) ;
 int FUNC_4 (int *,char*) ;
 struct vb2_queue* FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_7(struct mtk_jpeg_ctx *VAR_5,
     struct v4l2_format *VAR_6)
{
 struct vb2_queue *VAR_7;
 struct mtk_jpeg_q_data *VAR_8 = ((void*)0);
 struct v4l2_pix_format_mplane *VAR_9 = &VAR_6->fmt.pix_mp;
 struct mtk_jpeg_dev *VAR_10 = VAR_5->jpeg;
 unsigned int VAR_11;
 int VAR_12;

 VAR_7 = FUNC_5(VAR_5->fh.m2m_ctx, VAR_6->type);
 if (!VAR_7)
  return -VAR_1;

 VAR_8 = FUNC_2(VAR_5, VAR_6->type);

 if (FUNC_6(VAR_7)) {
  FUNC_4(&VAR_10->v4l2_dev, "queue busy\n");
  return -VAR_0;
 }

 VAR_11 = FUNC_0(VAR_6->type) ?
    VAR_3 : VAR_2;

 VAR_8->fmt = FUNC_1(VAR_5, VAR_9->pixelformat, VAR_11);
 VAR_8->w = VAR_9->width;
 VAR_8->h = VAR_9->height;
 VAR_5->colorspace = VAR_9->colorspace;
 VAR_5->ycbcr_enc = VAR_9->ycbcr_enc;
 VAR_5->xfer_func = VAR_9->xfer_func;
 VAR_5->quantization = VAR_9->quantization;

 FUNC_3(1, VAR_4, &VAR_10->v4l2_dev, "(%d) s_fmt:%c%c%c%c wxh:%ux%u\n",
   VAR_6->type,
   (VAR_8->fmt->fourcc & 0xff),
   (VAR_8->fmt->fourcc >> 8 & 0xff),
   (VAR_8->fmt->fourcc >> 16 & 0xff),
   (VAR_8->fmt->fourcc >> 24 & 0xff),
   VAR_8->w, VAR_8->h);

 for (VAR_12 = 0; VAR_12 < VAR_8->fmt->colplanes; VAR_12++) {
  VAR_8->bytesperline[VAR_12] = VAR_9->plane_fmt[VAR_12].bytesperline;
  VAR_8->sizeimage[VAR_12] = VAR_9->plane_fmt[VAR_12].sizeimage;

  FUNC_3(1, VAR_4, &VAR_10->v4l2_dev,
    "plane[%d] bpl=%u, size=%u\n",
    VAR_12, VAR_8->bytesperline[VAR_12], VAR_8->sizeimage[VAR_12]);
 }

 return 0;
}
