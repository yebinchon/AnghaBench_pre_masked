
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct ibmvnic_adapter {int from_passive_init; scalar_t__ req_rx_queues; scalar_t__ req_tx_queues; int init_done_rc; scalar_t__ reset_reason; int wait_for_reset; int resetting; int state; int init_done; TYPE_1__* vdev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct ibmvnic_adapter*) ;
 int FUNC_2 (struct ibmvnic_adapter*) ;
 int FUNC_3 (struct ibmvnic_adapter*) ;
 unsigned long FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct ibmvnic_adapter*) ;
 int FUNC_7 (struct ibmvnic_adapter*,int ) ;
 int FUNC_8 (struct ibmvnic_adapter*) ;
 scalar_t__ FUNC_9 (int ,int *) ;
 int FUNC_10 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_11(struct ibmvnic_adapter *VAR_2)
{
 struct device *VAR_3 = &VAR_2->vdev->dev;
 unsigned long VAR_4 = FUNC_4(30000);
 u64 VAR_5, VAR_6;
 int VAR_7;

 VAR_2->from_passive_init = 0;

 VAR_5 = VAR_2->req_rx_queues;
 VAR_6 = VAR_2->req_tx_queues;

 FUNC_5(&VAR_2->init_done);
 VAR_2->init_done_rc = 0;
 FUNC_1(VAR_2);
 if (!FUNC_10(&VAR_2->init_done, VAR_4)) {
  FUNC_0(VAR_3, "Initialization sequence timed out\n");
  return -1;
 }

 if (VAR_2->init_done_rc) {
  FUNC_6(VAR_2);
  return VAR_2->init_done_rc;
 }

 if (VAR_2->from_passive_init) {
  VAR_2->state = VAR_0;
  VAR_2->from_passive_init = 0;
  return -1;
 }

 if (FUNC_9(0, &VAR_2->resetting) && !VAR_2->wait_for_reset &&
     VAR_2->reset_reason != VAR_1) {
  if (VAR_2->req_rx_queues != VAR_5 ||
      VAR_2->req_tx_queues != VAR_6) {
   FUNC_7(VAR_2, 0);
   VAR_7 = FUNC_3(VAR_2);
  } else {
   VAR_7 = FUNC_8(VAR_2);
  }
 } else {
  VAR_7 = FUNC_3(VAR_2);
 }

 if (VAR_7) {
  FUNC_0(VAR_3, "Initialization of sub crqs failed\n");
  FUNC_6(VAR_2);
  return VAR_7;
 }

 VAR_7 = FUNC_2(VAR_2);
 if (VAR_7) {
  FUNC_0(VAR_3, "Failed to initialize sub crq irqs\n");
  FUNC_6(VAR_2);
 }

 return VAR_7;
}
