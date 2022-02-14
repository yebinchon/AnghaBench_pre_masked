
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cqspi_st {int rx_dma_complete; int * rx_chan; TYPE_1__* pdev; } ;
typedef int dma_cap_mask_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct cqspi_st *VAR_1)
{
 dma_cap_mask_t VAR_2;

 FUNC_3(VAR_2);
 FUNC_2(VAR_0, VAR_2);

 VAR_1->rx_chan = FUNC_4(&VAR_2);
 if (FUNC_0(VAR_1->rx_chan)) {
  FUNC_1(&VAR_1->pdev->dev, "No Rx DMA available\n");
  VAR_1->rx_chan = ((void*)0);
 }
 FUNC_5(&VAR_1->rx_dma_complete);
}
