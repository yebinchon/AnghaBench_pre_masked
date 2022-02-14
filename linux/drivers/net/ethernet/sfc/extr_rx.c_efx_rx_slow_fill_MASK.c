
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct efx_rx_queue {int slow_fill_count; } ;


 int FUNC_0 (struct efx_rx_queue*) ;
 struct efx_rx_queue* FUNC_1 (int ,struct timer_list*,int ) ;
 struct efx_rx_queue* VAR_0 ;
 int VAR_1 ;

void FUNC_2(struct timer_list *VAR_2)
{
 struct efx_rx_queue *VAR_3 = FUNC_1(VAR_3, VAR_2, VAR_1);


 FUNC_0(VAR_3);
 ++VAR_3->slow_fill_count;
}
