
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {struct adapter* ml_priv; } ;
struct ethtool_drvinfo {int bus_info; int version; int driver; } ;
struct adapter {int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_2, struct ethtool_drvinfo *VAR_3)
{
 struct adapter *VAR_4 = VAR_2->ml_priv;

 FUNC_1(VAR_3->driver, VAR_0, sizeof(VAR_3->driver));
 FUNC_1(VAR_3->version, VAR_1, sizeof(VAR_3->version));
 FUNC_1(VAR_3->bus_info, FUNC_0(VAR_4->pdev),
  sizeof(VAR_3->bus_info));
}
