
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct igbvf_ring {int dummy; } ;
struct igbvf_adapter {TYPE_1__* rx_ring; void* tx_ring; struct net_device* netdev; } ;
struct TYPE_2__ {int napi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (int,int ) ;
 int FUNC_2 (struct net_device*,int *,int ,int) ;

__attribute__((used)) static int FUNC_3(struct igbvf_adapter *VAR_3)
{
 struct net_device *VAR_4 = VAR_3->netdev;

 VAR_3->tx_ring = FUNC_1(sizeof(struct igbvf_ring), VAR_1);
 if (!VAR_3->tx_ring)
  return -VAR_0;

 VAR_3->rx_ring = FUNC_1(sizeof(struct igbvf_ring), VAR_1);
 if (!VAR_3->rx_ring) {
  FUNC_0(VAR_3->tx_ring);
  return -VAR_0;
 }

 FUNC_2(VAR_4, &VAR_3->rx_ring->napi, VAR_2, 64);

 return 0;
}
