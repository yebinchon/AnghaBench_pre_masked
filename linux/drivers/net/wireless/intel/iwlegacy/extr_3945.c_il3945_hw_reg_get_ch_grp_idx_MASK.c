
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct il_priv {scalar_t__ eeprom; } ;
struct il_channel_info {int channel; } ;
struct il3945_eeprom_txpower_group {int group_channel; } ;
struct il3945_eeprom {struct il3945_eeprom_txpower_group* groups; } ;


 int FUNC_0 (char*,int,int) ;
 scalar_t__ FUNC_1 (struct il_channel_info const*) ;

__attribute__((used)) static u16
FUNC_2(struct il_priv *VAR_0,
        const struct il_channel_info *VAR_1)
{
 struct il3945_eeprom *VAR_2 = (struct il3945_eeprom *)VAR_0->eeprom;
 struct il3945_eeprom_txpower_group *VAR_3 = &VAR_2->groups[0];
 u8 VAR_4;
 u16 VAR_5 = 0;
 u8 VAR_6;


 if (FUNC_1(VAR_1)) {
  for (VAR_4 = 1; VAR_4 < 5; VAR_4++) {
   VAR_6 = VAR_3[VAR_4].group_channel;
   if (VAR_1->channel <= VAR_6) {
    VAR_5 = VAR_4;
    break;
   }
  }

  if (VAR_4 == 5)
   VAR_5 = 4;
 } else
  VAR_5 = 0;

 FUNC_0("Chnl %d mapped to grp %d\n", VAR_1->channel, VAR_5);
 return VAR_5;
}
