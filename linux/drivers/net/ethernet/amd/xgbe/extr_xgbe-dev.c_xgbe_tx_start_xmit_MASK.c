
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xgbe_ring_data {int rdesc_dma; } ;
struct TYPE_2__ {scalar_t__ xmit_more; } ;
struct xgbe_ring {TYPE_1__ tx; int cur; } ;
struct xgbe_prv_data {scalar_t__ tx_usecs; } ;
struct xgbe_channel {int tx_timer_active; int tx_timer; struct xgbe_prv_data* pdata; } ;


 int VAR_0 ;
 struct xgbe_ring_data* FUNC_0 (struct xgbe_ring*,int ) ;
 int FUNC_1 (struct xgbe_channel*,int ,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(struct xgbe_channel *VAR_2,
          struct xgbe_ring *VAR_3)
{
 struct xgbe_prv_data *VAR_4 = VAR_2->pdata;
 struct xgbe_ring_data *VAR_5;


 FUNC_5();



 VAR_5 = FUNC_0(VAR_3, VAR_3->cur);
 FUNC_1(VAR_2, VAR_0,
     FUNC_2(VAR_5->rdesc_dma));


 if (VAR_4->tx_usecs && !VAR_2->tx_timer_active) {
  VAR_2->tx_timer_active = 1;
  FUNC_3(&VAR_2->tx_timer,
     VAR_1 + FUNC_4(VAR_4->tx_usecs));
 }

 VAR_3->tx.xmit_more = 0;
}
