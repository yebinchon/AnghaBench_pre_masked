
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnic_wq {struct vnic_dev* vdev; scalar_t__ index; } ;
struct vnic_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct vnic_dev*,struct vnic_wq*,unsigned int,unsigned int) ;
 int FUNC_2 (struct vnic_wq*) ;
 int FUNC_3 (struct vnic_dev*,struct vnic_wq*,int ,int ) ;

int FUNC_4(struct vnic_dev *VAR_1, struct vnic_wq *VAR_2,
  unsigned int VAR_3, unsigned int VAR_4)
{
 int VAR_5;

 VAR_2->index = 0;
 VAR_2->vdev = VAR_1;

 VAR_5 = FUNC_3(VAR_1, VAR_2, 0, VAR_0);
 if (VAR_5) {
  FUNC_0("Failed to get devcmd2 resource\n");
  return VAR_5;
 }
 FUNC_2(VAR_2);

 VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
 if (VAR_5)
  return VAR_5;
 return 0;
}
