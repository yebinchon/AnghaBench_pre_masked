
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sxgbe_priv_data {int rx_riwt; scalar_t__ use_riwt; } ;
struct net_device {int dummy; } ;
struct ethtool_coalesce {int rx_coalesce_usecs; } ;


 struct sxgbe_priv_data* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,struct sxgbe_priv_data*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0,
         struct ethtool_coalesce *VAR_1)
{
 struct sxgbe_priv_data *VAR_2 = FUNC_0(VAR_0);

 if (VAR_2->use_riwt)
  VAR_1->rx_coalesce_usecs = FUNC_1(VAR_2->rx_riwt, VAR_2);

 return 0;
}
