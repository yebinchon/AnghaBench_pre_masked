
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ parent; } ;
struct net_device {TYPE_1__ dev; } ;
struct i2400m {scalar_t__ fw_name; } ;
struct ethtool_drvinfo {int bus_info; int fw_version; int driver; } ;


 char* VAR_0 ;
 char* FUNC_0 (scalar_t__) ;
 struct i2400m* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_1,
          struct ethtool_drvinfo *VAR_2)
{
 struct i2400m *VAR_3 = FUNC_1(VAR_1);

 FUNC_2(VAR_2->driver, VAR_0, sizeof(VAR_2->driver));
 FUNC_2(VAR_2->fw_version, VAR_3->fw_name ? : "",
  sizeof(VAR_2->fw_version));
 if (VAR_1->dev.parent)
  FUNC_2(VAR_2->bus_info, FUNC_0(VAR_1->dev.parent),
   sizeof(VAR_2->bus_info));
}
