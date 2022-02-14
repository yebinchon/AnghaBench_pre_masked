
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnic_wq {int ring; int ctrl; struct vnic_dev* vdev; scalar_t__ index; } ;
struct vnic_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vnic_dev*,int *,unsigned int,unsigned int) ;
 int FUNC_1 (struct vnic_dev*,int ,int ) ;
 int FUNC_2 (struct vnic_wq*) ;

int FUNC_3(struct vnic_dev *VAR_2, struct vnic_wq *VAR_3,
     unsigned int VAR_4, unsigned int VAR_5)
{
 int VAR_6;

 VAR_3->index = 0;
 VAR_3->vdev = VAR_2;

 VAR_3->ctrl = FUNC_1(VAR_2, VAR_1, 0);
 if (!VAR_3->ctrl)
  return -VAR_0;
 FUNC_2(VAR_3);
 VAR_6 = FUNC_0(VAR_2, &VAR_3->ring, VAR_4, VAR_5);

 return VAR_6;
}
