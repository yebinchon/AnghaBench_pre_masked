
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct meth_private {int * rx_skbs; scalar_t__* rx_ring_dmas; scalar_t__* rx_ring; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,scalar_t__,int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct meth_private *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  FUNC_0(&VAR_3->pdev->dev, VAR_3->rx_ring_dmas[VAR_4],
     VAR_1, VAR_0);
  VAR_3->rx_ring[VAR_4] = 0;
  VAR_3->rx_ring_dmas[VAR_4] = 0;
  FUNC_1(VAR_3->rx_skbs[VAR_4]);
 }
}
