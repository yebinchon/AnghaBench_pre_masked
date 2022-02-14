
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnic_wq {unsigned int index; struct vnic_dev* vdev; } ;
struct vnic_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,unsigned int) ;
 int FUNC_1 (struct vnic_wq*) ;
 int FUNC_2 (struct vnic_wq*) ;
 int FUNC_3 (struct vnic_wq*) ;
 int FUNC_4 (struct vnic_dev*,struct vnic_wq*,unsigned int,unsigned int,unsigned int) ;
 int FUNC_5 (struct vnic_dev*,struct vnic_wq*,unsigned int,int ) ;

int FUNC_6(struct vnic_dev *VAR_1, struct vnic_wq *VAR_2,
 unsigned int VAR_3, unsigned int VAR_4, unsigned int VAR_5)
{
 int VAR_6;

 VAR_2->index = VAR_3;
 VAR_2->vdev = VAR_1;

 VAR_6 = FUNC_5(VAR_1, VAR_2, VAR_3, VAR_0);
 if (VAR_6) {
  FUNC_0("Failed to hook WQ[%d] resource\n", VAR_3);

  return VAR_6;
 }

 FUNC_1(VAR_2);

 VAR_6 = FUNC_4(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_3(VAR_2);
 if (VAR_6) {
  FUNC_2(VAR_2);

  return VAR_6;
 }

 return 0;
}
