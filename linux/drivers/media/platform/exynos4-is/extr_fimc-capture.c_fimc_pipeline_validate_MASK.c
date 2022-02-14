
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ width; scalar_t__ height; scalar_t__ code; } ;
struct v4l2_subdev_format {TYPE_3__ format; void* which; int pad; } ;
struct TYPE_7__ {int num_pads; struct media_pad* pads; } ;
struct v4l2_subdev {TYPE_2__ entity; } ;
struct v4l2_plane_pix_format {scalar_t__ sizeimage; } ;
struct media_pad {int flags; int index; int entity; } ;
struct TYPE_6__ {int pipe; } ;
struct fimc_vid_cap {TYPE_4__* ctx; struct v4l2_subdev subdev; TYPE_1__ ve; } ;
struct fimc_pipeline {struct v4l2_subdev** subdevs; } ;
struct fimc_frame {scalar_t__ f_width; scalar_t__ f_height; scalar_t__* payload; TYPE_5__* fmt; } ;
struct fimc_dev {struct fimc_vid_cap vid_cap; } ;
struct TYPE_10__ {scalar_t__ mbus_code; unsigned int memplanes; } ;
struct TYPE_9__ {struct fimc_frame d_frame; struct fimc_frame s_frame; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int FUNC_0 (struct v4l2_subdev*,struct v4l2_plane_pix_format*,unsigned int,int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 struct media_pad* FUNC_3 (struct media_pad*) ;
 struct v4l2_subdev* FUNC_4 (int ) ;
 int VAR_7 ;
 struct fimc_pipeline* FUNC_5 (int ) ;
 int FUNC_6 (struct v4l2_subdev*,int ,int ,int *,struct v4l2_subdev_format*) ;

__attribute__((used)) static int FUNC_7(struct fimc_dev *VAR_8)
{
 struct v4l2_subdev_format VAR_9, VAR_10;
 struct fimc_vid_cap *VAR_11 = &VAR_8->vid_cap;
 struct v4l2_subdev *VAR_12 = &VAR_11->subdev;
 struct fimc_pipeline *VAR_13 = FUNC_5(VAR_11->ve.pipe);
 struct media_pad *VAR_14, *VAR_15;
 int VAR_16, VAR_17;

 while (1) {





  VAR_15 = ((void*)0);

  for (VAR_16 = 0; VAR_16 < VAR_12->entity.num_pads; VAR_16++) {
   struct media_pad *VAR_18 = &VAR_12->entity.pads[VAR_16];

   if (VAR_18->flags & VAR_4) {
    VAR_14 = VAR_18;
    VAR_15 = FUNC_3(VAR_14);
    if (VAR_15)
     break;
   }
  }

  if (!VAR_15 || !FUNC_2(VAR_15->entity))
   break;


  if (VAR_12 == &VAR_11->subdev) {
   struct fimc_frame *VAR_19 = &VAR_11->ctx->s_frame;
   VAR_9.format.width = VAR_19->f_width;
   VAR_9.format.height = VAR_19->f_height;
   VAR_9.format.code = VAR_19->fmt ? VAR_19->fmt->mbus_code : 0;
  } else {
   VAR_9.pad = VAR_14->index;
   VAR_9.which = VAR_5;
   VAR_17 = FUNC_6(VAR_12, VAR_7, VAR_6, ((void*)0), &VAR_9);
   if (VAR_17 < 0 && VAR_17 != -VAR_0)
    return -VAR_1;
  }


  VAR_12 = FUNC_4(VAR_15->entity);
  VAR_10.pad = VAR_15->index;
  VAR_10.which = VAR_5;
  VAR_17 = FUNC_6(VAR_12, VAR_7, VAR_6, ((void*)0), &VAR_10);
  if (VAR_17 < 0 && VAR_17 != -VAR_0)
   return -VAR_1;

  if (VAR_10.format.width != VAR_9.format.width ||
      VAR_10.format.height != VAR_9.format.height ||
      VAR_10.format.code != VAR_9.format.code)
   return -VAR_1;

  if (VAR_12 == VAR_13->subdevs[VAR_3] &&
      FUNC_1(VAR_10.format.code)) {
   struct v4l2_plane_pix_format VAR_20[VAR_2];
   struct fimc_frame *VAR_21 = &VAR_11->ctx->d_frame;
   unsigned int VAR_22;

   VAR_17 = FUNC_0(VAR_12, VAR_20,
        VAR_21->fmt->memplanes,
        0);
   if (VAR_17 < 0)
    return -VAR_1;

   for (VAR_22 = 0; VAR_22 < VAR_21->fmt->memplanes; VAR_22++)
    if (VAR_21->payload[VAR_22] < VAR_20[VAR_22].sizeimage)
     return -VAR_1;
  }
 }
 return 0;
}
