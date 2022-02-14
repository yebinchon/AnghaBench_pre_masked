
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct host_cmd_ds_802_11_ibss_status {void* enable; void* action; } ;
struct TYPE_2__ {struct host_cmd_ds_802_11_ibss_status ibss_coalescing; } ;
struct host_cmd_ds_command {scalar_t__ result; void* size; void* command; TYPE_1__ params; } ;




 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct host_cmd_ds_command *VAR_2,
           u16 VAR_3, u16 *VAR_4)
{
 struct host_cmd_ds_802_11_ibss_status *VAR_5 =
  &(VAR_2->params.ibss_coalescing);

 VAR_2->command = FUNC_0(VAR_0);
 VAR_2->size = FUNC_0(sizeof(struct host_cmd_ds_802_11_ibss_status) +
    VAR_1);
 VAR_2->result = 0;
 VAR_5->action = FUNC_0(VAR_3);

 switch (VAR_3) {
 case 128:
  if (VAR_4)
   VAR_5->enable = FUNC_0(*VAR_4);
  else
   VAR_5->enable = 0;
  break;


 case 129:
 default:
  break;
 }

 return 0;
}
