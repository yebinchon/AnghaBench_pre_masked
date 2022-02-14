
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_5__ {TYPE_1__* parent; } ;
struct net_device {TYPE_2__ dev; } ;
struct ethtool_drvinfo {int bus_info; int fw_version; int driver; } ;
struct ethsw_port_priv {TYPE_3__* ethsw_data; } ;
struct TYPE_6__ {int mc_io; } ;
struct TYPE_4__ {int parent; } ;


 char* VAR_0 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int*,int*) ;
 struct ethsw_port_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,int,char*,int,int) ;
 int FUNC_4 (int ,char*,int) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_1,
         struct ethtool_drvinfo *VAR_2)
{
 struct ethsw_port_priv *VAR_3 = FUNC_2(VAR_1);
 u16 VAR_4, VAR_5;
 int VAR_6;

 FUNC_4(VAR_2->driver, VAR_0, sizeof(VAR_2->driver));

 VAR_6 = FUNC_1(VAR_3->ethsw_data->mc_io, 0,
       &VAR_4,
       &VAR_5);
 if (VAR_6)
  FUNC_4(VAR_2->fw_version, "N/A",
   sizeof(VAR_2->fw_version));
 else
  FUNC_3(VAR_2->fw_version, sizeof(VAR_2->fw_version),
    "%u.%u", VAR_4, VAR_5);

 FUNC_4(VAR_2->bus_info, FUNC_0(VAR_1->dev.parent->parent),
  sizeof(VAR_2->bus_info));
}
