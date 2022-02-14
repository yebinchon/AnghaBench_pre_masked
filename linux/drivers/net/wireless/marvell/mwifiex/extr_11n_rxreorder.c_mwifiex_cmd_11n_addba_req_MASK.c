
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct host_cmd_ds_11n_addba_req {int dummy; } ;
struct TYPE_2__ {struct host_cmd_ds_11n_addba_req add_ba_req; } ;
struct host_cmd_ds_command {void* size; void* command; TYPE_1__ params; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct host_cmd_ds_11n_addba_req*,void*,int) ;

int FUNC_2(struct host_cmd_ds_command *VAR_2, void *VAR_3)
{
 struct host_cmd_ds_11n_addba_req *VAR_4 = &VAR_2->params.add_ba_req;

 VAR_2->command = FUNC_0(VAR_0);
 VAR_2->size = FUNC_0(sizeof(*VAR_4) + VAR_1);
 FUNC_1(VAR_4, VAR_3, sizeof(*VAR_4));

 return 0;
}
