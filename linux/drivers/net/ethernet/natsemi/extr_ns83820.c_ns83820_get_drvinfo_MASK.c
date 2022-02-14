
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ns83820 {int pci_dev; } ;
struct net_device {int dummy; } ;
struct ethtool_drvinfo {int bus_info; int version; int driver; } ;


 struct ns83820* FUNC_0 (struct net_device*) ;
 char* VAR_0 ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_1, struct ethtool_drvinfo *VAR_2)
{
 struct ns83820 *VAR_3 = FUNC_0(VAR_1);
 FUNC_2(VAR_2->driver, "ns83820", sizeof(VAR_2->driver));
 FUNC_2(VAR_2->version, VAR_0, sizeof(VAR_2->version));
 FUNC_2(VAR_2->bus_info, FUNC_1(VAR_3->pci_dev), sizeof(VAR_2->bus_info));
}
