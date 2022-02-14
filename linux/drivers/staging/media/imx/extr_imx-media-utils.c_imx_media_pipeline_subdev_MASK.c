
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct media_entity {int dummy; } ;


 int VAR_0 ;
 struct v4l2_subdev* FUNC_0 (int ) ;
 struct media_entity* FUNC_1 (struct media_entity*,int ,int ,int) ;
 struct v4l2_subdev* FUNC_2 (struct media_entity*) ;

struct v4l2_subdev *
FUNC_3(struct media_entity *VAR_1, u32 VAR_2,
     bool VAR_3)
{
 struct media_entity *VAR_4;

 VAR_4 = FUNC_1(VAR_1, VAR_2, 0, VAR_3);
 if (!VAR_4)
  return FUNC_0(-VAR_0);

 return FUNC_2(VAR_4);
}
