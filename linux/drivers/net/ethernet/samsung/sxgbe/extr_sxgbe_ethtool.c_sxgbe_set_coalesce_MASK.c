
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sxgbe_priv_data {unsigned int rx_riwt; int ioaddr; TYPE_1__* hw; int use_riwt; } ;
struct net_device {int dummy; } ;
struct ethtool_coalesce {int rx_coalesce_usecs; } ;
struct TYPE_4__ {int (* rx_watchdog ) (int ,unsigned int) ;} ;
struct TYPE_3__ {TYPE_2__* dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 struct sxgbe_priv_data* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,unsigned int) ;
 unsigned int FUNC_2 (int ,struct sxgbe_priv_data*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_4,
         struct ethtool_coalesce *VAR_5)
{
 struct sxgbe_priv_data *VAR_6 = FUNC_0(VAR_4);
 unsigned int VAR_7;

 if (!VAR_5->rx_coalesce_usecs)
  return -VAR_0;

 VAR_7 = FUNC_2(VAR_5->rx_coalesce_usecs, VAR_6);

 if ((VAR_7 > VAR_2) || (VAR_7 < VAR_3))
  return -VAR_0;
 else if (!VAR_6->use_riwt)
  return -VAR_1;

 VAR_6->rx_riwt = VAR_7;
 VAR_6->hw->dma->rx_watchdog(VAR_6->ioaddr, VAR_6->rx_riwt);

 return 0;
}
