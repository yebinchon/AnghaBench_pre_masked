
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sh_eth_private {TYPE_1__* cd; } ;
struct net_device {int features; } ;
typedef int netdev_features_t ;
struct TYPE_2__ {scalar_t__ rx_csum; } ;


 int VAR_0 ;
 struct sh_eth_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1,
          netdev_features_t VAR_2)
{
 netdev_features_t VAR_3 = VAR_1->features ^ VAR_2;
 struct sh_eth_private *VAR_4 = FUNC_0(VAR_1);

 if (VAR_3 & VAR_0 && VAR_4->cd->rx_csum)
  FUNC_1(VAR_1, VAR_2 & VAR_0);

 VAR_1->features = VAR_2;

 return 0;
}
