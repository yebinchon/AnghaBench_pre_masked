
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


struct v4l2_subdev {int dummy; } ;
struct media_entity {int name; int * pads; } ;
struct fimc_source_info {scalar_t__ fimc_bus_type; } ;
struct fimc_md {int v4l2_dev; TYPE_6__** fimc_lite; TYPE_4__** fimc; } ;
struct TYPE_11__ {struct media_entity entity; } ;
struct TYPE_12__ {TYPE_5__ subdev; } ;
struct TYPE_8__ {struct media_entity entity; } ;
struct TYPE_9__ {TYPE_2__ subdev; } ;
struct TYPE_10__ {TYPE_3__ vid_cap; TYPE_1__* variant; } ;
struct TYPE_7__ {int has_cam_if; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct media_entity*,int,struct media_entity*,int ,unsigned int) ;
 int FUNC_1 (struct media_entity*,int ,int *,int *,unsigned int) ;
 struct fimc_source_info* FUNC_2 (struct v4l2_subdev*) ;
 int FUNC_3 (int *,char*,int ,char,...) ;

__attribute__((used)) static int FUNC_4(struct fimc_md *VAR_7,
         struct media_entity *VAR_8,
         struct v4l2_subdev *VAR_9,
         int VAR_10, int VAR_11)
{
 struct fimc_source_info *VAR_12 = ((void*)0);
 struct media_entity *VAR_13;
 unsigned int VAR_14 = 0;
 int VAR_15, VAR_16 = 0;

 if (VAR_9) {
  VAR_12 = FUNC_2(VAR_9);

  if (VAR_12 && VAR_12->fimc_bus_type == VAR_0)
   VAR_16 = 1;
 }

 for (VAR_15 = 0; !VAR_16 && VAR_15 < VAR_2; VAR_15++) {
  if (!VAR_7->fimc[VAR_15])
   continue;




  if (!VAR_7->fimc[VAR_15]->variant->has_cam_if)
   continue;

  VAR_14 = ((1 << VAR_15) & VAR_11) ? VAR_5 : 0;

  VAR_13 = &VAR_7->fimc[VAR_15]->vid_cap.subdev.entity;
  VAR_16 = FUNC_0(VAR_8, VAR_10, VAR_13,
           VAR_3, VAR_14);
  if (VAR_16)
   return VAR_16;


  VAR_16 = FUNC_1(VAR_13, VAR_6, &VAR_13->pads[0],
     &VAR_8->pads[VAR_10], VAR_14);
  if (VAR_16)
   break;

  FUNC_3(&VAR_7->v4l2_dev, "created link [%s] %c> [%s]\n",
     VAR_8->name, VAR_14 ? '=' : '-', VAR_13->name);
 }

 for (VAR_15 = 0; VAR_15 < VAR_1; VAR_15++) {
  if (!VAR_7->fimc_lite[VAR_15])
   continue;

  VAR_13 = &VAR_7->fimc_lite[VAR_15]->subdev.entity;
  VAR_16 = FUNC_0(VAR_8, VAR_10, VAR_13,
            VAR_4, 0);
  if (VAR_16)
   return VAR_16;


  VAR_16 = FUNC_1(VAR_13, VAR_6, &VAR_13->pads[0],
     &VAR_8->pads[VAR_10], 0);
  if (VAR_16)
   break;

  FUNC_3(&VAR_7->v4l2_dev, "created link [%s] -> [%s]\n",
     VAR_8->name, VAR_13->name);
 }
 return 0;
}
