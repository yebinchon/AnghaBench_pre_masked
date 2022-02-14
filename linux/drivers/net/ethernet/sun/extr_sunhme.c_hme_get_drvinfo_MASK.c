
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct pci_dev {TYPE_1__ dev; } ;
struct net_device {int dummy; } ;
struct linux_prom_registers {int which_io; } ;
struct happy_meal {int happy_flags; struct platform_device* happy_dev; } ;
struct ethtool_drvinfo {int bus_info; int version; int driver; } ;


 int VAR_0 ;
 struct happy_meal* FUNC_0 (struct net_device*) ;
 struct linux_prom_registers* FUNC_1 (int ,char*,int *) ;
 char* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int ,int,char*,int) ;
 int FUNC_4 (int ,char*,int) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_1, struct ethtool_drvinfo *VAR_2)
{
 struct happy_meal *VAR_3 = FUNC_0(VAR_1);

 FUNC_4(VAR_2->driver, "sunhme", sizeof(VAR_2->driver));
 FUNC_4(VAR_2->version, "2.02", sizeof(VAR_2->version));
 if (VAR_3->happy_flags & VAR_0) {
  struct pci_dev *VAR_4 = VAR_3->happy_dev;
  FUNC_4(VAR_2->bus_info, FUNC_2(VAR_4), sizeof(VAR_2->bus_info));
 }
}
