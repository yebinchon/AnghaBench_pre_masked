
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vsp1_pipeline {int dummy; } ;
struct vsp1_lut {int lock; struct vsp1_dl_body* lut; } ;
struct vsp1_entity {int subdev; } ;
struct vsp1_dl_list {int dummy; } ;
struct vsp1_dl_body {int dummy; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 struct vsp1_lut* FUNC_2 (int *) ;
 int FUNC_3 (struct vsp1_dl_body*) ;
 int FUNC_4 (struct vsp1_dl_list*,struct vsp1_dl_body*) ;

__attribute__((used)) static void FUNC_5(struct vsp1_entity *VAR_0,
    struct vsp1_pipeline *VAR_1,
    struct vsp1_dl_list *VAR_2,
    struct vsp1_dl_body *VAR_3)
{
 struct vsp1_lut *VAR_4 = FUNC_2(&VAR_0->subdev);
 struct vsp1_dl_body *VAR_5;
 unsigned long VAR_6;

 FUNC_0(&VAR_4->lock, VAR_6);
 VAR_5 = VAR_4->lut;
 VAR_4->lut = ((void*)0);
 FUNC_1(&VAR_4->lock, VAR_6);

 if (VAR_5) {
  FUNC_4(VAR_2, VAR_5);


  FUNC_3(VAR_5);
 }
}
