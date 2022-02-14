
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vsp1_pipeline {int dummy; } ;
struct vsp1_lut {int dummy; } ;
struct vsp1_entity {int subdev; } ;
struct vsp1_dl_list {int dummy; } ;
struct vsp1_dl_body {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct vsp1_lut* FUNC_0 (int *) ;
 int FUNC_1 (struct vsp1_lut*,struct vsp1_dl_body*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct vsp1_entity *VAR_2,
     struct vsp1_pipeline *VAR_3,
     struct vsp1_dl_list *VAR_4,
     struct vsp1_dl_body *VAR_5)
{
 struct vsp1_lut *VAR_6 = FUNC_0(&VAR_2->subdev);

 FUNC_1(VAR_6, VAR_5, VAR_0, VAR_1);
}
