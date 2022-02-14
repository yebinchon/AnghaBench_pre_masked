
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct mwifiex_private {int curr_addr; } ;
struct TYPE_3__ {int mac_addr; void* action; } ;
struct TYPE_4__ {TYPE_1__ mac_addr; } ;
struct host_cmd_ds_command {TYPE_2__ params; scalar_t__ result; void* size; void* command; } ;
struct host_cmd_ds_802_11_mac_address {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct mwifiex_private *VAR_4,
       struct host_cmd_ds_command *VAR_5,
       u16 VAR_6)
{
 VAR_5->command = FUNC_0(VAR_2);
 VAR_5->size = FUNC_0(sizeof(struct host_cmd_ds_802_11_mac_address) +
    VAR_3);
 VAR_5->result = 0;

 VAR_5->params.mac_addr.action = FUNC_0(VAR_6);

 if (VAR_6 == VAR_1)
  FUNC_1(VAR_5->params.mac_addr.mac_addr, VAR_4->curr_addr,
         VAR_0);
 return 0;
}
