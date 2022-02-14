
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct sk_buff {struct sk_buff* next; scalar_t__ len; scalar_t__ data; } ;
struct htt_rx_in_ord_msdu_desc {int msdu_len; scalar_t__ reserved; int msdu_paddr; } ;
struct htt_rx_desc {int dummy; } ;
struct ath10k_htt {struct ath10k* ar; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*,struct sk_buff*,int) ;
 struct sk_buff* FUNC_3 (struct ath10k_htt*,int ) ;
 int FUNC_4 (struct ath10k*,char*,int,...) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (struct ath10k*,struct htt_rx_desc*,int) ;

__attribute__((used)) static int FUNC_9(struct ath10k_htt *VAR_3,
          struct sk_buff *VAR_4,
          struct htt_rx_in_ord_msdu_desc **VAR_5)
{
 struct ath10k *VAR_6 = VAR_3->ar;
 u32 VAR_7;
 struct sk_buff *VAR_8;
 struct sk_buff *VAR_9;
 u8 VAR_10;
 struct htt_rx_in_ord_msdu_desc *VAR_11 = *VAR_5;
 struct htt_rx_desc *VAR_12;
 int VAR_13 = FUNC_0(VAR_11->msdu_len);

 VAR_12 = (void *)VAR_4->data;
 FUNC_8(VAR_6, VAR_12, sizeof(*VAR_12));

 FUNC_7(VAR_4, sizeof(struct htt_rx_desc));
 FUNC_6(VAR_4, sizeof(struct htt_rx_desc));
 FUNC_7(VAR_4, FUNC_5(VAR_13, VAR_2));
 VAR_13 -= VAR_4->len;

 VAR_10 = VAR_11->reserved;
 if (VAR_10) {
  if (VAR_13) {
   FUNC_4(VAR_6, "invalid amsdu len %u, left %d",
        FUNC_0(VAR_11->msdu_len),
        VAR_13);
  }
  return 0;
 }

 VAR_11++;
 VAR_7 = FUNC_1(VAR_11->msdu_paddr);
 VAR_8 = FUNC_3(VAR_3, VAR_7);
 if (!VAR_8) {
  FUNC_4(VAR_6, "failed to pop frag-1 paddr: 0x%x", VAR_7);
  return -VAR_0;
 }

 FUNC_7(VAR_8, FUNC_5(VAR_13, VAR_1));
 FUNC_2(VAR_4, VAR_8, VAR_13);

 VAR_13 -= VAR_8->len;
 VAR_9 = VAR_8;
 VAR_10 = VAR_11->reserved;
 while (!VAR_10) {
  VAR_11++;
  VAR_7 = FUNC_1(VAR_11->msdu_paddr);
  VAR_8 = FUNC_3(VAR_3, VAR_7);
  if (!VAR_8) {
   FUNC_4(VAR_6, "failed to pop frag-n paddr: 0x%x",
        VAR_7);
   VAR_9->next = ((void*)0);
   return -VAR_0;
  }

  FUNC_7(VAR_8, FUNC_5(VAR_13, VAR_1));
  VAR_10 = VAR_11->reserved;
  VAR_13 -= VAR_8->len;

  VAR_9->next = VAR_8;
  VAR_9 = VAR_8;
 }

 if (VAR_13) {
  FUNC_4(VAR_6, "invalid amsdu len %u, left %d",
       FUNC_0(VAR_11->msdu_len), VAR_13);
 }

 *VAR_5 = VAR_11;

 VAR_9->next = ((void*)0);
 return 0;
}
