
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct media_pad {int entity; } ;
struct media_entity {unsigned int num_pads; TYPE_1__* pads; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct media_pad* FUNC_1 (TYPE_1__*) ;
 struct v4l2_subdev* FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (struct v4l2_subdev*,int ,int ,int) ;
 int VAR_4 ;

int FUNC_4(struct media_entity *VAR_5, int VAR_6)
{
 struct v4l2_subdev *VAR_7;
 struct media_pad *VAR_8;
 unsigned int VAR_9;
 int VAR_10;

 for (VAR_9 = 0; VAR_9 < VAR_5->num_pads; VAR_9++) {
  if (VAR_5->pads[VAR_9].flags & VAR_2)
   continue;


  VAR_8 = FUNC_1(&VAR_5->pads[VAR_9]);
  if (!VAR_8)
   continue;

  if (!FUNC_0(VAR_8->entity))
   return -VAR_0;

  VAR_7 = FUNC_2(VAR_8->entity);
  VAR_10 = FUNC_3(VAR_7, VAR_4, VAR_3, VAR_6);
  if (VAR_10 && VAR_10 != -VAR_1)
   return VAR_10;
 }

 return 0;
}
