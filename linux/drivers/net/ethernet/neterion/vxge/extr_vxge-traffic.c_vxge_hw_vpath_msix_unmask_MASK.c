
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct __vxge_hw_vpath_handle {TYPE_1__* vpath; } ;
struct __vxge_hw_device {TYPE_2__* common_reg; } ;
struct TYPE_4__ {int * clear_msix_mask_vect; } ;
struct TYPE_3__ {struct __vxge_hw_device* hldev; } ;


 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int) ;

void
FUNC_3(struct __vxge_hw_vpath_handle *VAR_0, int VAR_1)
{
 struct __vxge_hw_device *VAR_2 = VAR_0->vpath->hldev;
 FUNC_0(
   (u32)FUNC_1(FUNC_2(VAR_1 >> 2), 0, 32),
   &VAR_2->common_reg->clear_msix_mask_vect[VAR_1%4]);
}
