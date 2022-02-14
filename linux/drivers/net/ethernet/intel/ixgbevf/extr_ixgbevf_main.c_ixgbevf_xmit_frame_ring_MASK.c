
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct sk_buff {int len; } ;
struct ixgbevf_tx_buffer {int gso_segs; struct sk_buff* skb; int protocol; int tx_flags; int bytecount; } ;
struct TYPE_3__ {int tx_busy; } ;
struct ixgbevf_ring {size_t next_to_use; struct ixgbevf_tx_buffer* tx_buffer_info; TYPE_1__ tx_stats; } ;
struct ixgbevf_ipsec_tx_data {int member_0; } ;
typedef int skb_frag_t ;
struct TYPE_4__ {unsigned short nr_frags; int * frags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct ixgbevf_ring*,struct ixgbevf_tx_buffer*,struct ixgbevf_ipsec_tx_data*) ;
 scalar_t__ FUNC_4 (struct ixgbevf_ring*,scalar_t__) ;
 int FUNC_5 (struct ixgbevf_ring*,struct ixgbevf_tx_buffer*,int *,struct ixgbevf_ipsec_tx_data*) ;
 int FUNC_6 (struct ixgbevf_ring*,struct ixgbevf_tx_buffer*,struct ixgbevf_ipsec_tx_data*) ;
 int FUNC_7 (struct ixgbevf_ring*,struct ixgbevf_tx_buffer*,int ) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (struct sk_buff*,int ,int ,int *) ;
 int FUNC_10 (struct sk_buff*) ;
 TYPE_2__* FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct sk_buff*) ;
 scalar_t__ FUNC_13 (struct sk_buff*) ;
 int FUNC_14 (struct sk_buff*) ;
 scalar_t__ FUNC_15 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_16(struct sk_buff *VAR_5,
       struct ixgbevf_ring *VAR_6)
{
 struct ixgbevf_tx_buffer *VAR_7;
 int VAR_8;
 u32 VAR_9 = 0;
 u16 VAR_10 = FUNC_0(FUNC_10(VAR_5));
 struct ixgbevf_ipsec_tx_data VAR_11 = { 0 };



 u8 VAR_12 = 0;
 u8 *VAR_13 = FUNC_9(VAR_5, 0, 0, ((void*)0));

 if (!VAR_13 || FUNC_2(VAR_13)) {
  FUNC_1(VAR_5);
  return VAR_4;
 }
 VAR_10 += FUNC_11(VAR_5)->nr_frags;

 if (FUNC_4(VAR_6, VAR_10 + 3)) {
  VAR_6->tx_stats.tx_busy++;
  return VAR_3;
 }


 VAR_7 = &VAR_6->tx_buffer_info[VAR_6->next_to_use];
 VAR_7->skb = VAR_5;
 VAR_7->bytecount = VAR_5->len;
 VAR_7->gso_segs = 1;

 if (FUNC_13(VAR_5)) {
  VAR_9 |= FUNC_12(VAR_5);
  VAR_9 <<= VAR_2;
  VAR_9 |= VAR_1;
 }


 VAR_7->tx_flags = VAR_9;
 VAR_7->protocol = FUNC_14(VAR_5);





 VAR_8 = FUNC_5(VAR_6, VAR_7, &VAR_12, &VAR_11);
 if (VAR_8 < 0)
  goto out_drop;
 else if (!VAR_8)
  FUNC_6(VAR_6, VAR_7, &VAR_11);

 FUNC_7(VAR_6, VAR_7, VAR_12);

 FUNC_4(VAR_6, VAR_0);

 return VAR_4;

out_drop:
 FUNC_1(VAR_7->skb);
 VAR_7->skb = ((void*)0);

 return VAR_4;
}
