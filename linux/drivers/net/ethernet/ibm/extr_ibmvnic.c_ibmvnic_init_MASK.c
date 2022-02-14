
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ibmvnic_adapter {int from_passive_init; int init_done_rc; int state; int init_done; TYPE_1__* vdev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct ibmvnic_adapter*) ;
 int FUNC_2 (struct ibmvnic_adapter*) ;
 int FUNC_3 (struct ibmvnic_adapter*) ;
 unsigned long FUNC_4 (int) ;
 int FUNC_5 (struct ibmvnic_adapter*) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct ibmvnic_adapter *VAR_1)
{
 struct device *VAR_2 = &VAR_1->vdev->dev;
 unsigned long VAR_3 = FUNC_4(30000);
 int VAR_4;

 VAR_1->from_passive_init = 0;

 VAR_1->init_done_rc = 0;
 FUNC_1(VAR_1);
 if (!FUNC_6(&VAR_1->init_done, VAR_3)) {
  FUNC_0(VAR_2, "Initialization sequence timed out\n");
  return -1;
 }

 if (VAR_1->init_done_rc) {
  FUNC_5(VAR_1);
  return VAR_1->init_done_rc;
 }

 if (VAR_1->from_passive_init) {
  VAR_1->state = VAR_0;
  VAR_1->from_passive_init = 0;
  return -1;
 }

 VAR_4 = FUNC_3(VAR_1);
 if (VAR_4) {
  FUNC_0(VAR_2, "Initialization of sub crqs failed\n");
  FUNC_5(VAR_1);
  return VAR_4;
 }

 VAR_4 = FUNC_2(VAR_1);
 if (VAR_4) {
  FUNC_0(VAR_2, "Failed to initialize sub crq irqs\n");
  FUNC_5(VAR_1);
 }

 return VAR_4;
}
