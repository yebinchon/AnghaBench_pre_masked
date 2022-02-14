
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vsp1_uds {int dummy; } ;
struct vsp1_entity {int subdev; } ;
struct vsp1_dl_body {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 struct vsp1_uds* FUNC_0 (int *) ;
 int FUNC_1 (struct vsp1_uds*,struct vsp1_dl_body*,int ,unsigned int) ;

void FUNC_2(struct vsp1_entity *VAR_2, struct vsp1_dl_body *VAR_3,
   unsigned int VAR_4)
{
 struct vsp1_uds *VAR_5 = FUNC_0(&VAR_2->subdev);

 FUNC_1(VAR_5, VAR_3, VAR_0,
         VAR_4 << VAR_1);
}
