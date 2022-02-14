
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct skge_port {TYPE_1__* hw; } ;
struct net_device {int dummy; } ;
struct ethtool_drvinfo {int bus_info; int version; int driver; } ;
struct TYPE_2__ {int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct skge_port* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_2,
        struct ethtool_drvinfo *VAR_3)
{
 struct skge_port *VAR_4 = FUNC_0(VAR_2);

 FUNC_2(VAR_3->driver, VAR_0, sizeof(VAR_3->driver));
 FUNC_2(VAR_3->version, VAR_1, sizeof(VAR_3->version));
 FUNC_2(VAR_3->bus_info, FUNC_1(VAR_4->hw->pdev),
  sizeof(VAR_3->bus_info));
}
