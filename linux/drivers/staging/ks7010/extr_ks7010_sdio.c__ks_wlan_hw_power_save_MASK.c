
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_4__ {int status; int snooze_guard; int confirm_wait; } ;
struct TYPE_3__ {scalar_t__ power_mgmt; scalar_t__ operation_mode; } ;
struct ks_wlan_private {scalar_t__ dev_state; int rw_dwork; int wq; TYPE_2__ psstatus; int net_dev; int connect_status; TYPE_1__ reg; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ks_wlan_private*,int ,scalar_t__*) ;
 int FUNC_4 (struct ks_wlan_private*,int ,int ) ;
 int FUNC_5 (int ,char*,scalar_t__,scalar_t__,scalar_t__,int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,int *,int) ;
 int FUNC_8 (struct ks_wlan_private*) ;
 scalar_t__ FUNC_9 (struct ks_wlan_private*) ;

__attribute__((used)) static void FUNC_10(struct ks_wlan_private *VAR_7)
{
 u8 VAR_8;
 int VAR_9;

 if (VAR_7->reg.power_mgmt == VAR_5)
  return;

 if (VAR_7->reg.operation_mode != VAR_4)
  return;

 if (!FUNC_2(VAR_7->connect_status))
  return;

 if (VAR_7->dev_state != VAR_0)
  return;

 if (FUNC_0(&VAR_7->psstatus.status) == VAR_6)
  return;

 FUNC_5(VAR_7->net_dev,
     "STATUS:\n"
     "- psstatus.status = %d\n"
     "- psstatus.confirm_wait = %d\n"
     "- psstatus.snooze_guard = %d\n"
     "- txq_count = %d\n",
     FUNC_0(&VAR_7->psstatus.status),
     FUNC_0(&VAR_7->psstatus.confirm_wait),
     FUNC_0(&VAR_7->psstatus.snooze_guard),
     FUNC_8(VAR_7));

 if (FUNC_0(&VAR_7->psstatus.confirm_wait) ||
     FUNC_0(&VAR_7->psstatus.snooze_guard) ||
     FUNC_9(VAR_7)) {
  FUNC_7(VAR_7->wq, &VAR_7->rw_dwork, 0);
  return;
 }

 VAR_9 = FUNC_3(VAR_7, VAR_3, &VAR_8);
 if (VAR_9) {
  FUNC_6(VAR_7->net_dev, "read INT_PENDING_REG\n");
  goto queue_delayed_work;
 }
 if (VAR_8)
  goto queue_delayed_work;

 VAR_9 = FUNC_4(VAR_7, VAR_2, VAR_1);
 if (VAR_9) {
  FUNC_6(VAR_7->net_dev, "write GCR_B_REG\n");
  goto queue_delayed_work;
 }
 FUNC_1(&VAR_7->psstatus.status, VAR_6);

 return;

queue_delayed_work:
 FUNC_7(VAR_7->wq, &VAR_7->rw_dwork, 1);
}
