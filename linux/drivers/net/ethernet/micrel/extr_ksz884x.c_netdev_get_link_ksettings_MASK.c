
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int advertising; } ;
struct ethtool_link_ksettings {TYPE_1__ link_modes; } ;
struct dev_priv {int advertising; int mii_if; struct dev_info* adapter; } ;
struct dev_info {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct ethtool_link_ksettings*,int ,int ) ;
 int FUNC_2 (int *,struct ethtool_link_ksettings*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct dev_priv* FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_2,
         struct ethtool_link_ksettings *VAR_3)
{
 struct dev_priv *VAR_4 = FUNC_5(VAR_2);
 struct dev_info *VAR_5 = VAR_4->adapter;

 FUNC_3(&VAR_5->lock);
 FUNC_2(&VAR_4->mii_if, VAR_3);
 FUNC_1(VAR_3, VAR_1, VAR_0);
 FUNC_4(&VAR_5->lock);


 FUNC_0(&VAR_4->advertising,
      VAR_3->link_modes.advertising);

 return 0;
}
