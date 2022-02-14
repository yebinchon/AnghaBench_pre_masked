
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct mwifiex_ds_mem_rw {int value; int addr; } ;
struct host_cmd_ds_mem_access {void* value; void* addr; void* action; } ;
struct TYPE_2__ {int mem; } ;
struct host_cmd_ds_command {void* size; void* command; TYPE_1__ params; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (scalar_t__) ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct host_cmd_ds_command *VAR_2, u16 VAR_3,
         void *VAR_4)
{
 struct mwifiex_ds_mem_rw *VAR_5 = (void *)VAR_4;
 struct host_cmd_ds_mem_access *VAR_6 = (void *)&VAR_2->params.mem;

 VAR_2->command = FUNC_0(VAR_0);
 VAR_2->size = FUNC_0(sizeof(struct host_cmd_ds_mem_access) +
    VAR_1);

 VAR_6->action = FUNC_0(VAR_3);
 VAR_6->addr = FUNC_1(VAR_5->addr);
 VAR_6->value = FUNC_1(VAR_5->value);

 return 0;
}
