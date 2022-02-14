
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct qede_rx_queue {int rx_comp_ring; int * hw_cons_ptr; } ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;

bool FUNC_3(struct qede_rx_queue *VAR_0)
{
 u16 VAR_1, VAR_2;


 FUNC_0();

 VAR_1 = FUNC_1(*VAR_0->hw_cons_ptr);
 VAR_2 = FUNC_2(&VAR_0->rx_comp_ring);

 return VAR_1 != VAR_2;
}
