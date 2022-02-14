
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnic_cq {int * ctrl; int ring; int vdev; } ;


 int FUNC_0 (int ,int *) ;

void FUNC_1(struct vnic_cq *VAR_0)
{
 FUNC_0(VAR_0->vdev, &VAR_0->ring);

 VAR_0->ctrl = ((void*)0);
}
