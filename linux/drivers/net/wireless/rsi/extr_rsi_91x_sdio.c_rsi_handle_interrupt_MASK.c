
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdio_func {int dummy; } ;
struct rsi_hw {TYPE_1__* priv; scalar_t__ rsi_dev; } ;
struct rsi_91x_sdiodev {int * sdio_irq_task; } ;
struct TYPE_2__ {scalar_t__ fsm_state; } ;


 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (struct rsi_hw*) ;
 struct rsi_hw* FUNC_1 (struct sdio_func*) ;

__attribute__((used)) static void FUNC_2(struct sdio_func *VAR_2)
{
 struct rsi_hw *VAR_3 = FUNC_1(VAR_2);
 struct rsi_91x_sdiodev *VAR_4 =
  (struct rsi_91x_sdiodev *)VAR_3->rsi_dev;

 if (VAR_3->priv->fsm_state == VAR_0)
  return;

 VAR_4->sdio_irq_task = VAR_1;
 FUNC_0(VAR_3);
 VAR_4->sdio_irq_task = ((void*)0);
}
