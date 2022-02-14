
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct mwifiex_private {int adapter; } ;
struct host_cmd_ds_mac_control {int action; } ;
struct TYPE_2__ {struct host_cmd_ds_mac_control mac_ctrl; } ;
struct host_cmd_ds_command {void* size; void* command; TYPE_1__ params; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,char*) ;

__attribute__((used)) static int FUNC_3(struct mwifiex_private *VAR_4,
       struct host_cmd_ds_command *VAR_5,
       u16 VAR_6, u32 *VAR_7)
{
 struct host_cmd_ds_mac_control *VAR_8 = &VAR_5->params.mac_ctrl;

 if (VAR_6 != VAR_1) {
  FUNC_2(VAR_4->adapter, VAR_0,
       "mac_control: only support set cmd\n");
  return -1;
 }

 VAR_5->command = FUNC_0(VAR_2);
 VAR_5->size =
  FUNC_0(sizeof(struct host_cmd_ds_mac_control) + VAR_3);
 VAR_8->action = FUNC_1(*VAR_7);

 return 0;
}
