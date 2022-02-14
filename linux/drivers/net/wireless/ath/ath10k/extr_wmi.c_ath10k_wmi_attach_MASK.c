
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int mgmt_pending_tx; int radar_confirm; int barrier; int unified_ready; int service_ready; int * peer_flags; int * pdev_param; int * vdev_param; int * ops; int * cmd; } ;
struct ath10k {TYPE_3__ wmi; TYPE_2__* running_fw; int radar_confirmation_work; int svc_rdy_work; void* wmi_key_cipher; } ;
struct TYPE_4__ {int wmi_op_version; int fw_features; } ;
struct TYPE_5__ {TYPE_1__ fw_file; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct ath10k*,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct ath10k*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 void* VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 void* VAR_25 ;
 int VAR_26 ;

int FUNC_6(struct ath10k *VAR_27)
{
 switch (VAR_27->running_fw->fw_file.wmi_op_version) {
 case 132:
  VAR_27->wmi.ops = &VAR_13;
  VAR_27->wmi.cmd = &VAR_12;
  VAR_27->wmi.vdev_param = &VAR_15;
  VAR_27->wmi.pdev_param = &VAR_14;
  VAR_27->wmi.peer_flags = &VAR_11;
  VAR_27->wmi_key_cipher = VAR_21;
  break;
 case 133:
  VAR_27->wmi.cmd = &VAR_5;
  VAR_27->wmi.ops = &VAR_6;
  VAR_27->wmi.vdev_param = &VAR_8;
  VAR_27->wmi.pdev_param = &VAR_7;
  VAR_27->wmi.peer_flags = &VAR_11;
  VAR_27->wmi_key_cipher = VAR_21;
  break;
 case 134:
  VAR_27->wmi.cmd = &VAR_9;
  VAR_27->wmi.ops = &VAR_10;
  VAR_27->wmi.vdev_param = &VAR_19;
  VAR_27->wmi.pdev_param = &VAR_17;
  VAR_27->wmi.peer_flags = &VAR_11;
  VAR_27->wmi_key_cipher = VAR_21;
  break;
 case 135:
  VAR_27->wmi.cmd = &VAR_16;
  VAR_27->wmi.ops = &VAR_4;
  VAR_27->wmi.vdev_param = &VAR_19;
  VAR_27->wmi.pdev_param = &VAR_17;
  VAR_27->wmi.peer_flags = &VAR_18;
  VAR_27->wmi_key_cipher = VAR_21;
  break;
 case 131:
  VAR_27->wmi.cmd = &VAR_20;
  VAR_27->wmi.ops = &VAR_22;
  VAR_27->wmi.vdev_param = &VAR_26;
  VAR_27->wmi.pdev_param = &VAR_23;
  VAR_27->wmi.peer_flags = &VAR_24;
  VAR_27->wmi_key_cipher = VAR_21;
  break;
 case 129:
  FUNC_2(VAR_27);
  VAR_27->wmi_key_cipher = VAR_25;
  break;
 case 128:
 case 130:
  FUNC_1(VAR_27, "unsupported WMI op version: %d\n",
      VAR_27->running_fw->fw_file.wmi_op_version);
  return -VAR_1;
 }

 FUNC_4(&VAR_27->wmi.service_ready);
 FUNC_4(&VAR_27->wmi.unified_ready);
 FUNC_4(&VAR_27->wmi.barrier);
 FUNC_4(&VAR_27->wmi.radar_confirm);

 FUNC_0(&VAR_27->svc_rdy_work, VAR_3);
 FUNC_0(&VAR_27->radar_confirmation_work,
    VAR_2);

 if (FUNC_5(VAR_0,
       VAR_27->running_fw->fw_file.fw_features)) {
  FUNC_3(&VAR_27->wmi.mgmt_pending_tx);
 }

 return 0;
}
