
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct sk_buff_head {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;
struct htt_rx_in_ord_msdu_desc_ext {int msdu_len; int msdu_paddr; } ;
struct htt_rx_in_ord_ind {int info; int msdu_count; struct htt_rx_in_ord_msdu_desc_ext* msdu_descs64; } ;
struct TYPE_4__ {int flags; } ;
struct htt_rx_desc {TYPE_2__ attention; } ;
struct TYPE_3__ {int lock; } ;
struct ath10k_htt {struct ath10k* ar; TYPE_1__ rx_ring; } ;
struct ath10k {scalar_t__ monitor_arvif; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff_head*) ;
 int FUNC_4 (struct sk_buff_head*,struct sk_buff*) ;
 int FUNC_5 (struct ath10k_htt*,struct sk_buff*,struct htt_rx_in_ord_msdu_desc_ext**) ;
 struct sk_buff* FUNC_6 (struct ath10k_htt*,int ) ;
 int FUNC_7 (struct ath10k*,char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct sk_buff*,int) ;
 int FUNC_10 (struct sk_buff*,int) ;
 int FUNC_11 (struct ath10k*,struct htt_rx_desc*,int) ;

__attribute__((used)) static int FUNC_12(struct ath10k_htt *VAR_4,
       struct htt_rx_in_ord_ind *VAR_5,
       struct sk_buff_head *VAR_6)
{
 struct ath10k *VAR_7 = VAR_4->ar;
 struct htt_rx_in_ord_msdu_desc_ext *VAR_8 = VAR_5->msdu_descs64;
 struct htt_rx_desc *VAR_9;
 struct sk_buff *VAR_10;
 int VAR_11, VAR_12;
 bool VAR_13;
 u64 VAR_14;

 FUNC_8(&VAR_4->rx_ring.lock);

 VAR_11 = FUNC_0(VAR_5->msdu_count);
 VAR_13 = !!(VAR_5->info & VAR_2);

 while (VAR_11--) {
  VAR_14 = FUNC_2(VAR_8->msdu_paddr);
  VAR_10 = FUNC_6(VAR_4, VAR_14);
  if (!VAR_10) {
   FUNC_3(VAR_6);
   return -VAR_1;
  }

  if (!VAR_13 && VAR_7->monitor_arvif) {
   VAR_12 = FUNC_5(VAR_4, VAR_10,
        &VAR_8);
   if (VAR_12) {
    FUNC_3(VAR_6);
    return VAR_12;
   }
   FUNC_4(VAR_6, VAR_10);
   VAR_8++;
   continue;
  }

  FUNC_4(VAR_6, VAR_10);

  if (!VAR_13) {
   VAR_9 = (void *)VAR_10->data;

   FUNC_11(VAR_7, VAR_9, sizeof(*VAR_9));

   FUNC_10(VAR_10, sizeof(*VAR_9));
   FUNC_9(VAR_10, sizeof(*VAR_9));
   FUNC_10(VAR_10, FUNC_0(VAR_8->msdu_len));

   if (!(FUNC_1(VAR_9->attention.flags) &
         VAR_3)) {
    FUNC_7(VAR_4->ar, "tried to pop an incomplete frame, oops!\n");
    return -VAR_0;
   }
  }

  VAR_8++;
 }

 return 0;
}
