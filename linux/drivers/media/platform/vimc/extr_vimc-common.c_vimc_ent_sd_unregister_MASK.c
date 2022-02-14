
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vimc_ent_device {int pads; int ent; } ;
struct v4l2_subdev {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct vimc_ent_device *VAR_0, struct v4l2_subdev *VAR_1)
{
 FUNC_0(VAR_0->ent);
 FUNC_2(VAR_0->pads);
 FUNC_1(VAR_1);
}
