
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw_atl_rxd_s {unsigned int hdr_addr; int buf_addr; } ;
struct aq_ring_s {unsigned int sw_tail; int idx; struct aq_ring_buff_s* buff_ring; int * dx_ring; } ;
struct aq_ring_buff_s {int pa; } ;
struct aq_hw_s {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct aq_hw_s*) ;
 unsigned int FUNC_1 (struct aq_ring_s*,unsigned int) ;
 int FUNC_2 (struct aq_hw_s*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_3(struct aq_hw_s *VAR_1,
         struct aq_ring_s *VAR_2,
         unsigned int VAR_3)
{
 for (; VAR_3 != VAR_2->sw_tail;
  VAR_3 = FUNC_1(VAR_2, VAR_3)) {
  struct hw_atl_rxd_s *VAR_4 =
   (struct hw_atl_rxd_s *)&VAR_2->dx_ring[VAR_3 *
       VAR_0];

  struct aq_ring_buff_s *VAR_5 = &VAR_2->buff_ring[VAR_3];

  VAR_4->buf_addr = VAR_5->pa;
  VAR_4->hdr_addr = 0U;
 }

 FUNC_2(VAR_1, VAR_3, VAR_2->idx);

 return FUNC_0(VAR_1);
}
