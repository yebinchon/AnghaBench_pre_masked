
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct skb_shared_info {size_t nr_frags; int * frags; } ;
struct sk_buff {unsigned int len; unsigned int data_len; unsigned int truesize; } ;
struct cxgbit_sock {struct sk_buff* lro_hskb; } ;
struct cxgbit_lro_pdu_cb {int flags; size_t hfrag_idx; size_t dfrag_idx; size_t nr_dfrags; int pdulen; int ddigest; int hlen; int doffset; int dlen; int frags; int hdr; int seq; } ;
typedef int skb_frag_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct cxgbit_lro_pdu_cb* FUNC_0 (struct sk_buff*,size_t) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *) ;
 unsigned int FUNC_4 (int *) ;
 struct skb_shared_info* FUNC_5 (struct sk_buff*) ;

__attribute__((used)) static void
FUNC_6(struct cxgbit_sock *VAR_4, struct sk_buff *VAR_5, u8 VAR_6)
{
 struct sk_buff *VAR_7 = VAR_4->lro_hskb;
 struct cxgbit_lro_pdu_cb *VAR_8 = FUNC_0(VAR_7, 0);
 struct cxgbit_lro_pdu_cb *VAR_9 = FUNC_0(VAR_5, VAR_6);
 struct skb_shared_info *VAR_10 = FUNC_5(VAR_7);
 struct skb_shared_info *VAR_11 = FUNC_5(VAR_5);
 unsigned int VAR_12 = 0;

 if (VAR_9->flags & VAR_2) {
  u8 VAR_13 = VAR_10->nr_frags;

  VAR_8->flags |= VAR_9->flags;
  VAR_8->seq = VAR_9->seq;
  VAR_8->hdr = VAR_9->hdr;
  VAR_8->hlen = VAR_9->hlen;

  FUNC_2(&VAR_10->frags[VAR_13], &VAR_11->frags[VAR_9->hfrag_idx],
         sizeof(skb_frag_t));

  FUNC_1(FUNC_3(&VAR_10->frags[VAR_13]));
  VAR_10->nr_frags++;
  VAR_8->frags++;
  VAR_8->hfrag_idx = VAR_13;

  VAR_12 = FUNC_4(&VAR_10->frags[VAR_13]);
  VAR_7->len += VAR_12;
  VAR_7->data_len += VAR_12;
  VAR_7->truesize += VAR_12;
 }

 if (VAR_9->flags & VAR_0) {
  u8 VAR_14 = VAR_10->nr_frags, VAR_15;

  VAR_8->flags |= VAR_9->flags;
  VAR_8->dfrag_idx = VAR_14;

  VAR_12 = 0;
  for (VAR_15 = 0; VAR_15 < VAR_9->nr_dfrags; VAR_14++, VAR_15++) {
   FUNC_2(&VAR_10->frags[VAR_14],
          &VAR_11->frags[VAR_9->dfrag_idx + VAR_15],
          sizeof(skb_frag_t));

   FUNC_1(FUNC_3(&VAR_10->frags[VAR_14]));

   VAR_12 += FUNC_4(&VAR_10->frags[VAR_14]);

   VAR_10->nr_frags++;
   VAR_8->frags++;
  }

  VAR_8->dlen = VAR_9->dlen;
  VAR_8->doffset = VAR_8->hlen;
  VAR_8->nr_dfrags = VAR_9->nr_dfrags;
  VAR_7->len += VAR_12;
  VAR_7->data_len += VAR_12;
  VAR_7->truesize += VAR_12;
 }

 if (VAR_9->flags & VAR_3) {
  VAR_8->flags |= VAR_9->flags;

  if (VAR_8->flags & VAR_0)
   VAR_8->flags &= ~VAR_1;

  VAR_8->ddigest = VAR_9->ddigest;
  VAR_8->pdulen = VAR_9->pdulen;
 }
}
