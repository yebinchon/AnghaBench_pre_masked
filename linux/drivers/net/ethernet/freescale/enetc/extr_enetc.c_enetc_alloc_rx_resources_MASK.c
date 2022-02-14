
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct enetc_ndev_priv {int num_rx_rings; int * rx_ring; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct enetc_ndev_priv *VAR_0)
{
 int VAR_1, VAR_2;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_rx_rings; VAR_1++) {
  VAR_2 = FUNC_0(VAR_0->rx_ring[VAR_1]);

  if (VAR_2)
   goto fail;
 }

 return 0;

fail:
 while (VAR_1-- > 0)
  FUNC_1(VAR_0->rx_ring[VAR_1]);

 return VAR_2;
}
