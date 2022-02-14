
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mwifiex_private {int dummy; } ;
struct host_cmd_ds_wakeup_reason {int dummy; } ;
struct host_cmd_ds_command {void* size; void* command; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct mwifiex_private *VAR_2,
      struct host_cmd_ds_command *VAR_3)
{
 VAR_3->command = FUNC_0(VAR_0);
 VAR_3->size = FUNC_0(sizeof(struct host_cmd_ds_wakeup_reason) +
    VAR_1);

 return 0;
}
