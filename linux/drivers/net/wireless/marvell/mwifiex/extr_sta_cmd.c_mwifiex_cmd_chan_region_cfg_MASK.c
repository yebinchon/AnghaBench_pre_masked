
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct mwifiex_private {int dummy; } ;
struct host_cmd_ds_chan_region_cfg {void* action; } ;
struct TYPE_2__ {struct host_cmd_ds_chan_region_cfg reg_cfg; } ;
struct host_cmd_ds_command {void* size; void* command; TYPE_1__ params; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct mwifiex_private *VAR_3,
           struct host_cmd_ds_command *VAR_4,
           u16 VAR_5)
{
 struct host_cmd_ds_chan_region_cfg *VAR_6 = &VAR_4->params.reg_cfg;

 VAR_4->command = FUNC_0(VAR_1);
 VAR_4->size = FUNC_0(sizeof(*VAR_6) + VAR_2);

 if (VAR_5 == VAR_0)
  VAR_6->action = FUNC_0(VAR_5);

 return 0;
}
