
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ibmvnic_long_term_buff {int size; int addr; int buff; int map_id; } ;
struct ibmvnic_adapter {int fw_done_rc; int fw_done; int map_id; TYPE_1__* vdev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (struct device*,int,int *,int ) ;
 int FUNC_2 (struct device*,int,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ibmvnic_adapter*,int ,int,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct ibmvnic_adapter *VAR_2,
    struct ibmvnic_long_term_buff *VAR_3, int VAR_4)
{
 struct device *VAR_5 = &VAR_2->vdev->dev;
 int VAR_6;

 VAR_3->size = VAR_4;
 VAR_3->buff = FUNC_1(VAR_5, VAR_3->size, &VAR_3->addr,
           VAR_1);

 if (!VAR_3->buff) {
  FUNC_0(VAR_5, "Couldn't alloc long term buffer\n");
  return -VAR_0;
 }
 VAR_3->map_id = VAR_2->map_id;
 VAR_2->map_id++;

 FUNC_3(&VAR_2->fw_done);
 VAR_6 = FUNC_4(VAR_2, VAR_3->addr,
         VAR_3->size, VAR_3->map_id);
 if (VAR_6) {
  FUNC_2(VAR_5, VAR_3->size, VAR_3->buff, VAR_3->addr);
  return VAR_6;
 }
 FUNC_5(&VAR_2->fw_done);

 if (VAR_2->fw_done_rc) {
  FUNC_0(VAR_5, "Couldn't map long term buffer,rc = %d\n",
   VAR_2->fw_done_rc);
  FUNC_2(VAR_5, VAR_3->size, VAR_3->buff, VAR_3->addr);
  return -1;
 }
 return 0;
}
