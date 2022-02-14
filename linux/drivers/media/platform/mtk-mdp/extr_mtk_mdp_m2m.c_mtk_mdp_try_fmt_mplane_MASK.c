
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_pix_format_mplane {int width; int height; int num_planes; TYPE_7__* plane_fmt; int reserved; int quantization; int ycbcr_enc; int xfer_func; int colorspace; int pixelformat; int field; } ;
struct TYPE_8__ {struct v4l2_pix_format_mplane pix_mp; } ;
struct v4l2_format {int type; TYPE_1__ fmt; } ;
struct mtk_mdp_variant {TYPE_6__* pix_min; TYPE_4__* pix_align; TYPE_3__* pix_max; } ;
struct mtk_mdp_fmt {int num_planes; int* row_depth; int* depth; TYPE_5__* align; int pixelformat; } ;
struct mtk_mdp_dev {TYPE_2__* pdev; struct mtk_mdp_variant* variant; } ;
struct mtk_mdp_ctx {int id; int quant; int ycbcr_enc; int xfer_func; int colorspace; struct mtk_mdp_dev* mdp_dev; } ;
struct TYPE_14__ {int bytesperline; int sizeimage; int reserved; } ;
struct TYPE_13__ {int org_w; int org_h; int target_rot_dis_w; int target_rot_dis_h; } ;
struct TYPE_12__ {int org_w; int org_h; } ;
struct TYPE_11__ {int org_w; int org_h; } ;
struct TYPE_10__ {int target_rot_dis_w; int target_rot_dis_h; } ;
struct TYPE_9__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int*,int,int,int,int*,int,int,int) ;
 int FUNC_4 (int,char*,int ,int,int,int,int,...) ;
 struct mtk_mdp_fmt* FUNC_5 (int ,int ) ;
 struct mtk_mdp_fmt* FUNC_6 (int ,int ) ;

__attribute__((used)) static const struct mtk_mdp_fmt *FUNC_7(struct mtk_mdp_ctx *VAR_1,
       struct v4l2_format *VAR_2)
{
 struct mtk_mdp_dev *VAR_3 = VAR_1->mdp_dev;
 struct mtk_mdp_variant *VAR_4 = VAR_3->variant;
 struct v4l2_pix_format_mplane *VAR_5 = &VAR_2->fmt.pix_mp;
 const struct mtk_mdp_fmt *VAR_6;
 u32 VAR_7, VAR_8, VAR_9, VAR_10;
 u32 VAR_11, VAR_12, VAR_13, VAR_14;
 int VAR_15;

 VAR_6 = FUNC_5(VAR_5->pixelformat, VAR_2->type);
 if (!VAR_6)
  VAR_6 = FUNC_6(0, VAR_2->type);
 if (!VAR_6) {
  FUNC_1(&VAR_1->mdp_dev->pdev->dev,
   "pixelformat format 0x%X invalid\n",
   VAR_5->pixelformat);
  return ((void*)0);
 }

 VAR_5->field = VAR_0;
 VAR_5->pixelformat = VAR_6->pixelformat;
 if (!FUNC_0(VAR_2->type)) {
  VAR_5->colorspace = VAR_1->colorspace;
  VAR_5->xfer_func = VAR_1->xfer_func;
  VAR_5->ycbcr_enc = VAR_1->ycbcr_enc;
  VAR_5->quantization = VAR_1->quant;
 }
 FUNC_2(VAR_5->reserved, 0, sizeof(VAR_5->reserved));

 VAR_7 = VAR_4->pix_max->target_rot_dis_w;
 VAR_8 = VAR_4->pix_max->target_rot_dis_h;

 if (VAR_6->align == ((void*)0)) {

  VAR_9 = VAR_4->pix_align->org_w;
  VAR_10 = VAR_4->pix_align->org_h;
 } else {
  VAR_9 = VAR_6->align->org_w;
  VAR_10 = VAR_6->align->org_h;
 }

 if (FUNC_0(VAR_2->type)) {
  VAR_11 = VAR_4->pix_min->org_w;
  VAR_12 = VAR_4->pix_min->org_h;
 } else {
  VAR_11 = VAR_4->pix_min->target_rot_dis_w;
  VAR_12 = VAR_4->pix_min->target_rot_dis_h;
 }

 FUNC_4(2, "[%d] type:%d, wxh:%ux%u, align:%ux%u, max:%ux%u",
      VAR_1->id, VAR_2->type, VAR_5->width, VAR_5->height,
      VAR_9, VAR_10, VAR_7, VAR_8);




 VAR_13 = VAR_5->width;
 VAR_14 = VAR_5->height;

 FUNC_3(&VAR_5->width, VAR_11, VAR_7, VAR_9,
      &VAR_5->height, VAR_12, VAR_8, VAR_10);

 if (VAR_13 != VAR_5->width || VAR_14 != VAR_5->height)
  FUNC_4(1, "[%d] size change:%ux%u to %ux%u", VAR_1->id,
       VAR_13, VAR_14, VAR_5->width, VAR_5->height);
 VAR_5->num_planes = VAR_6->num_planes;

 for (VAR_15 = 0; VAR_15 < VAR_5->num_planes; ++VAR_15) {
  int VAR_16 = (VAR_5->width * VAR_6->row_depth[VAR_15]) / 8;
  int VAR_17 = (VAR_5->width * VAR_5->height *
   VAR_6->depth[VAR_15]) / 8;

  VAR_5->plane_fmt[VAR_15].bytesperline = VAR_16;
  if (VAR_5->plane_fmt[VAR_15].sizeimage < VAR_17)
   VAR_5->plane_fmt[VAR_15].sizeimage = VAR_17;
  FUNC_2(VAR_5->plane_fmt[VAR_15].reserved, 0,
         sizeof(VAR_5->plane_fmt[VAR_15].reserved));
  FUNC_4(2, "[%d] p%d, bpl:%d, sizeimage:%u (%u)", VAR_1->id,
       VAR_15, VAR_16, VAR_5->plane_fmt[VAR_15].sizeimage, VAR_17);
 }

 return VAR_6;
}
