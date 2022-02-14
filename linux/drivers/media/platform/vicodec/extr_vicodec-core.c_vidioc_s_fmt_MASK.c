
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct vicodec_q_data {TYPE_4__* info; int coded_height; int coded_width; int sizeimage; } ;
struct TYPE_6__ {int m2m_ctx; } ;
struct vicodec_ctx {int dev; int is_enc; TYPE_1__ fh; } ;
struct vb2_queue {int dummy; } ;
struct v4l2_pix_format_mplane {TYPE_3__* plane_fmt; int height; int width; int pixelformat; } ;
struct v4l2_pix_format {int sizeimage; int height; int width; int pixelformat; } ;
struct TYPE_7__ {struct v4l2_pix_format_mplane pix_mp; struct v4l2_pix_format pix; } ;
struct v4l2_format {int type; TYPE_2__ fmt; } ;
struct TYPE_9__ {int id; } ;
struct TYPE_8__ {int sizeimage; } ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int,int ,int ,int ) ;
 void* FUNC_2 (int ) ;
 struct vicodec_q_data* FUNC_3 (struct vicodec_ctx*,int) ;
 TYPE_4__ VAR_4 ;
 TYPE_4__ VAR_5 ;
 struct vb2_queue* FUNC_4 (int ,int) ;
 int FUNC_5 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_6(struct vicodec_ctx *VAR_6, struct v4l2_format *VAR_7)
{
 struct vicodec_q_data *VAR_8;
 struct vb2_queue *VAR_9;
 bool VAR_10 = 1;
 struct v4l2_pix_format_mplane *VAR_11;
 struct v4l2_pix_format *VAR_12;

 VAR_9 = FUNC_4(VAR_6->fh.m2m_ctx, VAR_7->type);
 if (!VAR_9)
  return -VAR_1;

 VAR_8 = FUNC_3(VAR_6, VAR_7->type);
 if (!VAR_8)
  return -VAR_1;

 switch (VAR_7->type) {
 case 131:
 case 129:
  VAR_12 = &VAR_7->fmt.pix;
  if (VAR_6->is_enc && FUNC_0(VAR_7->type))
   VAR_10 =
    !VAR_8->info ||
    VAR_8->info->id != VAR_12->pixelformat ||
    VAR_8->coded_width != VAR_12->width ||
    VAR_8->coded_height != VAR_12->height;

  if (FUNC_5(VAR_9) && VAR_10)
   return -VAR_0;

  if (VAR_12->pixelformat == VAR_2)
   VAR_8->info = &VAR_4;
  else if (VAR_12->pixelformat == VAR_3)
   VAR_8->info = &VAR_5;
  else
   VAR_8->info = FUNC_2(VAR_12->pixelformat);
  VAR_8->coded_width = VAR_12->width;
  VAR_8->coded_height = VAR_12->height;
  VAR_8->sizeimage = VAR_12->sizeimage;
  break;
 case 130:
 case 128:
  VAR_11 = &VAR_7->fmt.pix_mp;
  if (VAR_6->is_enc && FUNC_0(VAR_7->type))
   VAR_10 =
    !VAR_8->info ||
    VAR_8->info->id != VAR_11->pixelformat ||
    VAR_8->coded_width != VAR_11->width ||
    VAR_8->coded_height != VAR_11->height;

  if (FUNC_5(VAR_9) && VAR_10)
   return -VAR_0;

  if (VAR_11->pixelformat == VAR_2)
   VAR_8->info = &VAR_4;
  else if (VAR_11->pixelformat == VAR_3)
   VAR_8->info = &VAR_5;
  else
   VAR_8->info = FUNC_2(VAR_11->pixelformat);
  VAR_8->coded_width = VAR_11->width;
  VAR_8->coded_height = VAR_11->height;
  VAR_8->sizeimage = VAR_11->plane_fmt[0].sizeimage;
  break;
 default:
  return -VAR_1;
 }

 FUNC_1(VAR_6->dev,
  "Setting format for type %d, coded wxh: %dx%d, fourcc: 0x%08x\n",
  VAR_7->type, VAR_8->coded_width, VAR_8->coded_height,
  VAR_8->info->id);

 return 0;
}
