
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct e1000_ring {int dummy; } ;
struct e1000_adapter {TYPE_1__* tx_ring; TYPE_1__* rx_ring; int rx_ring_count; int tx_ring_count; } ;
struct TYPE_2__ {struct e1000_adapter* adapter; int count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*) ;
 void* FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct e1000_adapter *VAR_2)
{
 int VAR_3 = sizeof(struct e1000_ring);

 VAR_2->tx_ring = FUNC_2(VAR_3, VAR_1);
 if (!VAR_2->tx_ring)
  goto err;
 VAR_2->tx_ring->count = VAR_2->tx_ring_count;
 VAR_2->tx_ring->adapter = VAR_2;

 VAR_2->rx_ring = FUNC_2(VAR_3, VAR_1);
 if (!VAR_2->rx_ring)
  goto err;
 VAR_2->rx_ring->count = VAR_2->rx_ring_count;
 VAR_2->rx_ring->adapter = VAR_2;

 return 0;
err:
 FUNC_0("Unable to allocate memory for queues\n");
 FUNC_1(VAR_2->rx_ring);
 FUNC_1(VAR_2->tx_ring);
 return -VAR_0;
}
