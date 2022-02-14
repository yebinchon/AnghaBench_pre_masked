
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ intr_type; } ;
struct vxgedev {TYPE_1__ config; int pdev; struct vxge_vpath* vpaths; } ;
struct vxge_vpath {int device_id; TYPE_4__* handle; } ;
struct __vxge_hw_device {int dummy; } ;
struct TYPE_10__ {TYPE_3__* vpath; } ;
struct TYPE_9__ {TYPE_2__* hldev; } ;
struct TYPE_8__ {int first_vp_id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct __vxge_hw_device* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,int) ;
 int FUNC_4 (struct __vxge_hw_device*,int) ;

__attribute__((used)) static void FUNC_5(struct vxgedev *VAR_3, int VAR_4)
{
 struct vxge_vpath *VAR_5 = &VAR_3->vpaths[VAR_4];
 struct __vxge_hw_device *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_0(VAR_3->pdev);

 FUNC_4(VAR_6, VAR_5->device_id);

 FUNC_2(VAR_5->handle);

 if (VAR_3->config.intr_type == VAR_0)
  FUNC_1(VAR_5->handle);
 else {
  VAR_7 = VAR_5->device_id * VAR_2;
  FUNC_3(VAR_5->handle, VAR_7);
  FUNC_3(VAR_5->handle, VAR_7 + 1);


  VAR_7 = (VAR_5->handle->vpath->hldev->first_vp_id *
   VAR_2) + VAR_1;
  FUNC_3(VAR_5->handle, VAR_7);
 }
}
