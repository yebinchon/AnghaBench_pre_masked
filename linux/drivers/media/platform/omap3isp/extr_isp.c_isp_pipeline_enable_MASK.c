
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct v4l2_subdev {scalar_t__ dev; } ;
struct media_pad {int flags; struct media_entity* entity; } ;
struct media_entity {struct media_pad* pads; } ;
struct isp_pipeline {int state; int do_propagation; TYPE_2__* output; int lock; int ent_enum; } ;
struct TYPE_12__ {struct v4l2_subdev subdev; } ;
struct TYPE_11__ {struct v4l2_subdev subdev; } ;
struct TYPE_10__ {struct v4l2_subdev subdev; } ;
struct TYPE_9__ {struct v4l2_subdev subdev; } ;
struct isp_device {scalar_t__ dev; TYPE_6__ isp_hist; TYPE_5__ isp_af; TYPE_4__ isp_aewb; TYPE_3__ isp_ccdc; int crashed; } ;
typedef enum isp_pipeline_stream_state { ____Placeholder_isp_pipeline_stream_state } isp_pipeline_stream_state ;
struct TYPE_7__ {struct media_entity entity; } ;
struct TYPE_8__ {TYPE_1__ video; struct isp_device* isp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct media_entity*) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 struct media_pad* FUNC_2 (struct media_pad*) ;
 struct v4l2_subdev* FUNC_3 (struct media_entity*) ;
 int VAR_5 ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct v4l2_subdev*,int ,int ,int) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_7(struct isp_pipeline *VAR_7,
          enum isp_pipeline_stream_state VAR_8)
{
 struct isp_device *VAR_9 = VAR_7->output->isp;
 struct media_entity *VAR_10;
 struct media_pad *VAR_11;
 struct v4l2_subdev *VAR_12;
 unsigned long VAR_13;
 int VAR_14;






 if (FUNC_1(&VAR_7->ent_enum, &VAR_9->crashed))
  return -VAR_0;

 FUNC_4(&VAR_7->lock, VAR_13);
 VAR_7->state &= ~(VAR_2 | VAR_3);
 FUNC_5(&VAR_7->lock, VAR_13);

 VAR_7->do_propagation = 0;

 VAR_10 = &VAR_7->output->video.entity;
 while (1) {
  VAR_11 = &VAR_10->pads[0];
  if (!(VAR_11->flags & VAR_4))
   break;

  VAR_11 = FUNC_2(VAR_11);
  if (!VAR_11 || !FUNC_0(VAR_11->entity))
   break;

  VAR_10 = VAR_11->entity;
  VAR_12 = FUNC_3(VAR_10);

  VAR_14 = FUNC_6(VAR_12, VAR_6, VAR_5, VAR_8);
  if (VAR_14 < 0 && VAR_14 != -VAR_1)
   return VAR_14;

  if (VAR_12 == &VAR_9->isp_ccdc.subdev) {
   FUNC_6(&VAR_9->isp_aewb.subdev, VAR_6,
     VAR_5, VAR_8);
   FUNC_6(&VAR_9->isp_af.subdev, VAR_6,
     VAR_5, VAR_8);
   FUNC_6(&VAR_9->isp_hist.subdev, VAR_6,
     VAR_5, VAR_8);
   VAR_7->do_propagation = 1;
  }


  if (VAR_12->dev != VAR_9->dev)
   break;
 }

 return 0;
}
