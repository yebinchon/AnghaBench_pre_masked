
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sja1105_xmii_params_entry {scalar_t__* xmii_mode; int speed; } ;
struct TYPE_6__ {TYPE_2__* tables; } ;
struct sja1105_private {TYPE_3__ static_config; TYPE_1__* ds; } ;
struct sja1105_mac_config_entry {scalar_t__* xmii_mode; int speed; } ;
struct device {int dummy; } ;
typedef int sja1105_speed_t ;
typedef scalar_t__ sja1105_phy_interface_t ;
struct TYPE_5__ {struct sja1105_xmii_params_entry* entries; } ;
struct TYPE_4__ {struct device* dev; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;




 scalar_t__ VAR_7 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct sja1105_private*,int) ;
 int FUNC_2 (struct sja1105_private*,size_t,int,struct sja1105_xmii_params_entry*,int) ;

__attribute__((used)) static int FUNC_3(struct sja1105_private *VAR_8, int VAR_9,
          int VAR_10)
{
 struct sja1105_xmii_params_entry *VAR_11;
 struct sja1105_mac_config_entry *VAR_12;
 struct device *VAR_13 = VAR_8->ds->dev;
 sja1105_phy_interface_t VAR_14;
 sja1105_speed_t VAR_15;
 int VAR_16;







 VAR_12 = VAR_8->static_config.tables[VAR_0].entries;
 VAR_11 = VAR_8->static_config.tables[VAR_1].entries;

 switch (VAR_10) {
 case 128:







  VAR_15 = VAR_6;
  break;
 case 131:
  VAR_15 = VAR_5;
  break;
 case 130:
  VAR_15 = VAR_4;
  break;
 case 129:
  VAR_15 = VAR_3;
  break;
 default:
  FUNC_0(VAR_13, "Invalid speed %iMbps\n", VAR_10);
  return -VAR_2;
 }






 VAR_12[VAR_9].speed = VAR_15;


 VAR_16 = FUNC_2(VAR_8, VAR_0, VAR_9,
       &VAR_12[VAR_9], 1);
 if (VAR_16 < 0) {
  FUNC_0(VAR_13, "Failed to write MAC config: %d\n", VAR_16);
  return VAR_16;
 }







 VAR_14 = VAR_11->xmii_mode[VAR_9];
 if (VAR_14 != VAR_7)
  return 0;

 return FUNC_1(VAR_8, VAR_9);
}
