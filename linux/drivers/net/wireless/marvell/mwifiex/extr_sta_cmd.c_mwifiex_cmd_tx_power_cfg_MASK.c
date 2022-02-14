
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct mwifiex_types_power_group {void* length; } ;
struct host_cmd_ds_txpwr_cfg {void* action; int mode; } ;
struct TYPE_2__ {struct host_cmd_ds_txpwr_cfg txp_cfg; } ;
struct host_cmd_ds_command {void* size; void* command; TYPE_1__ params; } ;




 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct host_cmd_ds_txpwr_cfg*,struct host_cmd_ds_txpwr_cfg*,int) ;

__attribute__((used)) static int FUNC_3(struct host_cmd_ds_command *VAR_2,
        u16 VAR_3,
        struct host_cmd_ds_txpwr_cfg *VAR_4)
{
 struct mwifiex_types_power_group *VAR_5;
 struct host_cmd_ds_txpwr_cfg *VAR_6 = &VAR_2->params.txp_cfg;

 VAR_2->command = FUNC_0(VAR_0);
 VAR_2->size =
  FUNC_0(VAR_1 + sizeof(struct host_cmd_ds_txpwr_cfg));
 switch (VAR_3) {
 case 128:
  if (VAR_4->mode) {
   VAR_5 = (struct mwifiex_types_power_group
      *) ((unsigned long) VAR_4 +
         sizeof(struct host_cmd_ds_txpwr_cfg));
   FUNC_2(VAR_6, VAR_4,
    sizeof(struct host_cmd_ds_txpwr_cfg) +
    sizeof(struct mwifiex_types_power_group) +
    FUNC_1(VAR_5->length));

   VAR_5 = (struct mwifiex_types_power_group *) ((u8 *)
      VAR_6 +
      sizeof(struct host_cmd_ds_txpwr_cfg));
   VAR_2->size = FUNC_0(FUNC_1(VAR_2->size) +
      sizeof(struct mwifiex_types_power_group) +
      FUNC_1(VAR_5->length));
  } else {
   FUNC_2(VAR_6, VAR_4, sizeof(*VAR_4));
  }
  VAR_6->action = FUNC_0(VAR_3);
  break;
 case 129:
  VAR_6->action = FUNC_0(VAR_3);
  break;
 }

 return 0;
}
