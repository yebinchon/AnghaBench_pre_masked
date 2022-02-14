
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sunqe {struct platform_device* op; } ;
struct TYPE_2__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct net_device {int dummy; } ;
struct linux_prom_registers {int which_io; } ;
struct ethtool_drvinfo {int bus_info; int version; int driver; } ;


 struct sunqe* FUNC_0 (struct net_device*) ;
 struct linux_prom_registers* FUNC_1 (int ,char*,int *) ;
 int FUNC_2 (int ,int,char*,int) ;
 int FUNC_3 (int ,char*,int) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_0, struct ethtool_drvinfo *VAR_1)
{
 const struct linux_prom_registers *VAR_2;
 struct sunqe *VAR_3 = FUNC_0(VAR_0);
 struct platform_device *VAR_4;

 FUNC_3(VAR_1->driver, "sunqe", sizeof(VAR_1->driver));
 FUNC_3(VAR_1->version, "3.0", sizeof(VAR_1->version));

 VAR_4 = VAR_3->op;
 VAR_2 = FUNC_1(VAR_4->dev.of_node, "reg", ((void*)0));
 if (VAR_2)
  FUNC_2(VAR_1->bus_info, sizeof(VAR_1->bus_info), "SBUS:%d",
    VAR_2->which_io);

}
