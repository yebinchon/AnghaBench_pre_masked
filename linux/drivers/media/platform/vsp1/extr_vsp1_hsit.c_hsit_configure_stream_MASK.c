
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vsp1_pipeline {int dummy; } ;
struct vsp1_hsit {scalar_t__ inverse; } ;
struct vsp1_entity {int subdev; } ;
struct vsp1_dl_list {int dummy; } ;
struct vsp1_dl_body {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct vsp1_hsit* FUNC_0 (int *) ;
 int FUNC_1 (struct vsp1_hsit*,struct vsp1_dl_body*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct vsp1_entity *VAR_4,
      struct vsp1_pipeline *VAR_5,
      struct vsp1_dl_list *VAR_6,
      struct vsp1_dl_body *VAR_7)
{
 struct vsp1_hsit *VAR_8 = FUNC_0(&VAR_4->subdev);

 if (VAR_8->inverse)
  FUNC_1(VAR_8, VAR_7, VAR_0, VAR_1);
 else
  FUNC_1(VAR_8, VAR_7, VAR_2, VAR_3);
}
