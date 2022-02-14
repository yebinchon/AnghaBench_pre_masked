
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netcp_intf {int * tx_pool; int * tx_compl_q; int ** rx_fdq; int * rx_queue; int * rx_pool; int * rx_channel; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct netcp_intf*) ;

__attribute__((used)) static void FUNC_5(struct netcp_intf *VAR_1)
{
 int VAR_2;

 if (VAR_1->rx_channel) {
  FUNC_1(VAR_1->rx_channel);
  VAR_1->rx_channel = ((void*)0);
 }

 if (!FUNC_0(VAR_1->rx_pool))
  FUNC_4(VAR_1);

 if (!FUNC_0(VAR_1->rx_queue)) {
  FUNC_3(VAR_1->rx_queue);
  VAR_1->rx_queue = ((void*)0);
 }

 for (VAR_2 = 0; VAR_2 < VAR_0 &&
      !FUNC_0(VAR_1->rx_fdq[VAR_2]) ; ++VAR_2) {
  FUNC_3(VAR_1->rx_fdq[VAR_2]);
  VAR_1->rx_fdq[VAR_2] = ((void*)0);
 }

 if (!FUNC_0(VAR_1->tx_compl_q)) {
  FUNC_3(VAR_1->tx_compl_q);
  VAR_1->tx_compl_q = ((void*)0);
 }

 if (!FUNC_0(VAR_1->tx_pool)) {
  FUNC_2(VAR_1->tx_pool);
  VAR_1->tx_pool = ((void*)0);
 }
}
