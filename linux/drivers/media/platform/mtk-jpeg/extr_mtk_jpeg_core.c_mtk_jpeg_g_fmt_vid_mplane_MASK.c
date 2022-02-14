
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vb2_queue {int dummy; } ;
struct v4l2_plane_pix_format {int sizeimage; int bytesperline; int reserved; } ;
struct v4l2_pix_format_mplane {int pixelformat; int num_planes; struct v4l2_plane_pix_format* plane_fmt; int height; int width; int quantization; int xfer_func; int ycbcr_enc; int colorspace; int field; int reserved; } ;
struct TYPE_4__ {struct v4l2_pix_format_mplane pix_mp; } ;
struct v4l2_format {int type; TYPE_1__ fmt; } ;
struct mtk_jpeg_q_data {int * sizeimage; int * bytesperline; TYPE_3__* fmt; int h; int w; } ;
struct mtk_jpeg_dev {int v4l2_dev; } ;
struct TYPE_5__ {int m2m_ctx; } ;
struct mtk_jpeg_ctx {int quantization; int xfer_func; int ycbcr_enc; int colorspace; TYPE_2__ fh; struct mtk_jpeg_dev* jpeg; } ;
struct file {int dummy; } ;
struct TYPE_6__ {int fourcc; int colplanes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 struct mtk_jpeg_ctx* FUNC_1 (void*) ;
 struct mtk_jpeg_q_data* FUNC_2 (struct mtk_jpeg_ctx*,int ) ;
 int FUNC_3 (int,int ,int *,char*,int,int,int,...) ;
 struct vb2_queue* FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_3, void *VAR_4,
         struct v4l2_format *VAR_5)
{
 struct vb2_queue *VAR_6;
 struct mtk_jpeg_q_data *VAR_7 = ((void*)0);
 struct v4l2_pix_format_mplane *VAR_8 = &VAR_5->fmt.pix_mp;
 struct mtk_jpeg_ctx *VAR_9 = FUNC_1(VAR_4);
 struct mtk_jpeg_dev *VAR_10 = VAR_9->jpeg;
 int VAR_11;

 VAR_6 = FUNC_4(VAR_9->fh.m2m_ctx, VAR_5->type);
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_2(VAR_9, VAR_5->type);

 FUNC_0(VAR_8->reserved, 0, sizeof(VAR_8->reserved));
 VAR_8->width = VAR_7->w;
 VAR_8->height = VAR_7->h;
 VAR_8->field = VAR_1;
 VAR_8->pixelformat = VAR_7->fmt->fourcc;
 VAR_8->num_planes = VAR_7->fmt->colplanes;
 VAR_8->colorspace = VAR_9->colorspace;
 VAR_8->ycbcr_enc = VAR_9->ycbcr_enc;
 VAR_8->xfer_func = VAR_9->xfer_func;
 VAR_8->quantization = VAR_9->quantization;

 FUNC_3(1, VAR_2, &VAR_10->v4l2_dev, "(%d) g_fmt:%c%c%c%c wxh:%ux%u\n",
   VAR_5->type,
   (VAR_8->pixelformat & 0xff),
   (VAR_8->pixelformat >> 8 & 0xff),
   (VAR_8->pixelformat >> 16 & 0xff),
   (VAR_8->pixelformat >> 24 & 0xff),
   VAR_8->width, VAR_8->height);

 for (VAR_11 = 0; VAR_11 < VAR_8->num_planes; VAR_11++) {
  struct v4l2_plane_pix_format *VAR_12 = &VAR_8->plane_fmt[VAR_11];

  VAR_12->bytesperline = VAR_7->bytesperline[VAR_11];
  VAR_12->sizeimage = VAR_7->sizeimage[VAR_11];
  FUNC_0(VAR_12->reserved, 0, sizeof(VAR_12->reserved));

  FUNC_3(1, VAR_2, &VAR_10->v4l2_dev,
    "plane[%d] bpl=%u, size=%u\n",
    VAR_11,
    VAR_12->bytesperline,
    VAR_12->sizeimage);
 }
 return 0;
}
