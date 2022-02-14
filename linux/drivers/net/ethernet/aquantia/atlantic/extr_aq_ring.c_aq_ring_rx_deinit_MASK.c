
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aq_ring_s {size_t sw_head; size_t sw_tail; int aq_nic; struct aq_ring_buff_s* buff_ring; } ;
struct aq_ring_buff_s {int rxdata; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;
 size_t FUNC_2 (struct aq_ring_s*,size_t) ;

void FUNC_3(struct aq_ring_s *VAR_0)
{
 if (!VAR_0)
  goto err_exit;

 for (; VAR_0->sw_head != VAR_0->sw_tail;
  VAR_0->sw_head = FUNC_2(VAR_0, VAR_0->sw_head)) {
  struct aq_ring_buff_s *VAR_1 = &VAR_0->buff_ring[VAR_0->sw_head];

  FUNC_0(&VAR_1->rxdata, FUNC_1(VAR_0->aq_nic));
 }

err_exit:;
}
