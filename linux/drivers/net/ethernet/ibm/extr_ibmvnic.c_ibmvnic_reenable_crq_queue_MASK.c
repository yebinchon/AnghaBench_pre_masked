
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vio_dev {int dev; int unit_address; } ;
struct ibmvnic_adapter {struct vio_dev* vdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct ibmvnic_adapter *VAR_3)
{
 struct vio_dev *VAR_4 = VAR_3->vdev;
 int VAR_5;

 do {
  VAR_5 = FUNC_2(VAR_1, VAR_4->unit_address);
 } while (VAR_5 == VAR_2 || VAR_5 == VAR_0 || FUNC_0(VAR_5));

 if (VAR_5)
  FUNC_1(&VAR_4->dev, "Error enabling adapter (rc=%d)\n", VAR_5);

 return VAR_5;
}
