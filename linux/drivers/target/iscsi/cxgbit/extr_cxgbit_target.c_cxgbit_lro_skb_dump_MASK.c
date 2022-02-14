
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct skb_shared_info {size_t nr_frags; int * frags; } ;
struct sk_buff {int data_len; int len; int data; int head; } ;
struct cxgbit_lro_pdu_cb {int frags; int ddigest; int seq; int flags; int pdulen; } ;
struct cxgbit_lro_cb {size_t csk; size_t pdu_idx; int pdu_totallen; } ;


 struct cxgbit_lro_cb* FUNC_0 (struct sk_buff*) ;
 struct cxgbit_lro_pdu_cb* FUNC_1 (struct sk_buff*,int ) ;
 int FUNC_2 (char*,struct sk_buff*,size_t,size_t,int ,...) ;
 size_t FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct skb_shared_info* FUNC_5 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_6(struct sk_buff *VAR_0)
{
 struct skb_shared_info *VAR_1 = FUNC_5(VAR_0);
 struct cxgbit_lro_cb *VAR_2 = FUNC_0(VAR_0);
 struct cxgbit_lro_pdu_cb *VAR_3 = FUNC_1(VAR_0, 0);
 u8 VAR_4;

 FUNC_2("skb 0x%p, head 0x%p, 0x%p, len %u,%u, frags %u.\n",
  VAR_0, VAR_0->head, VAR_0->data, VAR_0->len, VAR_0->data_len,
  VAR_1->nr_frags);
 FUNC_2("skb 0x%p, lro_cb, csk 0x%p, pdu %u, %u.\n",
  VAR_0, VAR_2->csk, VAR_2->pdu_idx, VAR_2->pdu_totallen);

 for (VAR_4 = 0; VAR_4 < VAR_2->pdu_idx; VAR_4++, VAR_3++)
  FUNC_2("skb 0x%p, pdu %d, %u, f 0x%x, seq 0x%x, dcrc 0x%x, "
   "frags %u.\n",
   VAR_0, VAR_4, VAR_3->pdulen, VAR_3->flags, VAR_3->seq,
   VAR_3->ddigest, VAR_3->frags);
 for (VAR_4 = 0; VAR_4 < VAR_1->nr_frags; VAR_4++)
  FUNC_2("skb 0x%p, frag %d, off %u, sz %u.\n",
   VAR_0, VAR_4, FUNC_3(&VAR_1->frags[VAR_4]),
   FUNC_4(&VAR_1->frags[VAR_4]));
}
