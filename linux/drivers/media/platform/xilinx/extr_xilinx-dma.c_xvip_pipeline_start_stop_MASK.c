
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xvip_pipeline {struct xvip_dma* output; } ;
struct media_entity {struct media_pad* pads; } ;
struct TYPE_2__ {struct media_entity entity; } ;
struct xvip_dma {TYPE_1__ video; } ;
struct v4l2_subdev {int dummy; } ;
struct media_pad {int flags; struct media_entity* entity; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct media_entity*) ;
 struct media_pad* FUNC_1 (struct media_pad*) ;
 struct v4l2_subdev* FUNC_2 (struct media_entity*) ;
 int VAR_2 ;
 int FUNC_3 (struct v4l2_subdev*,int ,int ,int) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(struct xvip_pipeline *VAR_4, bool VAR_5)
{
 struct xvip_dma *VAR_6 = VAR_4->output;
 struct media_entity *VAR_7;
 struct media_pad *VAR_8;
 struct v4l2_subdev *VAR_9;
 int VAR_10;

 VAR_7 = &VAR_6->video.entity;
 while (1) {
  VAR_8 = &VAR_7->pads[0];
  if (!(VAR_8->flags & VAR_1))
   break;

  VAR_8 = FUNC_1(VAR_8);
  if (!VAR_8 || !FUNC_0(VAR_8->entity))
   break;

  VAR_7 = VAR_8->entity;
  VAR_9 = FUNC_2(VAR_7);

  VAR_10 = FUNC_3(VAR_9, VAR_3, VAR_2, VAR_5);
  if (VAR_5 && VAR_10 < 0 && VAR_10 != -VAR_0)
   return VAR_10;
 }

 return 0;
}
