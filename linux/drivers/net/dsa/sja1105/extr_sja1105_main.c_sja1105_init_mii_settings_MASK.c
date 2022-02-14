
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sja1105_xmii_params_entry {int * phy_mac; int * xmii_mode; } ;
struct sja1105_table {struct sja1105_xmii_params_entry* entries; scalar_t__ entry_count; TYPE_3__* ops; } ;
struct TYPE_5__ {struct sja1105_table* tables; } ;
struct sja1105_private {TYPE_2__ static_config; TYPE_1__* spidev; } ;
struct sja1105_dt_port {int phy_mode; int role; } ;
struct device {int dummy; } ;
struct TYPE_6__ {int unpacked_entry_size; } ;
struct TYPE_4__ {struct device dev; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;






 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct device*,char*,int ) ;
 struct sja1105_xmii_params_entry* FUNC_1 (scalar_t__,int ,int ) ;
 int FUNC_2 (struct sja1105_xmii_params_entry*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct sja1105_private *VAR_8,
         struct sja1105_dt_port *VAR_9)
{
 struct device *VAR_10 = &VAR_8->spidev->dev;
 struct sja1105_xmii_params_entry *VAR_11;
 struct sja1105_table *VAR_12;
 int VAR_13;

 VAR_12 = &VAR_8->static_config.tables[VAR_0];


 if (VAR_12->entry_count) {
  FUNC_2(VAR_12->entries);
  VAR_12->entry_count = 0;
 }

 VAR_12->entries = FUNC_1(VAR_3,
     VAR_12->ops->unpacked_entry_size, VAR_2);
 if (!VAR_12->entries)
  return -VAR_1;


 VAR_12->entry_count = VAR_3;

 VAR_11 = VAR_12->entries;

 for (VAR_13 = 0; VAR_13 < VAR_4; VAR_13++) {
  switch (VAR_9[VAR_13].phy_mode) {
  case 133:
   VAR_11->xmii_mode[VAR_13] = VAR_5;
   break;
  case 128:
   VAR_11->xmii_mode[VAR_13] = VAR_7;
   break;
  case 132:
  case 131:
  case 130:
  case 129:
   VAR_11->xmii_mode[VAR_13] = VAR_6;
   break;
  default:
   FUNC_0(VAR_10, "Unsupported PHY mode %s!\n",
    FUNC_3(VAR_9[VAR_13].phy_mode));
  }

  VAR_11->phy_mac[VAR_13] = VAR_9[VAR_13].role;
 }
 return 0;
}
