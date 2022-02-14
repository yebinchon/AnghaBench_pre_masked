
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void* value; void* addr; } ;
struct mwifiex_private {TYPE_2__ mem_rw; } ;
struct host_cmd_ds_mem_access {int value; int addr; } ;
struct TYPE_3__ {int mem; } ;
struct host_cmd_ds_command {TYPE_1__ params; } ;


 void* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(struct mwifiex_private *VAR_0,
         struct host_cmd_ds_command *VAR_1, void *VAR_2)
{
 struct host_cmd_ds_mem_access *VAR_3 = (void *)&VAR_1->params.mem;

 VAR_0->mem_rw.addr = FUNC_0(VAR_3->addr);
 VAR_0->mem_rw.value = FUNC_0(VAR_3->value);

 return 0;
}
