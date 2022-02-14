
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ const u16 ;
struct mwifiex_private {int dummy; } ;
struct host_cmd_ds_multi_chan_policy {void* policy; void* action; } ;
struct TYPE_2__ {struct host_cmd_ds_multi_chan_policy mc_policy; } ;
struct host_cmd_ds_command {void* size; void* command; TYPE_1__ params; } ;


 scalar_t__ const VAR_0 ;
 scalar_t__ const VAR_1 ;
 void* FUNC_0 (scalar_t__ const) ;

__attribute__((used)) static int
FUNC_1(struct mwifiex_private *VAR_2,
     struct host_cmd_ds_command *VAR_3,
     u16 VAR_4, void *VAR_5)
{
 struct host_cmd_ds_multi_chan_policy *VAR_6 = &VAR_3->params.mc_policy;
 const u16 *VAR_7 = VAR_5;

 VAR_6->action = FUNC_0(VAR_4);
 VAR_6->policy = FUNC_0(*VAR_7);
 VAR_3->command = FUNC_0(VAR_0);
 VAR_3->size = FUNC_0(sizeof(struct host_cmd_ds_multi_chan_policy) +
    VAR_1);
 return 0;
}
