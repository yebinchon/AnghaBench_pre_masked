
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct driver_data {int dma_running; TYPE_1__* controller; } ;
struct TYPE_2__ {int dma_tx; int dma_rx; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct driver_data *VAR_0)
{
 FUNC_1(VAR_0->controller->dma_rx);
 FUNC_1(VAR_0->controller->dma_tx);

 FUNC_0(&VAR_0->dma_running, 1);
}
