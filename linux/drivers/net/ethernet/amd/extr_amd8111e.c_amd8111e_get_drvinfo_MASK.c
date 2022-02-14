
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;
struct ethtool_drvinfo {int bus_info; int fw_version; int version; int driver; } ;
struct amd8111e_priv {struct pci_dev* pci_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct amd8111e_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (int ,int,char*,int) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_3,
     struct ethtool_drvinfo *VAR_4)
{
 struct amd8111e_priv *VAR_5 = FUNC_0(VAR_3);
 struct pci_dev *VAR_6 = VAR_5->pci_dev;
 FUNC_3(VAR_4->driver, VAR_0, sizeof(VAR_4->driver));
 FUNC_3(VAR_4->version, VAR_1, sizeof(VAR_4->version));
 FUNC_2(VAR_4->fw_version, sizeof(VAR_4->fw_version),
  "%u", VAR_2);
 FUNC_3(VAR_4->bus_info, FUNC_1(VAR_6), sizeof(VAR_4->bus_info));
}
