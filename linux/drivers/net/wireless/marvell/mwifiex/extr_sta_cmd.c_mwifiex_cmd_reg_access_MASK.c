
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
typedef int u16 ;
struct mwifiex_ds_reg_rw {int value; int offset; } ;
struct mwifiex_ds_read_eeprom {int byte_count; int offset; } ;
struct host_cmd_ds_rf_reg_access {void* value; void* offset; void* action; } ;
struct host_cmd_ds_pmic_reg_access {void* value; void* offset; void* action; } ;
struct host_cmd_ds_mac_reg_access {int value; void* offset; void* action; } ;
struct host_cmd_ds_802_11_eeprom_access {int value; void* byte_count; void* offset; void* action; } ;
struct host_cmd_ds_bbp_reg_access {void* value; void* offset; void* action; } ;
struct TYPE_2__ {struct host_cmd_ds_802_11_eeprom_access eeprom; struct host_cmd_ds_rf_reg_access rf_reg; struct host_cmd_ds_pmic_reg_access pmic_reg; struct host_cmd_ds_bbp_reg_access bbp_reg; struct host_cmd_ds_mac_reg_access mac_reg; } ;
struct host_cmd_ds_command {void* size; TYPE_1__ params; int command; } ;
 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct host_cmd_ds_command *VAR_1,
      u16 VAR_2, void *VAR_3)
{
 struct mwifiex_ds_reg_rw *VAR_4 = VAR_3;

 switch (FUNC_2(VAR_1->command)) {
 case 130:
 {
  struct host_cmd_ds_mac_reg_access *VAR_5;

  VAR_1->size = FUNC_0(sizeof(*VAR_5) + VAR_0);
  VAR_5 = &VAR_1->params.mac_reg;
  VAR_5->action = FUNC_0(VAR_2);
  VAR_5->offset = FUNC_0((u16) VAR_4->offset);
  VAR_5->value = FUNC_1(VAR_4->value);
  break;
 }
 case 132:
 {
  struct host_cmd_ds_bbp_reg_access *VAR_6;

  VAR_1->size = FUNC_0(sizeof(*VAR_6) + VAR_0);
  VAR_6 = &VAR_1->params.bbp_reg;
  VAR_6->action = FUNC_0(VAR_2);
  VAR_6->offset = FUNC_0((u16) VAR_4->offset);
  VAR_6->value = (u8) VAR_4->value;
  break;
 }
 case 128:
 {
  struct host_cmd_ds_rf_reg_access *VAR_7;

  VAR_1->size = FUNC_0(sizeof(*VAR_7) + VAR_0);
  VAR_7 = &VAR_1->params.rf_reg;
  VAR_7->action = FUNC_0(VAR_2);
  VAR_7->offset = FUNC_0((u16) VAR_4->offset);
  VAR_7->value = (u8) VAR_4->value;
  break;
 }
 case 129:
 {
  struct host_cmd_ds_pmic_reg_access *VAR_8;

  VAR_1->size = FUNC_0(sizeof(*VAR_8) + VAR_0);
  VAR_8 = &VAR_1->params.pmic_reg;
  VAR_8->action = FUNC_0(VAR_2);
  VAR_8->offset = FUNC_0((u16) VAR_4->offset);
  VAR_8->value = (u8) VAR_4->value;
  break;
 }
 case 131:
 {
  struct host_cmd_ds_rf_reg_access *VAR_9;

  VAR_1->size = FUNC_0(sizeof(*VAR_9) + VAR_0);
  VAR_9 = &VAR_1->params.rf_reg;
  VAR_9->action = FUNC_0(VAR_2);
  VAR_9->offset = FUNC_0((u16) VAR_4->offset);
  VAR_9->value = (u8) VAR_4->value;
  break;
 }
 case 133:
 {
  struct mwifiex_ds_read_eeprom *VAR_10 = VAR_3;
  struct host_cmd_ds_802_11_eeprom_access *VAR_11 =
   &VAR_1->params.eeprom;

  VAR_1->size = FUNC_0(sizeof(*VAR_11) + VAR_0);
  VAR_11->action = FUNC_0(VAR_2);
  VAR_11->offset = FUNC_0(VAR_10->offset);
  VAR_11->byte_count = FUNC_0(VAR_10->byte_count);
  VAR_11->value = 0;
  break;
 }
 default:
  return -1;
 }

 return 0;
}
