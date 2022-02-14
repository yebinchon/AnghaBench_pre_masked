
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int entity; } ;
struct iss_csi2_device {TYPE_1__ subdev; int video_out; } ;
struct iss_device {struct iss_csi2_device csi2b; struct iss_csi2_device csi2a; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct iss_device *VAR_0)
{
 struct iss_csi2_device *VAR_1 = &VAR_0->csi2a;
 struct iss_csi2_device *VAR_2 = &VAR_0->csi2b;

 FUNC_1(&VAR_1->video_out);
 FUNC_0(&VAR_1->subdev.entity);

 FUNC_1(&VAR_2->video_out);
 FUNC_0(&VAR_2->subdev.entity);
}
