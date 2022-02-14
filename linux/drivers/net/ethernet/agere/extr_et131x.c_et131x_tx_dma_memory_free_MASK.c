
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tx_ring {int tcb_ring; int * tx_status; int tx_status_pa; int * tx_desc_ring; int tx_desc_ring_pa; } ;
struct tx_desc {int dummy; } ;
struct et131x_adapter {TYPE_1__* pdev; struct tx_ring tx_ring; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int *,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct et131x_adapter *VAR_1)
{
 int VAR_2 = 0;
 struct tx_ring *VAR_3 = &VAR_1->tx_ring;

 if (VAR_3->tx_desc_ring) {

  VAR_2 = (sizeof(struct tx_desc) * VAR_0);
  FUNC_0(&VAR_1->pdev->dev,
      VAR_2,
      VAR_3->tx_desc_ring,
      VAR_3->tx_desc_ring_pa);
  VAR_3->tx_desc_ring = ((void*)0);
 }


 if (VAR_3->tx_status) {
  FUNC_0(&VAR_1->pdev->dev,
      sizeof(u32),
      VAR_3->tx_status,
      VAR_3->tx_status_pa);

  VAR_3->tx_status = ((void*)0);
 }

 FUNC_1(VAR_3->tcb_ring);
}
