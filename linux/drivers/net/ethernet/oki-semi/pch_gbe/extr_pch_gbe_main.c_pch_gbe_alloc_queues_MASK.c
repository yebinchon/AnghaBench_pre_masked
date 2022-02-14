
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pch_gbe_adapter {void* rx_ring; TYPE_1__* pdev; void* tx_ring; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int *,int,int ) ;

__attribute__((used)) static int FUNC_1(struct pch_gbe_adapter *VAR_2)
{
 VAR_2->tx_ring = FUNC_0(&VAR_2->pdev->dev,
     sizeof(*VAR_2->tx_ring), VAR_1);
 if (!VAR_2->tx_ring)
  return -VAR_0;

 VAR_2->rx_ring = FUNC_0(&VAR_2->pdev->dev,
     sizeof(*VAR_2->rx_ring), VAR_1);
 if (!VAR_2->rx_ring)
  return -VAR_0;
 return 0;
}
