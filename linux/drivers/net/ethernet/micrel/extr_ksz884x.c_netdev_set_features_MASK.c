
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ksz_hw {int rx_cfg; scalar_t__ io; scalar_t__ enabled; } ;
struct dev_priv {struct dev_info* adapter; } ;
struct dev_info {int lock; struct ksz_hw hw; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct dev_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_4,
 netdev_features_t VAR_5)
{
 struct dev_priv *VAR_6 = FUNC_2(VAR_4);
 struct dev_info *VAR_7 = VAR_6->adapter;
 struct ksz_hw *VAR_8 = &VAR_7->hw;

 FUNC_0(&VAR_7->lock);


 if (VAR_5 & VAR_3)
  VAR_8->rx_cfg |= VAR_1 | VAR_0;
 else
  VAR_8->rx_cfg &= ~(VAR_1 | VAR_0);

 if (VAR_8->enabled)
  FUNC_3(VAR_8->rx_cfg, VAR_8->io + VAR_2);

 FUNC_1(&VAR_7->lock);

 return 0;
}
