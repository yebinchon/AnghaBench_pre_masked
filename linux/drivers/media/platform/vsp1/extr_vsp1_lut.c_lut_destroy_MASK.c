
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vsp1_lut {int pool; } ;
struct vsp1_entity {int subdev; } ;


 struct vsp1_lut* FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct vsp1_entity *VAR_0)
{
 struct vsp1_lut *VAR_1 = FUNC_0(&VAR_0->subdev);

 FUNC_1(VAR_1->pool);
}
