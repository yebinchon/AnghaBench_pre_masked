
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int height; int width; scalar_t__ top; scalar_t__ left; } ;
struct vpe_q_data {int height; scalar_t__ field; int nplanes; int flags; int * bytesperline; TYPE_4__* fmt; int width; TYPE_3__ c_rect; int * sizeimage; int colorspace; } ;
struct TYPE_6__ {int m2m_ctx; } ;
struct vpe_ctx {int dev; TYPE_2__ fh; } ;
struct vb2_queue {int dummy; } ;
struct v4l2_plane_pix_format {int sizeimage; int bytesperline; } ;
struct v4l2_pix_format_mplane {int height; scalar_t__ field; int num_planes; struct v4l2_plane_pix_format* plane_fmt; int colorspace; int width; } ;
struct TYPE_5__ {struct v4l2_pix_format_mplane pix_mp; } ;
struct v4l2_format {int type; TYPE_1__ fmt; } ;
struct TYPE_8__ {int fourcc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 TYPE_4__* FUNC_0 (struct v4l2_format*) ;
 struct vpe_q_data* FUNC_1 (struct vpe_ctx*,int ) ;
 struct vb2_queue* FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (struct vb2_queue*) ;
 int FUNC_4 (int ,char*,int ,...) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static int FUNC_6(struct vpe_ctx *VAR_9, struct v4l2_format *VAR_10)
{
 struct v4l2_pix_format_mplane *VAR_11 = &VAR_10->fmt.pix_mp;
 struct v4l2_plane_pix_format *VAR_12;
 struct vpe_q_data *VAR_13;
 struct vb2_queue *VAR_14;
 int VAR_15;

 VAR_14 = FUNC_2(VAR_9->fh.m2m_ctx, VAR_10->type);
 if (!VAR_14)
  return -VAR_1;

 if (FUNC_3(VAR_14)) {
  FUNC_5(VAR_9->dev, "queue busy\n");
  return -VAR_0;
 }

 VAR_13 = FUNC_1(VAR_9, VAR_10->type);
 if (!VAR_13)
  return -VAR_1;

 VAR_13->fmt = FUNC_0(VAR_10);
 VAR_13->width = VAR_11->width;
 VAR_13->height = VAR_11->height;
 VAR_13->colorspace = VAR_11->colorspace;
 VAR_13->field = VAR_11->field;
 VAR_13->nplanes = VAR_11->num_planes;

 for (VAR_15 = 0; VAR_15 < VAR_11->num_planes; VAR_15++) {
  VAR_12 = &VAR_11->plane_fmt[VAR_15];

  VAR_13->bytesperline[VAR_15] = VAR_12->bytesperline;
  VAR_13->sizeimage[VAR_15] = VAR_12->sizeimage;
 }

 VAR_13->c_rect.left = 0;
 VAR_13->c_rect.top = 0;
 VAR_13->c_rect.width = VAR_13->width;
 VAR_13->c_rect.height = VAR_13->height;

 if (VAR_13->field == VAR_5)
  VAR_13->flags |= VAR_2;
 else if (VAR_13->field == VAR_6)
  VAR_13->flags |= VAR_3;
 else
  VAR_13->flags &= ~VAR_4;


 if (VAR_13->flags & VAR_3)
  VAR_13->c_rect.height /= 2;

 FUNC_4(VAR_9->dev, "Setting format for type %d, wxh: %dx%d, fmt: %d bpl_y %d",
  VAR_10->type, VAR_13->width, VAR_13->height, VAR_13->fmt->fourcc,
  VAR_13->bytesperline[VAR_8]);
 if (VAR_13->nplanes == 2)
  FUNC_4(VAR_9->dev, " bpl_uv %d\n",
   VAR_13->bytesperline[VAR_7]);

 return 0;
}
