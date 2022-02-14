
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct et131x_adapter {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct et131x_adapter*) ;
 int FUNC_2 (struct et131x_adapter*) ;
 int FUNC_3 (struct et131x_adapter*) ;
 int FUNC_4 (struct et131x_adapter*) ;
 int FUNC_5 (struct et131x_adapter*) ;

__attribute__((used)) static int FUNC_6(struct et131x_adapter *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_4(VAR_0);
 if (VAR_1) {
  FUNC_0(&VAR_0->pdev->dev,
   "et131x_tx_dma_memory_alloc FAILED\n");
  FUNC_5(VAR_0);
  return VAR_1;
 }

 VAR_1 = FUNC_3(VAR_0);
 if (VAR_1) {
  FUNC_0(&VAR_0->pdev->dev,
   "et131x_rx_dma_memory_alloc FAILED\n");
  FUNC_1(VAR_0);
  return VAR_1;
 }

 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1) {
  FUNC_0(&VAR_0->pdev->dev, "et131x_init_recv FAILED\n");
  FUNC_1(VAR_0);
 }
 return VAR_1;
}
