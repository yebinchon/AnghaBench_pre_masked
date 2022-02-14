
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct media_pad {int flags; struct media_entity* entity; } ;
struct media_entity {struct media_pad* pads; } ;
struct iss_pipeline {int state; int do_propagation; TYPE_4__* output; int lock; int ent_enum; } ;
struct TYPE_7__ {struct v4l2_subdev subdev; } ;
struct TYPE_6__ {struct v4l2_subdev subdev; } ;
struct iss_device {TYPE_3__ csi2b; TYPE_2__ csi2a; int crashed; } ;
typedef enum iss_pipeline_stream_state { ____Placeholder_iss_pipeline_stream_state } iss_pipeline_stream_state ;
struct TYPE_5__ {struct media_entity entity; } ;
struct TYPE_8__ {struct iss_device* iss; TYPE_1__ video; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct media_entity*) ;
 int FUNC_1 (struct iss_pipeline*,struct media_entity*) ;
 int FUNC_2 (struct iss_device*) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 struct media_pad* FUNC_4 (struct media_pad*) ;
 struct v4l2_subdev* FUNC_5 (struct media_entity*) ;
 int VAR_5 ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (struct v4l2_subdev*,int ,int ,int) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_9(struct iss_pipeline *VAR_7,
          enum iss_pipeline_stream_state VAR_8)
{
 struct iss_device *VAR_9 = VAR_7->output->iss;
 struct media_entity *VAR_10;
 struct media_pad *VAR_11;
 struct v4l2_subdev *VAR_12;
 unsigned long VAR_13;
 int VAR_14;







 if (FUNC_3(&VAR_7->ent_enum, &VAR_9->crashed))
  return -VAR_0;

 FUNC_6(&VAR_7->lock, VAR_13);
 VAR_7->state &= ~(VAR_2 | VAR_3);
 FUNC_7(&VAR_7->lock, VAR_13);

 VAR_7->do_propagation = 0;

 VAR_10 = &VAR_7->output->video.entity;
 while (1) {
  VAR_11 = &VAR_10->pads[0];
  if (!(VAR_11->flags & VAR_4))
   break;

  VAR_11 = FUNC_4(VAR_11);
  if (!VAR_11 || !FUNC_0(VAR_11->entity))
   break;

  VAR_10 = VAR_11->entity;
  VAR_12 = FUNC_5(VAR_10);

  VAR_14 = FUNC_8(VAR_12, VAR_6, VAR_5, VAR_8);
  if (VAR_14 < 0 && VAR_14 != -VAR_1) {
   FUNC_1(VAR_7, VAR_10);
   return VAR_14;
  }

  if (VAR_12 == &VAR_9->csi2a.subdev ||
      VAR_12 == &VAR_9->csi2b.subdev)
   VAR_7->do_propagation = 1;
 }

 FUNC_2(VAR_7->output->iss);
 return 0;
}
