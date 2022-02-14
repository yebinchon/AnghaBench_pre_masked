
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


struct media_entity {scalar_t__ num_pads; } ;
struct fimc_md {TYPE_5__** fimc; TYPE_1__* fimc_is; } ;
struct TYPE_14__ {struct media_entity entity; } ;
struct TYPE_15__ {TYPE_6__ vdev; } ;
struct TYPE_16__ {TYPE_7__ ve; } ;
struct TYPE_10__ {struct media_entity entity; } ;
struct fimc_isp {TYPE_8__ video_capture; TYPE_2__ subdev; } ;
struct TYPE_11__ {struct media_entity entity; } ;
struct TYPE_12__ {TYPE_3__ subdev; } ;
struct TYPE_13__ {TYPE_4__ vid_cap; } ;
struct TYPE_9__ {struct fimc_isp isp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct media_entity*,int ,struct media_entity*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct fimc_md *VAR_4)
{
 struct fimc_isp *VAR_5 = &VAR_4->fimc_is->isp;
 struct media_entity *VAR_6, *VAR_7;
 int VAR_8, VAR_9;

 VAR_6 = &VAR_5->subdev.entity;

 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  if (VAR_4->fimc[VAR_8] == ((void*)0))
   continue;


  VAR_7 = &VAR_4->fimc[VAR_8]->vid_cap.subdev.entity;
  VAR_9 = FUNC_0(VAR_6, VAR_1,
            VAR_7, VAR_3, 0);
  if (VAR_9)
   return VAR_9;
 }


 VAR_7 = &VAR_5->video_capture.ve.vdev.entity;


 if (VAR_7->num_pads == 0)
  return 0;

 return FUNC_0(VAR_6, VAR_0,
     VAR_7, 0, 0);
}
