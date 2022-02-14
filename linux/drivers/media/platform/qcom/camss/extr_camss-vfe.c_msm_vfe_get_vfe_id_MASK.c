
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct vfe_line {int dummy; } ;
struct vfe_device {int id; } ;
struct v4l2_subdev {int dummy; } ;
struct media_entity {int dummy; } ;


 struct v4l2_subdev* FUNC_0 (struct media_entity*) ;
 struct vfe_device* FUNC_1 (struct vfe_line*) ;
 struct vfe_line* FUNC_2 (struct v4l2_subdev*) ;

void FUNC_3(struct media_entity *VAR_0, u8 *VAR_1)
{
 struct v4l2_subdev *VAR_2;
 struct vfe_line *VAR_3;
 struct vfe_device *VAR_4;

 VAR_2 = FUNC_0(VAR_0);
 VAR_3 = FUNC_2(VAR_2);
 VAR_4 = FUNC_1(VAR_3);

 *VAR_1 = VAR_4->id;
}
