
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mwifiex_private {int dummy; } ;
struct host_cmd_ds_sta_deauth {void* reason; int mac; } ;
struct TYPE_2__ {struct host_cmd_ds_sta_deauth sta_deauth; } ;
struct host_cmd_ds_command {void* size; void* command; TYPE_1__ params; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int *,int ) ;

__attribute__((used)) static int FUNC_2(struct mwifiex_private *VAR_4,
          struct host_cmd_ds_command *VAR_5, u8 *VAR_6)
{
 struct host_cmd_ds_sta_deauth *VAR_7 = &VAR_5->params.sta_deauth;

 VAR_5->command = FUNC_0(VAR_1);
 FUNC_1(VAR_7->mac, VAR_6, VAR_0);
 VAR_7->reason = FUNC_0(VAR_3);

 VAR_5->size = FUNC_0(sizeof(struct host_cmd_ds_sta_deauth) +
    VAR_2);
 return 0;
}
