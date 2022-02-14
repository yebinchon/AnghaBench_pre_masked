
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {int tx_ring_count; int rx_ring_count; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;

 int VAR_1 ;
 struct xgbe_prv_data* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_2, int VAR_3)
{
 struct xgbe_prv_data *VAR_4 = FUNC_0(VAR_2);
 int VAR_5;

 switch (VAR_3) {
 case 128:
  VAR_5 = VAR_1 +
        (VAR_4->tx_ring_count * 2) +
        (VAR_4->rx_ring_count * 2);
  break;

 default:
  VAR_5 = -VAR_0;
 }

 return VAR_5;
}
