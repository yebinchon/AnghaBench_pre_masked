
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mwifiex_private {int dummy; } ;
struct host_cmd_ds_remain_on_chan {int dummy; } ;
struct TYPE_2__ {struct host_cmd_ds_remain_on_chan roc_cfg; } ;
struct host_cmd_ds_command {TYPE_1__ params; } ;


 int FUNC_0 (struct host_cmd_ds_remain_on_chan*,struct host_cmd_ds_remain_on_chan*,int) ;

__attribute__((used)) static int
FUNC_1(struct mwifiex_private *VAR_0,
      struct host_cmd_ds_command *VAR_1,
      struct host_cmd_ds_remain_on_chan *VAR_2)
{
 struct host_cmd_ds_remain_on_chan *VAR_3 = &VAR_1->params.roc_cfg;

 if (VAR_2)
  FUNC_0(VAR_2, VAR_3, sizeof(*VAR_2));

 return 0;
}
