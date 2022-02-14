
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int ql_proto_ver; unsigned int num_mac; } ;
struct qtnf_bus {int fw_state; TYPE_1__ hw_info; int event_work; int hprio_workqueue; int workqueue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (struct qtnf_bus*) ;
 int FUNC_5 (struct qtnf_bus*) ;
 int FUNC_6 (struct qtnf_bus*) ;
 int FUNC_7 (struct qtnf_bus*) ;
 int FUNC_8 (struct qtnf_bus*,unsigned int) ;
 int VAR_8 ;
 int FUNC_9 (struct qtnf_bus*) ;

int FUNC_10(struct qtnf_bus *VAR_9)
{
 unsigned int VAR_10;
 int VAR_11;

 FUNC_9(VAR_9);
 FUNC_4(VAR_9);

 VAR_9->workqueue = FUNC_1("QTNF_BUS", 0);
 if (!VAR_9->workqueue) {
  FUNC_3("failed to alloc main workqueue\n");
  VAR_11 = -VAR_0;
  goto error;
 }

 VAR_9->hprio_workqueue = FUNC_2("QTNF_HPRI", VAR_7, 0);
 if (!VAR_9->hprio_workqueue) {
  FUNC_3("failed to alloc high prio workqueue\n");
  VAR_11 = -VAR_0;
  goto error;
 }

 FUNC_0(&VAR_9->event_work, VAR_8);

 VAR_11 = FUNC_6(VAR_9);
 if (VAR_11) {
  FUNC_3("failed to init FW: %d\n", VAR_11);
  goto error;
 }

 VAR_9->fw_state = VAR_4;
 VAR_11 = FUNC_5(VAR_9);
 if (VAR_11) {
  FUNC_3("failed to get HW info: %d\n", VAR_11);
  goto error;
 }

 if (VAR_9->hw_info.ql_proto_ver != VAR_3) {
  FUNC_3("qlink version mismatch %u != %u\n",
         VAR_3, VAR_9->hw_info.ql_proto_ver);
  VAR_11 = -VAR_1;
  goto error;
 }

 if (VAR_9->hw_info.num_mac > VAR_6) {
  FUNC_3("no support for number of MACs=%u\n",
         VAR_9->hw_info.num_mac);
  VAR_11 = -VAR_2;
  goto error;
 }

 for (VAR_10 = 0; VAR_10 < VAR_9->hw_info.num_mac; VAR_10++) {
  VAR_11 = FUNC_8(VAR_9, VAR_10);

  if (VAR_11) {
   FUNC_3("MAC%u: attach failed: %d\n", VAR_10, VAR_11);
   goto error;
  }
 }

 VAR_9->fw_state = VAR_5;
 return 0;

error:
 FUNC_7(VAR_9);
 return VAR_11;
}
