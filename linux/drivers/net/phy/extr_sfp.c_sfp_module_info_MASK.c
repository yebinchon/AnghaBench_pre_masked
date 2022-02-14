
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int diagmon; scalar_t__ sff8472_compliance; } ;
struct TYPE_4__ {TYPE_1__ ext; } ;
struct sfp {TYPE_2__ id; } ;
struct ethtool_modinfo {int eeprom_len; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_0(struct sfp *VAR_5, struct ethtool_modinfo *VAR_6)
{


 if (VAR_5->id.ext.sff8472_compliance &&
     !(VAR_5->id.ext.diagmon & VAR_4)) {
  VAR_6->type = VAR_2;
  VAR_6->eeprom_len = VAR_3;
 } else {
  VAR_6->type = VAR_0;
  VAR_6->eeprom_len = VAR_1;
 }
 return 0;
}
