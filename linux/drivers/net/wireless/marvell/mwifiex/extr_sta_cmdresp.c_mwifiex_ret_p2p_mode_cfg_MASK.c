
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mwifiex_private {int dummy; } ;
struct host_cmd_ds_p2p_mode_cfg {int mode; } ;
struct TYPE_2__ {struct host_cmd_ds_p2p_mode_cfg mode_cfg; } ;
struct host_cmd_ds_command {TYPE_1__ params; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,void*) ;

__attribute__((used)) static int
FUNC_2(struct mwifiex_private *VAR_0,
    struct host_cmd_ds_command *VAR_1,
    void *VAR_2)
{
 struct host_cmd_ds_p2p_mode_cfg *VAR_3 = &VAR_1->params.mode_cfg;

 if (VAR_2)
  FUNC_1(FUNC_0(VAR_3->mode), VAR_2);

 return 0;
}
