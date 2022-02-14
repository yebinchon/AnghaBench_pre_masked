
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int liquidio_firmware_version; } ;
struct octeon_device {int pci_dev; TYPE_1__ fw_info; } ;
struct net_device {int dummy; } ;
struct lio {struct octeon_device* oct_dev; } ;
struct ethtool_drvinfo {int bus_info; int fw_version; int version; int driver; } ;


 int VAR_0 ;
 struct lio* FUNC_0 (struct net_device*) ;
 char* VAR_1 ;
 int FUNC_1 (struct ethtool_drvinfo*,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_5(struct net_device *VAR_2, struct ethtool_drvinfo *VAR_3)
{
 struct lio *VAR_4;
 struct octeon_device *VAR_5;

 VAR_4 = FUNC_0(VAR_2);
 VAR_5 = VAR_4->oct_dev;

 FUNC_1(VAR_3, 0, sizeof(struct ethtool_drvinfo));
 FUNC_3(VAR_3->driver, "liquidio");
 FUNC_3(VAR_3->version, VAR_1);
 FUNC_4(VAR_3->fw_version, VAR_5->fw_info.liquidio_firmware_version,
  VAR_0);
 FUNC_4(VAR_3->bus_info, FUNC_2(VAR_5->pci_dev), 32);
}
