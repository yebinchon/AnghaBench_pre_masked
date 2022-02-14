
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iavf_adapter {int num_active_queues; TYPE_1__* pdev; TYPE_2__* tx_rings; int tx_desc_count; } ;
struct TYPE_4__ {int count; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_2(struct iavf_adapter *VAR_0)
{
 int VAR_1, VAR_2 = 0;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_active_queues; VAR_1++) {
  VAR_0->tx_rings[VAR_1].count = VAR_0->tx_desc_count;
  VAR_2 = FUNC_1(&VAR_0->tx_rings[VAR_1]);
  if (!VAR_2)
   continue;
  FUNC_0(&VAR_0->pdev->dev,
   "Allocation for Tx Queue %u failed\n", VAR_1);
  break;
 }

 return VAR_2;
}
