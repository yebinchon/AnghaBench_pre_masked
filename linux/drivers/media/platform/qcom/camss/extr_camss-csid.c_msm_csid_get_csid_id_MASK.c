
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_subdev {int dummy; } ;
struct media_entity {int dummy; } ;
struct csid_device {int id; } ;


 struct v4l2_subdev* FUNC_0 (struct media_entity*) ;
 struct csid_device* FUNC_1 (struct v4l2_subdev*) ;

void FUNC_2(struct media_entity *VAR_0, u8 *VAR_1)
{
 struct v4l2_subdev *VAR_2 = FUNC_0(VAR_0);
 struct csid_device *VAR_3 = FUNC_1(VAR_2);

 *VAR_1 = VAR_3->id;
}
