
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct host_cmd_ds_sys_config {int * tlv; void* action; } ;
struct TYPE_2__ {int uap_sys_config; } ;
struct host_cmd_ds_command {void* size; TYPE_1__ params; void* command; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;


 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,void*,scalar_t__*) ;
 int FUNC_2 (int *,void*,scalar_t__*) ;

__attribute__((used)) static int
FUNC_3(struct host_cmd_ds_command *VAR_2, u16 VAR_3,
      u32 VAR_4, void *VAR_5)
{
 u8 *VAR_6;
 u16 VAR_7, VAR_8, VAR_9;
 struct host_cmd_ds_sys_config *VAR_10;

 VAR_2->command = FUNC_0(VAR_0);
 VAR_7 = (u16)(sizeof(struct host_cmd_ds_sys_config) + VAR_1);
 VAR_10 = (struct host_cmd_ds_sys_config *)&VAR_2->params.uap_sys_config;
 VAR_10->action = FUNC_0(VAR_3);
 VAR_6 = VAR_10->tlv;

 switch (VAR_4) {
 case 129:
  VAR_8 = VAR_7;
  if (FUNC_1(VAR_6, VAR_5, &VAR_8))
   return -1;
  VAR_2->size = FUNC_0(VAR_8);
  break;
 case 128:
  VAR_9 = VAR_7;
  if (FUNC_2(VAR_6, VAR_5, &VAR_9))
   return -1;
  VAR_2->size = FUNC_0(VAR_9);
  break;
 default:
  return -1;
 }

 return 0;
}
