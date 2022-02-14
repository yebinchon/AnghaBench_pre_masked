
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ xmit_more; } ;
struct xlgmac_ring {TYPE_1__ tx; int cur; } ;
struct xlgmac_pdata {scalar_t__ tx_usecs; } ;
struct xlgmac_desc_data {int dma_desc_addr; } ;
struct xlgmac_channel {int tx_timer_active; int tx_timer; struct xlgmac_pdata* pdata; } ;


 int VAR_0 ;
 int FUNC_0 (struct xlgmac_channel*,int ) ;
 struct xlgmac_desc_data* FUNC_1 (struct xlgmac_ring*,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static void FUNC_7(struct xlgmac_channel *VAR_2,
     struct xlgmac_ring *VAR_3)
{
 struct xlgmac_pdata *VAR_4 = VAR_2->pdata;
 struct xlgmac_desc_data *VAR_5;


 FUNC_5();




 VAR_5 = FUNC_1(VAR_3, VAR_3->cur);
 FUNC_6(FUNC_2(VAR_5->dma_desc_addr),
        FUNC_0(VAR_2, VAR_0));


 if (VAR_4->tx_usecs && !VAR_2->tx_timer_active) {
  VAR_2->tx_timer_active = 1;
  FUNC_3(&VAR_2->tx_timer,
     VAR_1 + FUNC_4(VAR_4->tx_usecs));
 }

 VAR_3->tx.xmit_more = 0;
}
