
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct napi_struct {int dummy; } ;
struct xgbe_prv_data {scalar_t__ channel_irq_mode; scalar_t__ per_channel_irq; struct napi_struct napi; } ;
struct xgbe_channel {scalar_t__ tx_timer_active; int dma_irq; struct napi_struct napi; struct xgbe_prv_data* pdata; } ;
struct timer_list {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct napi_struct*) ;
 struct xgbe_channel* VAR_0 ;
 int FUNC_2 (int ) ;
 struct xgbe_channel* FUNC_3 (int ,struct timer_list*,int ) ;
 scalar_t__ FUNC_4 (struct napi_struct*) ;
 int VAR_1 ;
 int FUNC_5 (struct xgbe_prv_data*,struct xgbe_channel*) ;
 int FUNC_6 (struct xgbe_prv_data*) ;

__attribute__((used)) static void FUNC_7(struct timer_list *VAR_2)
{
 struct xgbe_channel *VAR_3 = FUNC_3(VAR_3, VAR_2, VAR_1);
 struct xgbe_prv_data *VAR_4 = VAR_3->pdata;
 struct napi_struct *VAR_5;

 FUNC_0("-->xgbe_tx_timer\n");

 VAR_5 = (VAR_4->per_channel_irq) ? &VAR_3->napi : &VAR_4->napi;

 if (FUNC_4(VAR_5)) {

  if (VAR_4->per_channel_irq)
   if (VAR_4->channel_irq_mode)
    FUNC_5(VAR_4, VAR_3);
   else
    FUNC_2(VAR_3->dma_irq);
  else
   FUNC_6(VAR_4);


  FUNC_1(VAR_5);
 }

 VAR_3->tx_timer_active = 0;

 FUNC_0("<--xgbe_tx_timer\n");
}
