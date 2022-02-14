
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* tables; } ;
struct sja1105_private {TYPE_4__* info; TYPE_3__ static_config; TYPE_1__* ds; } ;
struct sja1105_mac_config_entry {int speed; } ;
struct device {int dummy; } ;
typedef int sja1105_speed_t ;
typedef scalar_t__ sja1105_mii_role_t ;
struct TYPE_8__ {int (* setup_rgmii_delay ) (struct sja1105_private*,int) ;} ;
struct TYPE_6__ {struct sja1105_mac_config_entry* entries; } ;
struct TYPE_5__ {struct device* dev; } ;


 size_t VAR_0 ;
 int VAR_1 ;




 scalar_t__ VAR_2 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct sja1105_private*,int,int,int) ;
 int FUNC_3 (struct sja1105_private*,int,int) ;
 int FUNC_4 (struct sja1105_private*,int) ;
 int FUNC_5 (struct sja1105_private*,int) ;

__attribute__((used)) static int FUNC_6(struct sja1105_private *VAR_3, int VAR_4,
     sja1105_mii_role_t VAR_5)
{
 struct device *VAR_6 = VAR_3->ds->dev;
 struct sja1105_mac_config_entry *VAR_7;
 sja1105_speed_t VAR_8;
 int VAR_9;

 VAR_7 = VAR_3->static_config.tables[VAR_0].entries;
 VAR_8 = VAR_7[VAR_4].speed;

 FUNC_0(VAR_6, "Configuring port %d RGMII at speed %dMbps\n",
  VAR_4, VAR_8);

 switch (VAR_8) {
 case 131:

  VAR_9 = FUNC_2(VAR_3, VAR_4, 0, 1);
  break;
 case 130:

  VAR_9 = FUNC_2(VAR_3, VAR_4, 1, 1);
  break;
 case 129:

  VAR_9 = FUNC_2(VAR_3, VAR_4, 1, 10);
  break;
 case 128:



  FUNC_0(VAR_6, "Speed not available, skipping CGU config\n");
  return 0;
 default:
  VAR_9 = -VAR_1;
 }

 if (VAR_9 < 0) {
  FUNC_1(VAR_6, "Failed to configure idiv\n");
  return VAR_9;
 }
 VAR_9 = FUNC_3(VAR_3, VAR_4, VAR_8);
 if (VAR_9 < 0) {
  FUNC_1(VAR_6, "Failed to configure RGMII Tx clock\n");
  return VAR_9;
 }
 VAR_9 = FUNC_4(VAR_3, VAR_4);
 if (VAR_9 < 0) {
  FUNC_1(VAR_6, "Failed to configure Tx pad registers\n");
  return VAR_9;
 }
 if (!VAR_3->info->setup_rgmii_delay)
  return 0;




 if (VAR_5 == VAR_2)
  return 0;

 return VAR_3->info->setup_rgmii_delay(VAR_3, VAR_4);
}
