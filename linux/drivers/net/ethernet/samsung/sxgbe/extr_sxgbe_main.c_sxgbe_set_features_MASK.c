
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sxgbe_priv_data {int rxcsum_insertion; int ioaddr; TYPE_2__* hw; } ;
struct net_device {int features; } ;
typedef int netdev_features_t ;
struct TYPE_4__ {TYPE_1__* mac; } ;
struct TYPE_3__ {int (* disable_rx_csum ) (int ) ;int (* enable_rx_csum ) (int ) ;} ;


 int VAR_0 ;
 struct sxgbe_priv_data* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1,
         netdev_features_t VAR_2)
{
 struct sxgbe_priv_data *VAR_3 = FUNC_0(VAR_1);
 netdev_features_t VAR_4 = VAR_1->features ^ VAR_2;

 if (VAR_4 & VAR_0) {
  if (VAR_2 & VAR_0) {
   VAR_3->hw->mac->enable_rx_csum(VAR_3->ioaddr);
   VAR_3->rxcsum_insertion = 1;
  } else {
   VAR_3->hw->mac->disable_rx_csum(VAR_3->ioaddr);
   VAR_3->rxcsum_insertion = 0;
  }
 }

 return 0;
}
