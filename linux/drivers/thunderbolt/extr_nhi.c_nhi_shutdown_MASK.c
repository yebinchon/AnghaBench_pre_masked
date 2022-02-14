
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tb_nhi {int hop_count; TYPE_2__* ops; int msix_ida; int interrupt_work; TYPE_1__* pdev; scalar_t__* rx_rings; scalar_t__* tx_rings; } ;
struct TYPE_4__ {int (* shutdown ) (struct tb_nhi*) ;} ;
struct TYPE_3__ {int irq; int dev; int msix_enabled; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int ,struct tb_nhi*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct tb_nhi*) ;
 int FUNC_6 (struct tb_nhi*) ;

__attribute__((used)) static void FUNC_7(struct tb_nhi *VAR_0)
{
 int VAR_1;

 FUNC_1(&VAR_0->pdev->dev, "shutdown\n");

 for (VAR_1 = 0; VAR_1 < VAR_0->hop_count; VAR_1++) {
  if (VAR_0->tx_rings[VAR_1])
   FUNC_0(&VAR_0->pdev->dev,
     "TX ring %d is still active\n", VAR_1);
  if (VAR_0->rx_rings[VAR_1])
   FUNC_0(&VAR_0->pdev->dev,
     "RX ring %d is still active\n", VAR_1);
 }
 FUNC_5(VAR_0);




 if (!VAR_0->pdev->msix_enabled) {
  FUNC_2(&VAR_0->pdev->dev, VAR_0->pdev->irq, VAR_0);
  FUNC_3(&VAR_0->interrupt_work);
 }
 FUNC_4(&VAR_0->msix_ida);

 if (VAR_0->ops && VAR_0->ops->shutdown)
  VAR_0->ops->shutdown(VAR_0);
}
