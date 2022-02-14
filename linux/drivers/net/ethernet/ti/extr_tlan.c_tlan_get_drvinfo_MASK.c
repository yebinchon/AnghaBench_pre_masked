
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tlan_priv {scalar_t__ pci_dev; } ;
struct net_device {int dummy; } ;
struct ethtool_drvinfo {int bus_info; int driver; } ;


 char* VAR_0 ;
 struct tlan_priv* FUNC_0 (struct net_device*) ;
 char* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_1,
        struct ethtool_drvinfo *VAR_2)
{
 struct tlan_priv *VAR_3 = FUNC_0(VAR_1);

 FUNC_2(VAR_2->driver, VAR_0, sizeof(VAR_2->driver));
 if (VAR_3->pci_dev)
  FUNC_2(VAR_2->bus_info, FUNC_1(VAR_3->pci_dev),
   sizeof(VAR_2->bus_info));
 else
  FUNC_2(VAR_2->bus_info, "EISA", sizeof(VAR_2->bus_info));
}
