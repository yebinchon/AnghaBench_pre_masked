
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snic {int shost; int vdev; } ;
typedef enum vnic_dev_intr_mode { ____Placeholder_vnic_dev_intr_mode } vnic_dev_intr_mode ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct snic *VAR_2)
{
 int VAR_3 = 0;
 enum vnic_dev_intr_mode VAR_4;

 VAR_4 = FUNC_1(VAR_2->vdev);

 if (VAR_4 == VAR_1) {
  VAR_3 = FUNC_2(VAR_2->vdev, VAR_0);
 } else {
  FUNC_0(VAR_2->shost,
         "Interrupt mode should be setup before devcmd notify set %d\n",
         VAR_4);
  VAR_3 = -1;
 }

 return VAR_3;
}
