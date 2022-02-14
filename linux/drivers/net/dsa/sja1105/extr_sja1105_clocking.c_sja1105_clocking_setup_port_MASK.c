
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sja1105_xmii_params_entry {int* xmii_mode; int * phy_mac; } ;
struct TYPE_4__ {TYPE_3__* tables; } ;
struct sja1105_private {TYPE_1__ static_config; TYPE_2__* ds; } ;
struct device {int dummy; } ;
typedef int sja1105_phy_interface_t ;
typedef int sja1105_mii_role_t ;
struct TYPE_6__ {struct sja1105_xmii_params_entry* entries; } ;
struct TYPE_5__ {struct device* dev; } ;


 size_t VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (struct device*,char*,int,...) ;
 int FUNC_1 (struct sja1105_private*,int,int ) ;
 int FUNC_2 (struct sja1105_private*,int,int ) ;
 int FUNC_3 (struct sja1105_private*,int,int ) ;

int FUNC_4(struct sja1105_private *VAR_2, int VAR_3)
{
 struct sja1105_xmii_params_entry *VAR_4;
 struct device *VAR_5 = VAR_2->ds->dev;
 sja1105_phy_interface_t VAR_6;
 sja1105_mii_role_t VAR_7;
 int VAR_8;

 VAR_4 = VAR_2->static_config.tables[VAR_0].entries;


 VAR_6 = VAR_4->xmii_mode[VAR_3];

 VAR_7 = VAR_4->phy_mac[VAR_3];

 switch (VAR_6) {
 case 130:
  VAR_8 = FUNC_1(VAR_2, VAR_3, VAR_7);
  break;
 case 128:
  VAR_8 = FUNC_3(VAR_2, VAR_3, VAR_7);
  break;
 case 129:
  VAR_8 = FUNC_2(VAR_2, VAR_3, VAR_7);
  break;
 default:
  FUNC_0(VAR_5, "Invalid interface mode specified: %d\n",
   VAR_6);
  return -VAR_1;
 }
 if (VAR_8)
  FUNC_0(VAR_5, "Clocking setup for port %d failed: %d\n",
   VAR_3, VAR_8);
 return VAR_8;
}
