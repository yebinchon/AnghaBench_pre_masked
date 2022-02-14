
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
struct iss_resizer_device {TYPE_3__ video_out; TYPE_1__ subdev; } ;
struct iss_device {struct iss_resizer_device resizer; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int *,int ,int ) ;

int FUNC_1(struct iss_device *VAR_1)
{
 struct iss_resizer_device *VAR_2 = &VAR_1->resizer;


 return FUNC_0(&VAR_2->subdev.entity,
         VAR_0,
         &VAR_2->video_out.video.entity, 0, 0);
}
