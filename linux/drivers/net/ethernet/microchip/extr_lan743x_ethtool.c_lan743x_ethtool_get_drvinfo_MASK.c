
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct lan743x_adapter {int pdev; } ;
struct ethtool_drvinfo {int bus_info; int driver; } ;


 int VAR_0 ;
 struct lan743x_adapter* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_1,
     struct ethtool_drvinfo *VAR_2)
{
 struct lan743x_adapter *VAR_3 = FUNC_0(VAR_1);

 FUNC_2(VAR_2->driver, VAR_0, sizeof(VAR_2->driver));
 FUNC_2(VAR_2->bus_info,
  FUNC_1(VAR_3->pdev), sizeof(VAR_2->bus_info));
}
