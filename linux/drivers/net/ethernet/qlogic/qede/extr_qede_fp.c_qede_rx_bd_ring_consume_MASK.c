
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qede_rx_queue {int sw_rx_cons; int rx_bd_ring; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline void FUNC_1(struct qede_rx_queue *VAR_0)
{
 FUNC_0(&VAR_0->rx_bd_ring);
 VAR_0->sw_rx_cons++;
}
