
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int entity; } ;
struct TYPE_6__ {TYPE_2__ video; } ;
struct TYPE_4__ {int entity; } ;
struct iss_csi2_device {TYPE_3__ video_out; TYPE_1__ subdev; } ;
struct iss_device {struct iss_csi2_device csi2b; struct iss_csi2_device csi2a; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int *,int ,int ) ;

int FUNC_1(struct iss_device *VAR_1)
{
 struct iss_csi2_device *VAR_2 = &VAR_1->csi2a;
 struct iss_csi2_device *VAR_3 = &VAR_1->csi2b;
 int VAR_4;


 VAR_4 = FUNC_0(&VAR_2->subdev.entity, VAR_0,
        &VAR_2->video_out.video.entity, 0, 0);
 if (VAR_4 < 0)
  return VAR_4;


 VAR_4 = FUNC_0(&VAR_3->subdev.entity, VAR_0,
        &VAR_3->video_out.video.entity, 0, 0);
 if (VAR_4 < 0)
  return VAR_4;

 return 0;
}
