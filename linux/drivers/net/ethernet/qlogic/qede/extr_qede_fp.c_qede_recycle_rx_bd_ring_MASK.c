
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct sw_rx_data {int dummy; } ;
struct qede_rx_queue {size_t sw_rx_cons; struct sw_rx_data* sw_rx_ring; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct qede_rx_queue*,struct sw_rx_data*) ;
 int FUNC_1 (struct qede_rx_queue*) ;

void FUNC_2(struct qede_rx_queue *VAR_1, u8 VAR_2)
{
 struct sw_rx_data *VAR_3;

 for (; VAR_2 > 0; VAR_2--) {
  VAR_3 = &VAR_1->sw_rx_ring[VAR_1->sw_rx_cons & VAR_0];
  FUNC_0(VAR_1, VAR_3);
  FUNC_1(VAR_1);
 }
}
