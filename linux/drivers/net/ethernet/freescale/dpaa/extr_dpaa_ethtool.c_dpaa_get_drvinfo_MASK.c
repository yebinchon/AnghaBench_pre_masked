
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* parent; } ;
struct net_device {TYPE_2__ dev; } ;
struct ethtool_drvinfo {int bus_info; int fw_version; int version; int driver; } ;
struct TYPE_3__ {int parent; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct net_device*,char*,int) ;
 int FUNC_2 (int ,int,char*,int ) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_1,
        struct ethtool_drvinfo *VAR_2)
{
 int VAR_3;

 FUNC_3(VAR_2->driver, VAR_0,
  sizeof(VAR_2->driver));
 VAR_3 = FUNC_2(VAR_2->version, sizeof(VAR_2->version),
         "%X", 0);
 VAR_3 = FUNC_2(VAR_2->fw_version, sizeof(VAR_2->fw_version),
         "%X", 0);

 if (VAR_3 >= sizeof(VAR_2->fw_version)) {

  FUNC_1(VAR_1, "snprintf() = %d\n", VAR_3);
 }
 FUNC_3(VAR_2->bus_info, FUNC_0(VAR_1->dev.parent->parent),
  sizeof(VAR_2->bus_info));
}
