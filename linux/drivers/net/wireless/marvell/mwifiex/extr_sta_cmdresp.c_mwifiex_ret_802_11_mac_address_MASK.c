
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mwifiex_private {int curr_addr; int adapter; } ;
struct host_cmd_ds_802_11_mac_address {int mac_addr; } ;
struct TYPE_2__ {struct host_cmd_ds_802_11_mac_address mac_addr; } ;
struct host_cmd_ds_command {TYPE_1__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,char*,int ) ;

__attribute__((used)) static int FUNC_2(struct mwifiex_private *VAR_2,
       struct host_cmd_ds_command *VAR_3)
{
 struct host_cmd_ds_802_11_mac_address *VAR_4 =
       &VAR_3->params.mac_addr;

 FUNC_0(VAR_2->curr_addr, VAR_4->mac_addr, VAR_0);

 FUNC_1(VAR_2->adapter, VAR_1,
      "info: set mac address: %pM\n", VAR_2->curr_addr);

 return 0;
}
