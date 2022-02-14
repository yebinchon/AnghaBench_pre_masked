
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct host_cmd_ds_command {void* size; void* command; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct host_cmd_ds_command *VAR_2)
{
 VAR_2->command = FUNC_0(VAR_0);
 VAR_2->size = FUNC_0(VAR_1);
 return 0;
}
