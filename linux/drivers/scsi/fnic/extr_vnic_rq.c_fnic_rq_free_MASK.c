
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnic_rq {int * ctrl; int ** bufs; int ring; struct vnic_dev* vdev; } ;
struct vnic_dev {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct vnic_dev*,int *) ;

void FUNC_2(struct vnic_rq *VAR_1)
{
 struct vnic_dev *VAR_2;
 unsigned int VAR_3;

 VAR_2 = VAR_1->vdev;

 FUNC_1(VAR_2, &VAR_1->ring);

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  FUNC_0(VAR_1->bufs[VAR_3]);
  VAR_1->bufs[VAR_3] = ((void*)0);
 }

 VAR_1->ctrl = ((void*)0);
}
