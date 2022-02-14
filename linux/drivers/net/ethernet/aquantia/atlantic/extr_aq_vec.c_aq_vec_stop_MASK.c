
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct aq_vec_s {unsigned int tx_rings; int napi; int aq_hw; TYPE_1__* aq_hw_ops; struct aq_ring_s** ring; } ;
struct aq_ring_s {int dummy; } ;
struct TYPE_2__ {int (* hw_ring_rx_stop ) (int ,struct aq_ring_s*) ;int (* hw_ring_tx_stop ) (int ,struct aq_ring_s*) ;} ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct aq_ring_s*) ;
 int FUNC_2 (int ,struct aq_ring_s*) ;

void FUNC_3(struct aq_vec_s *VAR_2)
{
 struct aq_ring_s *VAR_3 = ((void*)0);
 unsigned int VAR_4 = 0U;

 for (VAR_4 = 0U, VAR_3 = VAR_2->ring[0];
  VAR_2->tx_rings > VAR_4; ++VAR_4, VAR_3 = VAR_2->ring[VAR_4]) {
  VAR_2->aq_hw_ops->hw_ring_tx_stop(VAR_2->aq_hw,
       &VAR_3[VAR_1]);

  VAR_2->aq_hw_ops->hw_ring_rx_stop(VAR_2->aq_hw,
       &VAR_3[VAR_0]);
 }

 FUNC_0(&VAR_2->napi);
}
