
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl_fw {int version; } ;
struct rtl8169_private {int pci_dev; struct rtl_fw* rtl_fw; } ;
struct net_device {int dummy; } ;
struct ethtool_drvinfo {int fw_version; int bus_info; int driver; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct rtl8169_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_1,
    struct ethtool_drvinfo *VAR_2)
{
 struct rtl8169_private *VAR_3 = FUNC_1(VAR_1);
 struct rtl_fw *VAR_4 = VAR_3->rtl_fw;

 FUNC_3(VAR_2->driver, VAR_0, sizeof(VAR_2->driver));
 FUNC_3(VAR_2->bus_info, FUNC_2(VAR_3->pci_dev), sizeof(VAR_2->bus_info));
 FUNC_0(sizeof(VAR_2->fw_version) < sizeof(VAR_4->version));
 if (VAR_4)
  FUNC_3(VAR_2->fw_version, VAR_4->version,
   sizeof(VAR_2->fw_version));
}
