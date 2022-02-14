
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mwifiex_private {int adapter; } ;
struct host_cmd_ds_802_11_deauthenticate {void* reason_code; int mac_addr; } ;
struct TYPE_2__ {struct host_cmd_ds_802_11_deauthenticate deauth; } ;
struct host_cmd_ds_command {void* size; void* command; TYPE_1__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int ,int ,char*,int ) ;

__attribute__((used)) static int FUNC_3(struct mwifiex_private *VAR_5,
          struct host_cmd_ds_command *VAR_6,
          u8 *VAR_7)
{
 struct host_cmd_ds_802_11_deauthenticate *VAR_8 = &VAR_6->params.deauth;

 VAR_6->command = FUNC_0(VAR_2);
 VAR_6->size = FUNC_0(sizeof(struct host_cmd_ds_802_11_deauthenticate)
    + VAR_3);


 FUNC_1(VAR_8->mac_addr, VAR_7, VAR_1);

 FUNC_2(VAR_5->adapter, VAR_0, "cmd: Deauth: %pM\n", VAR_8->mac_addr);

 VAR_8->reason_code = FUNC_0(VAR_4);

 return 0;
}
