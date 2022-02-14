
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sja1105_table {int entry_count; struct sja1105_mac_config_entry* entries; TYPE_2__* ops; } ;
struct TYPE_3__ {struct sja1105_table* tables; } ;
struct sja1105_private {int ds; TYPE_1__ static_config; } ;
struct sja1105_mac_config_entry {int maxage; int vlanid; int ing_mirr; int egr_mirr; int drpnona664; int drpdtag; int drpuntag; int retag; int dyn_learn; int egress; int ingress; int vlanprio; int tp_delout; int tp_delin; int speed; int ifg; int enabled; int base; int top; } ;
struct TYPE_4__ {int unpacked_entry_size; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int) ;
 struct sja1105_mac_config_entry* FUNC_1 (int,int ,int ) ;
 int FUNC_2 (struct sja1105_mac_config_entry*) ;

__attribute__((used)) static int FUNC_3(struct sja1105_private *VAR_5)
{
 struct sja1105_mac_config_entry VAR_6 = {




  .top = {0x3F, 0x7F, 0xBF, 0xFF, 0x13F, 0x17F, 0x1BF, 0x1FF},
  .base = {0x0, 0x40, 0x80, 0xC0, 0x100, 0x140, 0x180, 0x1C0},
  .enabled = {1, 1, 1, 1, 1, 1, 1, 1},

  .ifg = 0,



  .speed = VAR_4,

  .tp_delin = 0,
  .tp_delout = 0,

  .maxage = 0xFF,

  .vlanprio = 0,
  .vlanid = 1,
  .ing_mirr = 0,
  .egr_mirr = 0,

  .drpnona664 = 0,

  .drpdtag = 0,

  .drpuntag = 0,

  .retag = 0,



  .dyn_learn = 0,
  .egress = 0,
  .ingress = 0,
 };
 struct sja1105_mac_config_entry *VAR_7;
 struct sja1105_table *VAR_8;
 int VAR_9;

 VAR_8 = &VAR_5->static_config.tables[VAR_0];


 if (VAR_8->entry_count) {
  FUNC_2(VAR_8->entries);
  VAR_8->entry_count = 0;
 }

 VAR_8->entries = FUNC_1(VAR_3,
     VAR_8->ops->unpacked_entry_size, VAR_2);
 if (!VAR_8->entries)
  return -VAR_1;

 VAR_8->entry_count = VAR_3;

 VAR_7 = VAR_8->entries;

 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
  VAR_7[VAR_9] = VAR_6;
  if (VAR_9 == FUNC_0(VAR_5->ds, VAR_9)) {



   VAR_7[VAR_9].dyn_learn = 1;
   VAR_7[VAR_9].ingress = 1;
   VAR_7[VAR_9].egress = 1;
  }
 }

 return 0;
}
