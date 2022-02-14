
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_pix_format_mplane {int width; int height; int num_planes; TYPE_3__* plane_fmt; int quantization; int ycbcr_enc; int xfer_func; int colorspace; int pixelformat; int field; } ;
struct TYPE_4__ {struct v4l2_pix_format_mplane pix_mp; } ;
struct v4l2_format {TYPE_1__ fmt; int type; } ;
struct mtk_mdp_frame {int width; int height; TYPE_2__* fmt; } ;
struct mtk_mdp_ctx {int id; int quant; int ycbcr_enc; int xfer_func; int colorspace; } ;
struct file {int dummy; } ;
struct TYPE_6__ {int bytesperline; int sizeimage; } ;
struct TYPE_5__ {int num_planes; int* row_depth; int* depth; int pixelformat; } ;


 int VAR_0 ;
 struct mtk_mdp_ctx* FUNC_0 (void*) ;
 struct mtk_mdp_frame* FUNC_1 (struct mtk_mdp_ctx*,int ) ;
 int FUNC_2 (int,char*,int ,int,...) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_1, void *VAR_2,
        struct v4l2_format *VAR_3)
{
 struct mtk_mdp_ctx *VAR_4 = FUNC_0(VAR_2);
 struct mtk_mdp_frame *VAR_5;
 struct v4l2_pix_format_mplane *VAR_6;
 int VAR_7;

 FUNC_2(2, "[%d] type:%d", VAR_4->id, VAR_3->type);

 VAR_5 = FUNC_1(VAR_4, VAR_3->type);
 VAR_6 = &VAR_3->fmt.pix_mp;

 VAR_6->width = VAR_5->width;
 VAR_6->height = VAR_5->height;
 VAR_6->field = VAR_0;
 VAR_6->pixelformat = VAR_5->fmt->pixelformat;
 VAR_6->num_planes = VAR_5->fmt->num_planes;
 VAR_6->colorspace = VAR_4->colorspace;
 VAR_6->xfer_func = VAR_4->xfer_func;
 VAR_6->ycbcr_enc = VAR_4->ycbcr_enc;
 VAR_6->quantization = VAR_4->quant;
 FUNC_2(2, "[%d] wxh:%dx%d", VAR_4->id,
      VAR_6->width, VAR_6->height);

 for (VAR_7 = 0; VAR_7 < VAR_6->num_planes; ++VAR_7) {
  VAR_6->plane_fmt[VAR_7].bytesperline = (VAR_5->width *
   VAR_5->fmt->row_depth[VAR_7]) / 8;
  VAR_6->plane_fmt[VAR_7].sizeimage = (VAR_5->width *
   VAR_5->height * VAR_5->fmt->depth[VAR_7]) / 8;

  FUNC_2(2, "[%d] p%d, bpl:%d, sizeimage:%d", VAR_4->id, VAR_7,
       VAR_6->plane_fmt[VAR_7].bytesperline,
       VAR_6->plane_fmt[VAR_7].sizeimage);
 }

 return 0;
}
