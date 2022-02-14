
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int u8 ;
typedef int u32 ;
struct uvc_video_chain {int dev; } ;
struct media_entity {int dummy; } ;
struct TYPE_6__ {struct media_entity entity; } ;
struct uvc_entity {unsigned int num_pads; TYPE_3__ subdev; TYPE_2__* vdev; int * baSourceID; TYPE_1__* pads; } ;
struct TYPE_5__ {struct media_entity entity; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct uvc_entity*) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct media_entity*,unsigned int,struct media_entity*,unsigned int,int const) ;
 struct uvc_entity* FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct uvc_video_chain *VAR_5,
        struct uvc_entity *VAR_6)
{
 const u32 VAR_7 = VAR_1 | VAR_2;
 struct media_entity *VAR_8;
 unsigned int VAR_9;
 int VAR_10;

 VAR_8 = (FUNC_0(VAR_6) == VAR_4)
      ? (VAR_6->vdev ? &VAR_6->vdev->entity : ((void*)0))
      : &VAR_6->subdev.entity;
 if (VAR_8 == ((void*)0))
  return 0;

 for (VAR_9 = 0; VAR_9 < VAR_6->num_pads; ++VAR_9) {
  struct media_entity *VAR_11;
  struct uvc_entity *VAR_12;
  u8 VAR_13;

  if (!(VAR_6->pads[VAR_9].flags & VAR_3))
   continue;

  VAR_12 = FUNC_2(VAR_5->dev, VAR_6->baSourceID[VAR_9]);
  if (VAR_12 == ((void*)0))
   return -VAR_0;

  VAR_11 = (FUNC_0(VAR_12) == VAR_4)
         ? (VAR_12->vdev ? &VAR_12->vdev->entity : ((void*)0))
         : &VAR_12->subdev.entity;
  if (VAR_11 == ((void*)0))
   continue;

  VAR_13 = VAR_12->num_pads - 1;
  VAR_10 = FUNC_1(VAR_11, VAR_13,
            VAR_8, VAR_9, VAR_7);
  if (VAR_10 < 0)
   return VAR_10;
 }

 return 0;
}
