
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uvc_device {TYPE_1__* udev; } ;
struct uvc_control_info {int selector; int entity; } ;
struct uvc_control {TYPE_2__* entity; scalar_t__ initialized; } ;
struct TYPE_4__ {int id; } ;
struct TYPE_3__ {int devpath; } ;


 int VAR_0 ;
 int FUNC_0 (struct uvc_device*,struct uvc_control*,struct uvc_control_info*) ;
 int FUNC_1 (struct uvc_device*,struct uvc_control*,struct uvc_control_info*) ;
 int FUNC_2 (int ,char*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct uvc_device *VAR_1,
 struct uvc_control *VAR_2)
{
 struct uvc_control_info VAR_3;
 int VAR_4;

 if (VAR_2->initialized)
  return 0;

 VAR_4 = FUNC_1(VAR_1, VAR_2, &VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_2, &VAR_3);
 if (VAR_4 < 0)
  FUNC_2(VAR_0, "Failed to initialize control "
     "%pUl/%u on device %s entity %u\n", VAR_3.entity,
     VAR_3.selector, VAR_1->udev->devpath, VAR_2->entity->id);

 return VAR_4;
}
