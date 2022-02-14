
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ath10k_fw_file {int wmi_op_version; } ;
struct TYPE_4__ {int svc_map; } ;
struct TYPE_3__ {struct ath10k_fw_file fw_file; } ;
struct ath10k {TYPE_2__ wmi; TYPE_1__ normal_mode_fw; } ;






 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct ath10k *VAR_1)
{
 struct ath10k_fw_file *VAR_2 = &VAR_1->normal_mode_fw.fw_file;





 switch (VAR_2->wmi_op_version) {
 case 131:
 case 130:
 case 129:
 case 128:
  FUNC_0(VAR_0, VAR_1->wmi.svc_map);
  break;
 default:
  break;
 }

 return 0;
}
