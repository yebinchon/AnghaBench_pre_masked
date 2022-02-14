
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int napi_poll_txtimer; } ;
struct napi_struct {int dummy; } ;
struct xlgmac_pdata {TYPE_1__ stats; scalar_t__ per_channel_irq; struct napi_struct napi; } ;
struct xlgmac_channel {scalar_t__ tx_timer_active; int dma_irq; struct napi_struct napi; struct xlgmac_pdata* pdata; } ;
struct timer_list {int dummy; } ;


 int FUNC_0 (struct napi_struct*) ;
 struct xlgmac_channel* VAR_0 ;
 int FUNC_1 (int ) ;
 struct xlgmac_channel* FUNC_2 (int ,struct timer_list*,int ) ;
 scalar_t__ FUNC_3 (struct napi_struct*) ;
 int VAR_1 ;
 int FUNC_4 (struct xlgmac_pdata*) ;

__attribute__((used)) static void FUNC_5(struct timer_list *VAR_2)
{
 struct xlgmac_channel *VAR_3 = FUNC_2(VAR_3, VAR_2, VAR_1);
 struct xlgmac_pdata *VAR_4 = VAR_3->pdata;
 struct napi_struct *VAR_5;

 VAR_5 = (VAR_4->per_channel_irq) ? &VAR_3->napi : &VAR_4->napi;

 if (FUNC_3(VAR_5)) {

  if (VAR_4->per_channel_irq)
   FUNC_1(VAR_3->dma_irq);
  else
   FUNC_4(VAR_4);

  VAR_4->stats.napi_poll_txtimer++;

  FUNC_0(VAR_5);
 }

 VAR_3->tx_timer_active = 0;
}
