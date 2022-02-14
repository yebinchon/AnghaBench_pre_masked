
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xenvif_pkt_state {unsigned int frag; struct sk_buff* frag_iter; struct sk_buff* skb; scalar_t__ frag_offset; } ;
struct sk_buff {struct sk_buff* next; } ;
struct TYPE_2__ {unsigned int nr_frags; struct sk_buff* frag_list; } ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_1(struct xenvif_pkt_state *VAR_0)
{
 struct sk_buff *VAR_1 = VAR_0->frag_iter;
 unsigned int VAR_2 = FUNC_0(VAR_1)->nr_frags;

 VAR_0->frag++;
 VAR_0->frag_offset = 0;

 if (VAR_0->frag >= VAR_2) {
  if (VAR_1 == VAR_0->skb)
   VAR_0->frag_iter = FUNC_0(VAR_1)->frag_list;
  else
   VAR_0->frag_iter = VAR_1->next;

  VAR_0->frag = -1;
 }
}
