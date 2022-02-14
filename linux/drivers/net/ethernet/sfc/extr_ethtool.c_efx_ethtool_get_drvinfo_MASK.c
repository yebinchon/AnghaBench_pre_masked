
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_drvinfo {int bus_info; int fw_version; int version; int driver; } ;
struct efx_nic {int pci_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct efx_nic*,int ,int) ;
 struct efx_nic* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_2,
        struct ethtool_drvinfo *VAR_3)
{
 struct efx_nic *VAR_4 = FUNC_1(VAR_2);

 FUNC_3(VAR_3->driver, VAR_1, sizeof(VAR_3->driver));
 FUNC_3(VAR_3->version, VAR_0, sizeof(VAR_3->version));
 FUNC_0(VAR_4, VAR_3->fw_version,
        sizeof(VAR_3->fw_version));
 FUNC_3(VAR_3->bus_info, FUNC_2(VAR_4->pci_dev), sizeof(VAR_3->bus_info));
}
