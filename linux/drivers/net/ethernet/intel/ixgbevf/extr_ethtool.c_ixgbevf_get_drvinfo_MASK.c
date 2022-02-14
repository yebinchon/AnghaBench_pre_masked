
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ixgbevf_adapter {int pdev; } ;
struct ethtool_drvinfo {int n_priv_flags; int bus_info; int version; int driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ixgbevf_adapter* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_3,
    struct ethtool_drvinfo *VAR_4)
{
 struct ixgbevf_adapter *VAR_5 = FUNC_0(VAR_3);

 FUNC_2(VAR_4->driver, VAR_1, sizeof(VAR_4->driver));
 FUNC_2(VAR_4->version, VAR_2,
  sizeof(VAR_4->version));
 FUNC_2(VAR_4->bus_info, FUNC_1(VAR_5->pdev),
  sizeof(VAR_4->bus_info));

 VAR_4->n_priv_flags = VAR_0;
}
