
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct media_pad* pads; } ;
struct v4l2_subdev {scalar_t__ grp_id; TYPE_1__ entity; } ;
struct media_pad {int flags; int entity; } ;
struct media_entity {struct media_pad* pads; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct media_pad* FUNC_1 (struct media_pad*) ;
 struct v4l2_subdev* FUNC_2 (int ) ;

struct v4l2_subdev *FUNC_3(struct media_entity *VAR_3)
{
 struct media_pad *VAR_4 = &VAR_3->pads[0];
 struct v4l2_subdev *VAR_5;

 while (VAR_4->flags & VAR_2) {

  VAR_4 = FUNC_1(VAR_4);
  if (!VAR_4 || !FUNC_0(VAR_4->entity))
   break;

  VAR_5 = FUNC_2(VAR_4->entity);

  if (VAR_5->grp_id == VAR_0 ||
      VAR_5->grp_id == VAR_1)
   return VAR_5;

  VAR_4 = &VAR_5->entity.pads[0];
 }
 return ((void*)0);
}
