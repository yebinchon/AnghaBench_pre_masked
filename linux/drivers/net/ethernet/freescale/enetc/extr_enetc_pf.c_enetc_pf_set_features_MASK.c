
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int features; } ;
struct enetc_ndev_priv {TYPE_1__* si; } ;
typedef int netdev_features_t ;
struct TYPE_2__ {int hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (struct net_device*,int) ;
 int FUNC_3 (struct net_device*,int) ;
 struct enetc_ndev_priv* FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_3,
     netdev_features_t VAR_4)
{
 netdev_features_t VAR_5 = VAR_3->features ^ VAR_4;
 struct enetc_ndev_priv *VAR_6 = FUNC_4(VAR_3);

 if (VAR_5 & VAR_0)
  FUNC_0(&VAR_6->si->hw, 0,
        !!(VAR_4 & VAR_0));

 if (VAR_5 & VAR_1)
  FUNC_1(&VAR_6->si->hw, 0,
        !!(VAR_4 & VAR_1));

 if (VAR_5 & VAR_2)
  FUNC_3(VAR_3, !!(VAR_4 & VAR_2));

 return FUNC_2(VAR_3, VAR_4);
}
