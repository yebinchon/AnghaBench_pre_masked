
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vxgedev {int no_of_vpath; TYPE_3__* vpaths; int exec_mode; } ;
struct vxge_vpath {TYPE_2__* handle; struct vxgedev* vdev; } ;
typedef int irqreturn_t ;
typedef enum vxge_hw_status { ____Placeholder_vxge_hw_status } vxge_hw_status ;
struct TYPE_6__ {int handle; } ;
struct TYPE_5__ {TYPE_1__* vpath; } ;
struct TYPE_4__ {int vp_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int ,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static irqreturn_t
FUNC_5(int VAR_6, void *VAR_7)
{
 int VAR_8;
 enum vxge_hw_status VAR_9;
 struct vxge_vpath *VAR_10 = (struct vxge_vpath *)VAR_7;
 struct vxgedev *VAR_11 = VAR_10->vdev;
 int VAR_12 = (VAR_10->handle->vpath->vp_id *
  VAR_5) + VAR_1;

 for (VAR_8 = 0; VAR_8 < VAR_11->no_of_vpath; VAR_8++) {




  FUNC_3(VAR_11->vpaths[VAR_8].handle, VAR_12);
  FUNC_2(VAR_11->vpaths[VAR_8].handle, VAR_12);

  VAR_9 = FUNC_1(VAR_11->vpaths[VAR_8].handle,
   VAR_11->exec_mode);
  if (VAR_9 == VAR_4) {
   FUNC_4(VAR_11->vpaths[VAR_8].handle,
        VAR_12);
   continue;
  }
  FUNC_0(VAR_3,
   "%s: vxge_hw_vpath_alarm_process failed %x ",
   VAR_2, VAR_9);
 }
 return VAR_0;
}
