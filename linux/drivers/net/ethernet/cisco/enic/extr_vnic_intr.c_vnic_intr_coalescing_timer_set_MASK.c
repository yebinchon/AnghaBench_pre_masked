
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct vnic_intr {TYPE_1__* ctrl; int vdev; } ;
struct TYPE_2__ {int coalescing_timer; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int ) ;

void FUNC_2(struct vnic_intr *VAR_0,
 u32 VAR_1)
{
 FUNC_0(FUNC_1(VAR_0->vdev,
  VAR_1), &VAR_0->ctrl->coalescing_timer);
}
