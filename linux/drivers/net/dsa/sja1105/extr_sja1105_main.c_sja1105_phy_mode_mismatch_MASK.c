
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sja1105_xmii_params_entry {int * xmii_mode; } ;
struct TYPE_4__ {TYPE_1__* tables; } ;
struct sja1105_private {TYPE_2__ static_config; } ;
typedef int sja1105_phy_interface_t ;
typedef int phy_interface_t ;
struct TYPE_3__ {struct sja1105_xmii_params_entry* entries; } ;


 size_t VAR_0 ;






 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static bool FUNC_0(struct sja1105_private *VAR_4, int VAR_5,
          phy_interface_t VAR_6)
{
 struct sja1105_xmii_params_entry *VAR_7;
 sja1105_phy_interface_t VAR_8;

 VAR_7 = VAR_4->static_config.tables[VAR_0].entries;
 VAR_8 = VAR_7->xmii_mode[VAR_5];

 switch (VAR_6) {
 case 133:
  return (VAR_8 != VAR_1);
 case 128:
  return (VAR_8 != VAR_3);
 case 132:
 case 131:
 case 130:
 case 129:
  return (VAR_8 != VAR_2);
 default:
  return 1;
 }
}
