
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct v4l2_subdev {scalar_t__ dev; int entity; int name; } ;
struct media_pad {int flags; struct media_entity* entity; } ;
struct media_entity {struct media_pad* pads; } ;
struct isp_pipeline {TYPE_2__* output; } ;
struct TYPE_16__ {struct v4l2_subdev subdev; } ;
struct TYPE_15__ {struct v4l2_subdev subdev; } ;
struct TYPE_14__ {struct v4l2_subdev subdev; } ;
struct TYPE_13__ {struct v4l2_subdev subdev; } ;
struct TYPE_12__ {struct v4l2_subdev subdev; } ;
struct TYPE_11__ {struct v4l2_subdev subdev; } ;
struct isp_device {scalar_t__ dev; int stop_failure; int crashed; TYPE_8__ isp_prev; TYPE_7__ isp_ccdc; TYPE_6__ isp_res; TYPE_5__ isp_hist; TYPE_4__ isp_af; TYPE_3__ isp_aewb; } ;
struct TYPE_9__ {struct media_entity entity; } ;
struct TYPE_10__ {TYPE_1__ video; struct isp_device* isp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,char*,int ) ;
 int FUNC_1 (struct media_entity*) ;
 int FUNC_2 (struct isp_device*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *,int *) ;
 struct media_pad* FUNC_4 (struct media_pad*) ;
 struct v4l2_subdev* FUNC_5 (struct media_entity*) ;
 int VAR_5 ;
 int FUNC_6 (struct v4l2_subdev*,int ,int ,int ) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_7(struct isp_pipeline *VAR_7)
{
 struct isp_device *VAR_8 = VAR_7->output->isp;
 struct media_entity *VAR_9;
 struct media_pad *VAR_10;
 struct v4l2_subdev *VAR_11;
 int VAR_12 = 0;
 int VAR_13;





 VAR_9 = &VAR_7->output->video.entity;
 while (1) {
  VAR_10 = &VAR_9->pads[0];
  if (!(VAR_10->flags & VAR_1))
   break;

  VAR_10 = FUNC_4(VAR_10);
  if (!VAR_10 || !FUNC_1(VAR_10->entity))
   break;

  VAR_9 = VAR_10->entity;
  VAR_11 = FUNC_5(VAR_9);

  if (VAR_11 == &VAR_8->isp_ccdc.subdev) {
   FUNC_6(&VAR_8->isp_aewb.subdev,
      VAR_6, VAR_5, 0);
   FUNC_6(&VAR_8->isp_af.subdev,
      VAR_6, VAR_5, 0);
   FUNC_6(&VAR_8->isp_hist.subdev,
      VAR_6, VAR_5, 0);
  }

  VAR_13 = FUNC_6(VAR_11, VAR_6, VAR_5, 0);

  if (VAR_11 == &VAR_8->isp_res.subdev)
   VAR_13 |= FUNC_2(VAR_8, VAR_4);
  else if (VAR_11 == &VAR_8->isp_prev.subdev)
   VAR_13 |= FUNC_2(VAR_8, VAR_3);
  else if (VAR_11 == &VAR_8->isp_ccdc.subdev)
   VAR_13 |= FUNC_2(VAR_8, VAR_2);
  if (VAR_13) {
   FUNC_0(VAR_8->dev, "Unable to stop %s\n", VAR_11->name);
   VAR_8->stop_failure = 1;
   if (VAR_11 == &VAR_8->isp_prev.subdev)
    FUNC_3(&VAR_8->crashed,
            &VAR_11->entity);
   VAR_12 = -VAR_0;
  }


  if (VAR_11->dev != VAR_8->dev)
   break;
 }

 return VAR_12;
}
