
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_mbus_framefmt {scalar_t__ code; scalar_t__ height; int width; } ;
struct v4l2_subdev_format {size_t pad; int which; struct v4l2_mbus_framefmt format; } ;
struct v4l2_subdev {int entity; } ;
struct media_pad {struct media_entity* entity; } ;
struct media_entity {size_t num_pads; TYPE_4__* pads; } ;
struct fimc_pipeline {struct v4l2_subdev** subdevs; } ;
struct fimc_fmt {scalar_t__ mbus_code; int fourcc; } ;
struct TYPE_6__ {struct media_entity entity; } ;
struct TYPE_5__ {int pipe; } ;
struct TYPE_7__ {TYPE_2__ subdev; TYPE_1__ ve; } ;
struct fimc_dev {TYPE_3__ vid_cap; } ;
struct fimc_ctx {struct fimc_dev* fimc_dev; } ;
typedef int sfmt ;
struct TYPE_8__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int) ;
 struct fimc_fmt* FUNC_1 (struct fimc_ctx*,int *,scalar_t__*,int *,int *,int ) ;
 struct fimc_fmt* FUNC_2 (int *,scalar_t__*,int ,int ) ;
 struct media_entity* FUNC_3 (int *) ;
 struct media_pad* FUNC_4 (TYPE_4__*) ;
 struct v4l2_subdev* FUNC_5 (struct media_entity*) ;
 int FUNC_6 (struct v4l2_subdev_format*,int ,int) ;
 int VAR_8 ;
 struct fimc_pipeline* FUNC_7 (int ) ;
 int FUNC_8 (struct v4l2_subdev*,struct media_pad*,int ,int *,struct v4l2_subdev_format*) ;

__attribute__((used)) static int FUNC_9(struct fimc_ctx *VAR_9,
        struct v4l2_mbus_framefmt *VAR_10,
        struct fimc_fmt **VAR_11,
        bool VAR_12)
{
 struct fimc_dev *VAR_13 = VAR_9->fimc_dev;
 struct fimc_pipeline *VAR_14 = FUNC_7(VAR_13->vid_cap.ve.pipe);
 struct v4l2_subdev *VAR_15 = VAR_14->subdevs[VAR_4];
 struct v4l2_subdev_format VAR_16;
 struct v4l2_mbus_framefmt *VAR_17 = &VAR_16.format;
 struct media_entity *VAR_18;
 struct fimc_fmt *VAR_19;
 struct media_pad *VAR_20;
 int VAR_21, VAR_22 = 1;
 u32 VAR_23;

 if (FUNC_0(!VAR_15 || !VAR_10))
  return -VAR_0;

 FUNC_6(&VAR_16, 0, sizeof(VAR_16));
 VAR_16.format = *VAR_10;
 VAR_16.which = VAR_12 ? VAR_6 : VAR_7;

 VAR_18 = FUNC_3(&VAR_15->entity);

 while (1) {
  VAR_19 = FUNC_2(((void*)0), VAR_17->code != 0 ? &VAR_17->code : ((void*)0),
     VAR_3, VAR_22++);
  if (VAR_19 == ((void*)0)) {




   return -VAR_0;
  }
  VAR_17->code = VAR_10->code = VAR_19->mbus_code;


  while (VAR_18 != &VAR_13->vid_cap.subdev.entity) {
   VAR_15 = FUNC_5(VAR_18);

   VAR_16.pad = 0;
   VAR_21 = FUNC_8(VAR_15, VAR_20, VAR_8, ((void*)0), &VAR_16);
   if (VAR_21)
    return VAR_21;

   if (VAR_18->pads[0].flags & VAR_5) {
    VAR_16.pad = VAR_18->num_pads - 1;
    VAR_17->code = VAR_10->code;
    VAR_21 = FUNC_8(VAR_15, VAR_20, VAR_8, ((void*)0),
         &VAR_16);
    if (VAR_21)
     return VAR_21;
   }

   VAR_20 = FUNC_4(&VAR_18->pads[VAR_16.pad]);
   if (!VAR_20)
    return -VAR_0;
   VAR_18 = VAR_20->entity;
  }

  if (VAR_17->code != VAR_10->code)
   continue;

  VAR_23 = VAR_19->fourcc;
  VAR_10->width = VAR_17->width;
  VAR_10->height = VAR_17->height;
  VAR_19 = FUNC_1(VAR_9, &VAR_10->width, &VAR_10->height,
     ((void*)0), &VAR_23, VAR_1);
  VAR_19 = FUNC_1(VAR_9, &VAR_10->width, &VAR_10->height,
     ((void*)0), &VAR_23, VAR_2);
  if (VAR_19 && VAR_19->mbus_code)
   VAR_17->code = VAR_19->mbus_code;
  if (VAR_17->width != VAR_10->width || VAR_17->height != VAR_10->height)
   continue;
  VAR_10->code = VAR_17->code;
  break;
 }

 if (VAR_11 && VAR_19)
  *VAR_11 = VAR_19;
 *VAR_10 = *VAR_17;

 return 0;
}
