
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mwifiex_private {int curr_addr; } ;
struct host_cmd_ds_get_hw_spec {int permanent_addr; } ;
struct TYPE_2__ {struct host_cmd_ds_get_hw_spec hw_spec; } ;
struct host_cmd_ds_command {void* size; void* command; TYPE_1__ params; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int ,int ) ;

int FUNC_2(struct mwifiex_private *VAR_3,
       struct host_cmd_ds_command *VAR_4)
{
 struct host_cmd_ds_get_hw_spec *VAR_5 = &VAR_4->params.hw_spec;

 VAR_4->command = FUNC_0(VAR_1);
 VAR_4->size =
  FUNC_0(sizeof(struct host_cmd_ds_get_hw_spec) + VAR_2);
 FUNC_1(VAR_5->permanent_addr, VAR_3->curr_addr, VAR_0);

 return 0;
}
