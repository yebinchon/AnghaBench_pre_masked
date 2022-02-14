
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct jme_adapter {int rxmcs_lock; int reg_rxmcs; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct jme_adapter*,int ,int ) ;
 struct jme_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(struct net_device *VAR_3, netdev_features_t VAR_4)
{
 struct jme_adapter *VAR_5 = FUNC_1(VAR_3);

 FUNC_2(&VAR_5->rxmcs_lock);
 if (VAR_4 & VAR_1)
  VAR_5->reg_rxmcs |= VAR_2;
 else
  VAR_5->reg_rxmcs &= ~VAR_2;
 FUNC_0(VAR_5, VAR_0, VAR_5->reg_rxmcs);
 FUNC_3(&VAR_5->rxmcs_lock);

 return 0;
}
