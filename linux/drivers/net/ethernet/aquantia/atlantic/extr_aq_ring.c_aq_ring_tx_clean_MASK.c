
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct aq_ring_s {scalar_t__ sw_head; scalar_t__ hw_head; struct aq_ring_buff_s* buff_ring; int aq_nic; } ;
struct aq_ring_buff_s {int eop_index; unsigned int pa; int skb; int is_eop; int len; int is_sop; int is_mapped; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 struct device* FUNC_0 (int ) ;
 int FUNC_1 (size_t,int,scalar_t__) ;
 size_t FUNC_2 (struct aq_ring_s*,size_t) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct device*,unsigned int,int ,int ) ;
 int FUNC_5 (struct device*,unsigned int,int ,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;

bool FUNC_8(struct aq_ring_s *VAR_2)
{
 struct device *VAR_3 = FUNC_0(VAR_2->aq_nic);
 unsigned int VAR_4;

 for (VAR_4 = VAR_0;
      VAR_4 && VAR_2->sw_head != VAR_2->hw_head; VAR_4--) {
  struct aq_ring_buff_s *VAR_5 = &VAR_2->buff_ring[VAR_2->sw_head];

  if (FUNC_6(VAR_5->is_mapped)) {
   if (FUNC_7(VAR_5->is_sop)) {
    if (!VAR_5->is_eop &&
        VAR_5->eop_index != 0xffffU &&
        (!FUNC_1(VAR_2->sw_head,
      VAR_5->eop_index,
      VAR_2->hw_head)))
     break;

    FUNC_5(VAR_3, VAR_5->pa, VAR_5->len,
       VAR_1);
   } else {
    FUNC_4(VAR_3, VAR_5->pa, VAR_5->len,
            VAR_1);
   }
  }

  if (FUNC_7(VAR_5->is_eop))
   FUNC_3(VAR_5->skb);

  VAR_5->pa = 0U;
  VAR_5->eop_index = 0xffffU;
  VAR_2->sw_head = FUNC_2(VAR_2, VAR_2->sw_head);
 }

 return !!VAR_4;
}
