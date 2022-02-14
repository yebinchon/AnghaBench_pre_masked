
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_rx_queue {int flush_pending; } ;
struct efx_nic {int n_channels; int flush_wq; int rxq_flush_outstanding; int rxq_flush_pending; int net_dev; } ;
struct efx_channel {int dummy; } ;
typedef int efx_qword_t ;


 int FUNC_0 (struct efx_rx_queue*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct efx_rx_queue* FUNC_4 (struct efx_channel*) ;
 int FUNC_5 (struct efx_channel*) ;
 scalar_t__ FUNC_6 (struct efx_nic*) ;
 int FUNC_7 (int ,int ) ;
 struct efx_channel* FUNC_8 (struct efx_nic*,int) ;
 int FUNC_9 (struct efx_rx_queue*) ;
 int VAR_2 ;
 int FUNC_10 (struct efx_nic*,int ,int ,char*,int) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void
FUNC_12(struct efx_nic *VAR_3, efx_qword_t *VAR_4)
{
 struct efx_channel *VAR_5;
 struct efx_rx_queue *VAR_6;
 int VAR_7;
 bool VAR_8;

 VAR_7 = FUNC_1(*VAR_4, VAR_0);
 VAR_8 = FUNC_1(*VAR_4, VAR_1);
 if (VAR_7 >= VAR_3->n_channels)
  return;
 VAR_5 = FUNC_8(VAR_3, VAR_7);
 if (!FUNC_5(VAR_5))
  return;
 VAR_6 = FUNC_4(VAR_5);

 if (VAR_8) {
  FUNC_10(VAR_3, VAR_2, VAR_3->net_dev,
      "RXQ %d flush retry\n", VAR_7);
  VAR_6->flush_pending = 1;
  FUNC_3(&VAR_3->rxq_flush_pending);
 } else {
  FUNC_7(FUNC_9(VAR_6),
          FUNC_0(VAR_6));
 }
 FUNC_2(&VAR_3->rxq_flush_outstanding);
 if (FUNC_6(VAR_3))
  FUNC_11(&VAR_3->flush_wq);
}
