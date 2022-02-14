
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct host_cmd_ds_802_11_bg_scan_query {int flush; } ;
struct TYPE_2__ {struct host_cmd_ds_802_11_bg_scan_query bg_scan_query; } ;
struct host_cmd_ds_command {void* size; void* command; TYPE_1__ params; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (scalar_t__) ;

int FUNC_1(struct host_cmd_ds_command *VAR_2)
{
 struct host_cmd_ds_802_11_bg_scan_query *VAR_3 =
  &VAR_2->params.bg_scan_query;

 VAR_2->command = FUNC_0(VAR_0);
 VAR_2->size = FUNC_0(sizeof(struct host_cmd_ds_802_11_bg_scan_query)
    + VAR_1);

 VAR_3->flush = 1;

 return 0;
}
