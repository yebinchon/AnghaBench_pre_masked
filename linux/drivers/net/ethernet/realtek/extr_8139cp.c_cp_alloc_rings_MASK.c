
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct cp_private {int ring_dma; int * rx_ring; int * tx_ring; TYPE_1__* pdev; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cp_private*) ;
 void* FUNC_1 (struct device*,int ,int *,int ) ;
 int FUNC_2 (struct device*,int ,int *,int ) ;

__attribute__((used)) static int FUNC_3 (struct cp_private *VAR_4)
{
 struct device *VAR_5 = &VAR_4->pdev->dev;
 void *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_1(VAR_5, VAR_0, &VAR_4->ring_dma, VAR_3);
 if (!VAR_6)
  return -VAR_2;

 VAR_4->rx_ring = VAR_6;
 VAR_4->tx_ring = &VAR_4->rx_ring[VAR_1];

 VAR_7 = FUNC_0(VAR_4);
 if (VAR_7 < 0)
  FUNC_2(VAR_5, VAR_0, VAR_4->rx_ring, VAR_4->ring_dma);

 return VAR_7;
}
