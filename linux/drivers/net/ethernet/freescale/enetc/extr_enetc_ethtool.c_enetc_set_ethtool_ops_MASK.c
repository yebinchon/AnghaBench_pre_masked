
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int * ethtool_ops; } ;
struct enetc_ndev_priv {int si; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 struct enetc_ndev_priv* FUNC_1 (struct net_device*) ;

void FUNC_2(struct net_device *VAR_2)
{
 struct enetc_ndev_priv *VAR_3 = FUNC_1(VAR_2);

 if (FUNC_0(VAR_3->si))
  VAR_2->ethtool_ops = &VAR_0;
 else
  VAR_2->ethtool_ops = &VAR_1;
}
