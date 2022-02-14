
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


struct media_entity {int dummy; } ;
struct fimc_md {TYPE_6__* fimc_is; struct fimc_lite** fimc_lite; } ;
struct TYPE_8__ {struct media_entity entity; } ;
struct TYPE_9__ {TYPE_2__ vdev; } ;
struct TYPE_7__ {struct media_entity entity; } ;
struct fimc_lite {TYPE_3__ ve; TYPE_1__ subdev; } ;
struct TYPE_10__ {struct media_entity entity; } ;
struct TYPE_11__ {TYPE_4__ subdev; } ;
struct TYPE_12__ {TYPE_5__ isp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct media_entity*,int ,struct media_entity*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct fimc_md *VAR_3)
{
 struct media_entity *VAR_4, *VAR_5;
 int VAR_6, VAR_7 = 0;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  struct fimc_lite *VAR_8 = VAR_3->fimc_lite[VAR_6];

  if (VAR_8 == ((void*)0))
   continue;

  VAR_4 = &VAR_8->subdev.entity;
  VAR_5 = &VAR_8->ve.vdev.entity;

  VAR_7 = FUNC_0(VAR_4, VAR_1,
            VAR_5, 0, 0);
  if (VAR_7)
   break;

  VAR_5 = &VAR_3->fimc_is->isp.subdev.entity;
  VAR_7 = FUNC_0(VAR_4, VAR_2,
            VAR_5, 0, 0);
  if (VAR_7)
   break;
 }

 return VAR_7;
}
