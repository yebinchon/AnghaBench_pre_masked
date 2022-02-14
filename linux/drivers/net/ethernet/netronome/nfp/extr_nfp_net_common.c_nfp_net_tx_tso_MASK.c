
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct sk_buff {int data; int encapsulation; } ;
struct nfp_net_tx_desc {int l3_offset; int l4_offset; int lso_hdrlen; int flags; int mss; } ;
struct nfp_net_tx_buf {int pkt_cnt; int real_len; } ;
struct nfp_net_r_vector {int tx_sync; int tx_lso; } ;
struct TYPE_2__ {int gso_segs; int gso_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;
 TYPE_1__* FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(struct nfp_net_r_vector *VAR_2,
      struct nfp_net_tx_buf *VAR_3,
      struct nfp_net_tx_desc *VAR_4, struct sk_buff *VAR_5,
      u32 VAR_6)
{
 u32 VAR_7, VAR_8, VAR_9;
 u16 VAR_10;

 if (!FUNC_5(VAR_5))
  return;

 if (!VAR_5->encapsulation) {
  VAR_7 = FUNC_6(VAR_5);
  VAR_8 = FUNC_8(VAR_5);
  VAR_9 = FUNC_8(VAR_5) + FUNC_9(VAR_5);
 } else {
  VAR_7 = FUNC_2(VAR_5);
  VAR_8 = FUNC_4(VAR_5);
  VAR_9 = FUNC_3(VAR_5) - VAR_5->data +
   FUNC_1(VAR_5);
 }

 VAR_3->pkt_cnt = FUNC_7(VAR_5)->gso_segs;
 VAR_3->real_len += VAR_9 * (VAR_3->pkt_cnt - 1);

 VAR_10 = FUNC_7(VAR_5)->gso_size & VAR_1;
 VAR_4->l3_offset = VAR_7 - VAR_6;
 VAR_4->l4_offset = VAR_8 - VAR_6;
 VAR_4->lso_hdrlen = VAR_9 - VAR_6;
 VAR_4->mss = FUNC_0(VAR_10);
 VAR_4->flags |= VAR_0;

 FUNC_10(&VAR_2->tx_sync);
 VAR_2->tx_lso++;
 FUNC_11(&VAR_2->tx_sync);
}
