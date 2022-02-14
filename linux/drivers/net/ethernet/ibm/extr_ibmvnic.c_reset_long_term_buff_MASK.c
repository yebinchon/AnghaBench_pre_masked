
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ibmvnic_long_term_buff {int size; int map_id; int addr; int buff; } ;
struct ibmvnic_adapter {TYPE_1__* vdev; scalar_t__ fw_done_rc; int fw_done; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (struct ibmvnic_adapter*,struct ibmvnic_long_term_buff*,int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct ibmvnic_adapter*,struct ibmvnic_long_term_buff*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct ibmvnic_adapter*,int ,int ,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct ibmvnic_adapter *VAR_0,
    struct ibmvnic_long_term_buff *VAR_1)
{
 int VAR_2;

 FUNC_4(VAR_1->buff, 0, VAR_1->size);

 FUNC_3(&VAR_0->fw_done);
 VAR_2 = FUNC_5(VAR_0, VAR_1->addr, VAR_1->size, VAR_1->map_id);
 if (VAR_2)
  return VAR_2;
 FUNC_6(&VAR_0->fw_done);

 if (VAR_0->fw_done_rc) {
  FUNC_1(&VAR_0->vdev->dev,
    "Reset failed, attempting to free and reallocate buffer\n");
  FUNC_2(VAR_0, VAR_1);
  return FUNC_0(VAR_0, VAR_1, VAR_1->size);
 }
 return 0;
}
