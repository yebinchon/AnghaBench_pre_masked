
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct hns_nic_priv {TYPE_2__* dev; } ;
struct ethtool_drvinfo {char* version; char* driver; char* bus_info; char* fw_version; scalar_t__ eedump_len; } ;
struct TYPE_4__ {TYPE_1__* bus; } ;
struct TYPE_3__ {char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 struct hns_nic_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_4,
    struct ethtool_drvinfo *VAR_5)
{
 struct hns_nic_priv *VAR_6 = FUNC_0(VAR_4);

 FUNC_1(VAR_5->version, VAR_3,
  sizeof(VAR_5->version));
 VAR_5->version[sizeof(VAR_5->version) - 1] = '\0';

 FUNC_1(VAR_5->driver, VAR_2, sizeof(VAR_5->driver));
 VAR_5->driver[sizeof(VAR_5->driver) - 1] = '\0';

 FUNC_1(VAR_5->bus_info, VAR_6->dev->bus->name,
  sizeof(VAR_5->bus_info));
 VAR_5->bus_info[VAR_0 - 1] = '\0';

 FUNC_1(VAR_5->fw_version, "N/A", VAR_1);
 VAR_5->eedump_len = 0;
}
