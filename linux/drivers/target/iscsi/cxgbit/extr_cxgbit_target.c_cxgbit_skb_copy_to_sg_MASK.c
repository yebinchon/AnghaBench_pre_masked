
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct skb_seq_state {int dummy; } ;
struct sk_buff {int dummy; } ;
struct scatterlist {int dummy; } ;
struct cxgbit_lro_pdu_cb {scalar_t__ dlen; scalar_t__ doffset; } ;


 struct cxgbit_lro_pdu_cb* FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (struct scatterlist*,unsigned int,void*,unsigned int,scalar_t__) ;
 int FUNC_2 (struct skb_seq_state*) ;
 int FUNC_3 (struct sk_buff*,scalar_t__,scalar_t__,struct skb_seq_state*) ;
 unsigned int FUNC_4 (unsigned int,int const**,struct skb_seq_state*) ;

__attribute__((used)) static void
FUNC_5(struct sk_buff *VAR_0, struct scatterlist *VAR_1,
        unsigned int VAR_2, u32 VAR_3)
{
 struct skb_seq_state VAR_4;
 const u8 *VAR_5;
 unsigned int VAR_6 = 0, VAR_7;
 struct cxgbit_lro_pdu_cb *VAR_8 = FUNC_0(VAR_0);

 FUNC_3(VAR_0, VAR_8->doffset,
        VAR_8->doffset + VAR_8->dlen,
        &VAR_4);

 while (1) {
  VAR_7 = FUNC_4(VAR_6, &VAR_5, &VAR_4);
  if (!VAR_7) {
   FUNC_2(&VAR_4);
   break;
  }

  VAR_6 += FUNC_1(VAR_1, VAR_2, (void *)VAR_5,
       VAR_7, VAR_3 + VAR_6);
 }
}
