
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfe_line {int id; } ;
struct v4l2_subdev {int dummy; } ;
struct media_entity {int dummy; } ;
typedef enum vfe_line_id { ____Placeholder_vfe_line_id } vfe_line_id ;


 struct v4l2_subdev* FUNC_0 (struct media_entity*) ;
 struct vfe_line* FUNC_1 (struct v4l2_subdev*) ;

void FUNC_2(struct media_entity *VAR_0, enum vfe_line_id *VAR_1)
{
 struct v4l2_subdev *VAR_2;
 struct vfe_line *VAR_3;

 VAR_2 = FUNC_0(VAR_0);
 VAR_3 = FUNC_1(VAR_2);

 *VAR_1 = VAR_3->id;
}
