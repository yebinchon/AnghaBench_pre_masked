
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_drvinfo {int bus_info; int version; int driver; } ;
struct dev_priv {struct dev_info* adapter; } ;
struct dev_info {int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dev_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_2,
 struct ethtool_drvinfo *VAR_3)
{
 struct dev_priv *VAR_4 = FUNC_0(VAR_2);
 struct dev_info *VAR_5 = VAR_4->adapter;

 FUNC_2(VAR_3->driver, VAR_0, sizeof(VAR_3->driver));
 FUNC_2(VAR_3->version, VAR_1, sizeof(VAR_3->version));
 FUNC_2(VAR_3->bus_info, FUNC_1(VAR_5->pdev),
  sizeof(VAR_3->bus_info));
}
