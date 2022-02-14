
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int mgmt_pending_tx; } ;
struct ath10k {scalar_t__ svc_rdy_skb; int svc_rdy_work; int data_lock; TYPE_3__ wmi; TYPE_2__* running_fw; } ;
struct TYPE_4__ {int fw_features; } ;
struct TYPE_5__ {TYPE_1__ fw_file; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,struct ath10k*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,int ) ;

void FUNC_7(struct ath10k *VAR_2)
{
 if (FUNC_6(VAR_0,
       VAR_2->running_fw->fw_file.fw_features)) {
  FUNC_4(&VAR_2->data_lock);
  FUNC_3(&VAR_2->wmi.mgmt_pending_tx,
        VAR_1, VAR_2);
  FUNC_2(&VAR_2->wmi.mgmt_pending_tx);
  FUNC_5(&VAR_2->data_lock);
 }

 FUNC_0(&VAR_2->svc_rdy_work);

 if (VAR_2->svc_rdy_skb)
  FUNC_1(VAR_2->svc_rdy_skb);
}
