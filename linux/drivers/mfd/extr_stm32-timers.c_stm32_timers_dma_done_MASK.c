
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32_timers_dma {int completion; TYPE_1__* chan; } ;
struct dma_tx_state {int dummy; } ;
typedef enum dma_status { ____Placeholder_dma_status } dma_status ;
struct TYPE_2__ {int cookie; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int ,struct dma_tx_state*) ;

__attribute__((used)) static void FUNC_2(void *VAR_1)
{
 struct stm32_timers_dma *VAR_2 = VAR_1;
 struct dma_tx_state VAR_3;
 enum dma_status VAR_4;

 VAR_4 = FUNC_1(VAR_2->chan, VAR_2->chan->cookie, &VAR_3);
 if (VAR_4 == VAR_0)
  FUNC_0(&VAR_2->completion);
}
