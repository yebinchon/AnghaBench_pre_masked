
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct media_entity {int num_pads; struct media_pad* pads; } ;
struct v4l2_subdev {int grp_id; struct media_entity entity; } ;
struct media_pad {int flags; int entity; } ;
struct fimc_pipeline {struct v4l2_subdev** subdevs; } ;
struct fimc_md {int dummy; } ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct fimc_md*,struct v4l2_subdev*,struct v4l2_subdev*) ;
 struct fimc_md* FUNC_1 (struct media_entity*) ;
 int FUNC_2 (int ) ;
 struct media_pad* FUNC_3 (struct media_pad*) ;
 struct v4l2_subdev* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct fimc_pipeline *VAR_7,
     struct media_entity *VAR_8)
{
 struct fimc_md *VAR_9 = FUNC_1(VAR_8);
 struct v4l2_subdev *VAR_10;
 struct v4l2_subdev *VAR_11 = ((void*)0);
 int VAR_12;

 for (VAR_12 = 0; VAR_12 < VAR_4; VAR_12++)
  VAR_7->subdevs[VAR_12] = ((void*)0);

 while (1) {
  struct media_pad *VAR_13 = ((void*)0);


  for (VAR_12 = 0; VAR_12 < VAR_8->num_pads; VAR_12++) {
   struct media_pad *VAR_14 = &VAR_8->pads[VAR_12];
   if (!(VAR_14->flags & VAR_6))
    continue;
   VAR_13 = FUNC_3(VAR_14);
   if (VAR_13)
    break;
  }

  if (!VAR_13 || !FUNC_2(VAR_13->entity))
   break;
  VAR_10 = FUNC_4(VAR_13->entity);

  switch (VAR_10->grp_id) {
  case 128:
   VAR_11 = VAR_10;

  case 130:
   VAR_7->subdevs[VAR_5] = VAR_10;
   break;
  case 133:
   VAR_7->subdevs[VAR_0] = VAR_10;
   break;
  case 129:
   VAR_7->subdevs[VAR_2] = VAR_10;
   break;
  case 132:
   VAR_7->subdevs[VAR_1] = VAR_10;
   break;
  case 131:
   VAR_7->subdevs[VAR_3] = VAR_10;
   break;
  default:
   break;
  }
  VAR_8 = &VAR_10->entity;
  if (VAR_8->num_pads == 1)
   break;
 }

 if (VAR_11 && VAR_7->subdevs[VAR_1])
  FUNC_0(VAR_9, VAR_11, VAR_7->subdevs[VAR_1]);
}
