
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct mwifiex_private {int dummy; } ;
struct host_cmd_ds_rf_tx_pwr {void* action; } ;
struct TYPE_2__ {struct host_cmd_ds_rf_tx_pwr txp; } ;
struct host_cmd_ds_command {void* command; void* size; TYPE_1__ params; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct mwifiex_private *VAR_2,
       struct host_cmd_ds_command *VAR_3,
       u16 VAR_4, void *VAR_5)
{
 struct host_cmd_ds_rf_tx_pwr *VAR_6 = &VAR_3->params.txp;

 VAR_3->size = FUNC_0(sizeof(struct host_cmd_ds_rf_tx_pwr)
    + VAR_1);
 VAR_3->command = FUNC_0(VAR_0);
 VAR_6->action = FUNC_0(VAR_4);

 return 0;
}
