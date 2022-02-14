
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct rvin_group {TYPE_1__* csi; } ;
struct media_entity {int dummy; } ;
struct TYPE_2__ {struct v4l2_subdev* subdev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 struct v4l2_subdev* FUNC_0 (struct media_entity*) ;

__attribute__((used)) static int FUNC_1(struct rvin_group *VAR_2,
           struct media_entity *VAR_3)
{
 struct v4l2_subdev *VAR_4;
 unsigned int VAR_5;

 VAR_4 = FUNC_0(VAR_3);

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
  if (VAR_2->csi[VAR_5].subdev == VAR_4)
   return VAR_5;

 return -VAR_0;
}
