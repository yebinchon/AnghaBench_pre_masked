
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct altera_tse_private {unsigned int rx_ring_size; unsigned int tx_ring_size; int * tx_ring; int * rx_ring; } ;


 int FUNC_0 (int *) ;
 struct altera_tse_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct altera_tse_private*,int *) ;
 int FUNC_3 (struct altera_tse_private*,int *) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_0)
{
 struct altera_tse_private *VAR_1 = FUNC_1(VAR_0);
 unsigned int VAR_2 = VAR_1->rx_ring_size;
 unsigned int VAR_3 = VAR_1->tx_ring_size;
 int VAR_4;


 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  FUNC_2(VAR_1, &VAR_1->rx_ring[VAR_4]);
 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
  FUNC_3(VAR_1, &VAR_1->tx_ring[VAR_4]);


 FUNC_0(VAR_1->tx_ring);
}
