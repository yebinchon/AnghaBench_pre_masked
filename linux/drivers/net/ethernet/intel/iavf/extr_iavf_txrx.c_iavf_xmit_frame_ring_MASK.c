
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct sk_buff {int len; int data; } ;
struct iavf_tx_buffer {int gso_segs; struct sk_buff* skb; int bytecount; } ;
struct TYPE_2__ {int tx_busy; int tx_linearize; } ;
struct iavf_ring {size_t next_to_use; struct iavf_tx_buffer* tx_bi; TYPE_1__ tx_stats; } ;
typedef int netdev_tx_t ;
typedef scalar_t__ __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int) ;
 int FUNC_4 (struct iavf_ring*,int ,int ,int ) ;
 scalar_t__ FUNC_5 (struct iavf_ring*,int) ;
 int FUNC_6 (int ,struct sk_buff*,struct iavf_ring*) ;
 int FUNC_7 (struct iavf_tx_buffer*,int *,int *) ;
 int FUNC_8 (struct sk_buff*,int *,int *,int *,struct iavf_ring*,int *) ;
 int FUNC_9 (struct iavf_ring*,struct sk_buff*,struct iavf_tx_buffer*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_10 (struct sk_buff*,struct iavf_ring*,int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (struct sk_buff*) ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static netdev_tx_t FUNC_15(struct sk_buff *VAR_11,
     struct iavf_ring *VAR_12)
{
 u64 VAR_13 = VAR_3;
 u32 VAR_14 = 0, VAR_15 = 0;
 struct iavf_tx_buffer *VAR_16;
 u32 VAR_17 = 0;
 u32 VAR_18 = 0;
 __be16 VAR_19;
 u32 VAR_20 = 0;
 u8 VAR_21 = 0;
 int VAR_22, VAR_23;


 FUNC_13(VAR_11->data);

 FUNC_6(VAR_9, VAR_11, VAR_12);

 VAR_23 = FUNC_12(VAR_11);
 if (FUNC_3(VAR_11, VAR_23)) {
  if (FUNC_0(VAR_11)) {
   FUNC_1(VAR_11);
   return VAR_8;
  }
  VAR_23 = FUNC_11(VAR_11->len);
  VAR_12->tx_stats.tx_linearize++;
 }







 if (FUNC_5(VAR_12, VAR_23 + 4 + 1)) {
  VAR_12->tx_stats.tx_busy++;
  return VAR_7;
 }


 VAR_16 = &VAR_12->tx_bi[VAR_12->next_to_use];
 VAR_16->skb = VAR_11;
 VAR_16->bytecount = VAR_11->len;
 VAR_16->gso_segs = 1;


 if (FUNC_10(VAR_11, VAR_12, &VAR_18))
  goto out_drop;


 VAR_19 = FUNC_14(VAR_11);


 if (VAR_19 == FUNC_2(VAR_0))
  VAR_18 |= VAR_4;
 else if (VAR_19 == FUNC_2(VAR_1))
  VAR_18 |= VAR_5;

 VAR_22 = FUNC_7(VAR_16, &VAR_21, &VAR_13);

 if (VAR_22 < 0)
  goto out_drop;
 else if (VAR_22)
  VAR_18 |= VAR_6;


 VAR_22 = FUNC_8(VAR_11, &VAR_18, &VAR_20, &VAR_17,
      VAR_12, &VAR_14);
 if (VAR_22 < 0)
  goto out_drop;


 VAR_20 |= VAR_2;

 FUNC_4(VAR_12, VAR_13,
      VAR_14, VAR_15);

 FUNC_9(VAR_12, VAR_11, VAR_16, VAR_18, VAR_21,
      VAR_20, VAR_17);

 return VAR_8;

out_drop:
 FUNC_6(VAR_10, VAR_16->skb, VAR_12);
 FUNC_1(VAR_16->skb);
 VAR_16->skb = ((void*)0);
 return VAR_8;
}
