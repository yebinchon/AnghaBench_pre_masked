
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aq_vec_s {unsigned int tx_rings; struct aq_hw_s* aq_hw; struct aq_hw_ops const* aq_hw_ops; int aq_ring_param; struct aq_ring_s** ring; } ;
struct aq_ring_s {int dummy; } ;
struct aq_hw_s {int dummy; } ;
struct aq_hw_ops {int (* hw_ring_tx_init ) (struct aq_hw_s*,struct aq_ring_s*,int *) ;int (* hw_ring_rx_init ) (struct aq_hw_s*,struct aq_ring_s*,int *) ;int (* hw_ring_rx_fill ) (struct aq_hw_s*,struct aq_ring_s*,unsigned int) ;} ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct aq_ring_s*) ;
 int FUNC_1 (struct aq_ring_s*) ;
 int FUNC_2 (struct aq_hw_s*,struct aq_ring_s*,int *) ;
 int FUNC_3 (struct aq_hw_s*,struct aq_ring_s*,int *) ;
 int FUNC_4 (struct aq_hw_s*,struct aq_ring_s*,unsigned int) ;

int FUNC_5(struct aq_vec_s *VAR_2, const struct aq_hw_ops *VAR_3,
  struct aq_hw_s *VAR_4)
{
 struct aq_ring_s *VAR_5 = ((void*)0);
 unsigned int VAR_6 = 0U;
 int VAR_7 = 0;

 VAR_2->aq_hw_ops = VAR_3;
 VAR_2->aq_hw = VAR_4;

 for (VAR_6 = 0U, VAR_5 = VAR_2->ring[0];
  VAR_2->tx_rings > VAR_6; ++VAR_6, VAR_5 = VAR_2->ring[VAR_6]) {
  VAR_7 = FUNC_0(&VAR_5[VAR_1]);
  if (VAR_7 < 0)
   goto err_exit;

  VAR_7 = VAR_2->aq_hw_ops->hw_ring_tx_init(VAR_2->aq_hw,
             &VAR_5[VAR_1],
             &VAR_2->aq_ring_param);
  if (VAR_7 < 0)
   goto err_exit;

  VAR_7 = FUNC_0(&VAR_5[VAR_0]);
  if (VAR_7 < 0)
   goto err_exit;

  VAR_7 = VAR_2->aq_hw_ops->hw_ring_rx_init(VAR_2->aq_hw,
             &VAR_5[VAR_0],
             &VAR_2->aq_ring_param);
  if (VAR_7 < 0)
   goto err_exit;

  VAR_7 = FUNC_1(&VAR_5[VAR_0]);
  if (VAR_7 < 0)
   goto err_exit;

  VAR_7 = VAR_2->aq_hw_ops->hw_ring_rx_fill(VAR_2->aq_hw,
             &VAR_5[VAR_0], 0U);
  if (VAR_7 < 0)
   goto err_exit;
 }

err_exit:
 return VAR_7;
}
