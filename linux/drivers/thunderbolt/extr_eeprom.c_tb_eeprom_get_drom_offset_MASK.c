
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct tb_switch {int cap_plug_events; } ;
struct TYPE_2__ {scalar_t__ not_present; int present; } ;
struct tb_cap_plug_events {int drom_offset; TYPE_1__ eeprom_ctl; } ;
typedef int cap ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tb_switch*,struct tb_cap_plug_events*,int ,int ,int) ;
 int FUNC_1 (struct tb_switch*,char*,...) ;

__attribute__((used)) static int FUNC_2(struct tb_switch *VAR_3, u16 *VAR_4)
{
 struct tb_cap_plug_events VAR_5;
 int VAR_6;
 if (!VAR_3->cap_plug_events) {
  FUNC_1(VAR_3, "no TB_CAP_PLUG_EVENTS, cannot read eeprom\n");
  return -VAR_0;
 }
 VAR_6 = FUNC_0(VAR_3, &VAR_5, VAR_2, VAR_3->cap_plug_events,
        sizeof(VAR_5) / 4);
 if (VAR_6)
  return VAR_6;

 if (!VAR_5.eeprom_ctl.present || VAR_5.eeprom_ctl.not_present) {
  FUNC_1(VAR_3, "no NVM\n");
  return -VAR_0;
 }

 if (VAR_5.drom_offset > 0xffff) {
  FUNC_1(VAR_3, "drom offset is larger than 0xffff: %#x\n",
    VAR_5.drom_offset);
  return -VAR_1;
 }
 *VAR_4 = VAR_5.drom_offset;
 return 0;
}
