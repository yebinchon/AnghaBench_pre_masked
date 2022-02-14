
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;
struct ethtool_drvinfo {int bus_info; int version; int driver; } ;
struct ei_device {scalar_t__ priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ei_device* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_2,
     struct ethtool_drvinfo *VAR_3)
{
 struct ei_device *VAR_4 = FUNC_0(VAR_2);
 struct pci_dev *VAR_5 = (struct pci_dev *) VAR_4->priv;

 FUNC_2(VAR_3->driver, VAR_0, sizeof(VAR_3->driver));
 FUNC_2(VAR_3->version, VAR_1, sizeof(VAR_3->version));
 FUNC_2(VAR_3->bus_info, FUNC_1(VAR_5), sizeof(VAR_3->bus_info));
}
