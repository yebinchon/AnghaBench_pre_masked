
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct mwifiex_multicast_list {int num_multicast_addr; int mac_list; } ;
struct host_cmd_ds_mac_multicast_adr {int mac_list; void* num_of_adrs; void* action; } ;
struct TYPE_2__ {struct host_cmd_ds_mac_multicast_adr mc_addr; } ;
struct host_cmd_ds_command {void* command; void* size; TYPE_1__ params; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct host_cmd_ds_command *VAR_3,
         u16 VAR_4,
         struct mwifiex_multicast_list *VAR_5)
{
 struct host_cmd_ds_mac_multicast_adr *VAR_6 = &VAR_3->params.mc_addr;

 VAR_3->size = FUNC_0(sizeof(struct host_cmd_ds_mac_multicast_adr) +
    VAR_2);
 VAR_3->command = FUNC_0(VAR_1);

 VAR_6->action = FUNC_0(VAR_4);
 VAR_6->num_of_adrs =
  FUNC_0((u16) VAR_5->num_multicast_addr);
 FUNC_1(VAR_6->mac_list, VAR_5->mac_list,
        VAR_5->num_multicast_addr * VAR_0);

 return 0;
}
