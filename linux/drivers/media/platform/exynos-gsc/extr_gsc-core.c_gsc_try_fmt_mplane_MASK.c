
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_plane_pix_format {int bytesperline; int sizeimage; } ;
struct v4l2_pix_format_mplane {int width; int height; scalar_t__ field; int num_planes; struct v4l2_plane_pix_format* plane_fmt; int colorspace; int pixelformat; } ;
struct TYPE_5__ {struct v4l2_pix_format_mplane pix_mp; } ;
struct v4l2_format {int type; TYPE_1__ fmt; } ;
struct gsc_variant {TYPE_4__* pix_min; TYPE_3__* pix_align; TYPE_2__* pix_max; } ;
struct gsc_fmt {int num_planes; int num_comp; int* depth; int color; } ;
struct gsc_dev {struct gsc_variant* variant; } ;
struct gsc_ctx {int out_colorspace; struct gsc_dev* gsc_dev; } ;
struct TYPE_8__ {int org_w; int org_h; int target_rot_dis_w; int target_rot_dis_h; } ;
struct TYPE_7__ {int org_h; int org_w; } ;
struct TYPE_6__ {int target_rot_dis_w; int target_rot_dis_h; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct gsc_fmt* FUNC_2 (int *,int *,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (char*,int,...) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int*,int,int,int,int*,int,int,int,int ) ;

int FUNC_8(struct gsc_ctx *VAR_3, struct v4l2_format *VAR_4)
{
 struct gsc_dev *VAR_5 = VAR_3->gsc_dev;
 struct gsc_variant *VAR_6 = VAR_5->variant;
 struct v4l2_pix_format_mplane *VAR_7 = &VAR_4->fmt.pix_mp;
 const struct gsc_fmt *VAR_8;
 u32 VAR_9, VAR_10, VAR_11, VAR_12;
 u32 VAR_13, VAR_14, VAR_15, VAR_16;
 int VAR_17;

 FUNC_5("user put w: %d, h: %d", VAR_7->width, VAR_7->height);

 VAR_8 = FUNC_2(&VAR_7->pixelformat, ((void*)0), 0);
 if (!VAR_8) {
  FUNC_6("pixelformat format (0x%X) invalid\n",
      VAR_7->pixelformat);
  return -VAR_0;
 }

 if (VAR_7->field == VAR_1)
  VAR_7->field = VAR_2;
 else if (VAR_7->field != VAR_2) {
  FUNC_5("Not supported field order(%d)\n", VAR_7->field);
  return -VAR_0;
 }

 VAR_9 = VAR_6->pix_max->target_rot_dis_w;
 VAR_10 = VAR_6->pix_max->target_rot_dis_h;

 VAR_11 = FUNC_1(VAR_6->pix_align->org_w) - 1;
 if (FUNC_3(VAR_8->color))
  VAR_12 = FUNC_1(VAR_6->pix_align->org_h) - 1;
 else
  VAR_12 = FUNC_1(VAR_6->pix_align->org_h) - 2;

 if (FUNC_0(VAR_4->type)) {
  VAR_13 = VAR_6->pix_min->org_w;
  VAR_14 = VAR_6->pix_min->org_h;
 } else {
  VAR_13 = VAR_6->pix_min->target_rot_dis_w;
  VAR_14 = VAR_6->pix_min->target_rot_dis_h;
  VAR_7->colorspace = VAR_3->out_colorspace;
 }

 FUNC_5("mod_x: %d, mod_y: %d, max_w: %d, max_h = %d",
   VAR_11, VAR_12, VAR_9, VAR_10);



 VAR_15 = VAR_7->width;
 VAR_16 = VAR_7->height;

 FUNC_7(&VAR_7->width, VAR_13, VAR_9, VAR_11,
  &VAR_7->height, VAR_14, VAR_10, VAR_12, 0);
 if (VAR_15 != VAR_7->width || VAR_16 != VAR_7->height)
  FUNC_5("Image size has been modified from %dx%d to %dx%d\n",
    VAR_15, VAR_16, VAR_7->width, VAR_7->height);

 VAR_7->num_planes = VAR_8->num_planes;

 if (FUNC_0(VAR_4->type))
  VAR_3->out_colorspace = VAR_7->colorspace;

 for (VAR_17 = 0; VAR_17 < VAR_7->num_planes; ++VAR_17) {
  struct v4l2_plane_pix_format *VAR_18 = &VAR_7->plane_fmt[VAR_17];
  u32 VAR_19 = VAR_18->bytesperline;

  if (VAR_8->num_comp == 1 &&
      (VAR_19 == 0 || (VAR_19 * 8 / VAR_8->depth[VAR_17]) < VAR_7->width))
   VAR_19 = VAR_7->width * VAR_8->depth[VAR_17] / 8;

  if (VAR_8->num_comp > 1 &&
      (VAR_19 == 0 || VAR_19 < VAR_7->width))
   VAR_19 = VAR_7->width;

  if (VAR_17 != 0 && VAR_8->num_comp == 3)
   VAR_19 /= 2;

  VAR_18->bytesperline = VAR_19;
  VAR_18->sizeimage = FUNC_4(VAR_7->width * VAR_7->height *
        VAR_8->depth[VAR_17] / 8,
        VAR_18->sizeimage);
  FUNC_5("[%d]: bpl: %d, sizeimage: %d",
    VAR_17, VAR_19, VAR_7->plane_fmt[VAR_17].sizeimage);
 }

 return 0;
}
