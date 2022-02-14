
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct sk_buff {int len; int data; } ;
struct i40e_tx_buffer {int gso_segs; struct sk_buff* skb; int bytecount; } ;
struct TYPE_2__ {int tx_busy; int tx_linearize; } ;
struct i40e_ring {size_t next_to_use; int netdev; struct i40e_tx_buffer* tx_bi; TYPE_1__ tx_stats; } ;
struct i40e_pf {int state; struct sk_buff* ptp_tx_skb; } ;
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
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct i40e_ring*,struct sk_buff*,int) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (struct i40e_ring*,int ,int,int) ;
 scalar_t__ FUNC_7 (struct i40e_ring*,int) ;
 struct i40e_pf* FUNC_8 (int ) ;
 int FUNC_9 (int ,struct sk_buff*,struct i40e_ring*) ;
 int FUNC_10 (struct i40e_tx_buffer*,int *,int *) ;
 int FUNC_11 (struct i40e_ring*,struct sk_buff*,int,int *) ;
 int FUNC_12 (struct sk_buff*,int*,int*,int*,struct i40e_ring*,int*) ;
 scalar_t__ FUNC_13 (struct i40e_ring*,struct sk_buff*,struct i40e_tx_buffer*,int,int ,int,int) ;
 scalar_t__ FUNC_14 (struct sk_buff*,struct i40e_ring*,int*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (struct sk_buff*) ;
 int FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (int) ;
 scalar_t__ FUNC_19 (struct sk_buff*) ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static netdev_tx_t FUNC_20(struct sk_buff *VAR_13,
     struct i40e_ring *VAR_14)
{
 u64 VAR_15 = VAR_3;
 u32 VAR_16 = 0, VAR_17 = 0;
 struct i40e_tx_buffer *VAR_18;
 u32 VAR_19 = 0;
 u32 VAR_20 = 0;
 __be16 VAR_21;
 u32 VAR_22 = 0;
 u8 VAR_23 = 0;
 int VAR_24, VAR_25;
 int VAR_26;


 FUNC_17(VAR_13->data);

 FUNC_9(VAR_11, VAR_13, VAR_14);

 VAR_25 = FUNC_16(VAR_13);
 if (FUNC_5(VAR_13, VAR_25)) {
  if (FUNC_0(VAR_13)) {
   FUNC_2(VAR_13);
   return VAR_9;
  }
  VAR_25 = FUNC_15(VAR_13->len);
  VAR_14->tx_stats.tx_linearize++;
 }







 if (FUNC_7(VAR_14, VAR_25 + 4 + 1)) {
  VAR_14->tx_stats.tx_busy++;
  return VAR_8;
 }


 VAR_18 = &VAR_14->tx_bi[VAR_14->next_to_use];
 VAR_18->skb = VAR_13;
 VAR_18->bytecount = VAR_13->len;
 VAR_18->gso_segs = 1;


 if (FUNC_14(VAR_13, VAR_14, &VAR_20))
  goto out_drop;


 VAR_21 = FUNC_19(VAR_13);


 if (VAR_21 == FUNC_3(VAR_0))
  VAR_20 |= VAR_4;
 else if (VAR_21 == FUNC_3(VAR_1))
  VAR_20 |= VAR_5;

 VAR_24 = FUNC_10(VAR_18, &VAR_23, &VAR_15);

 if (VAR_24 < 0)
  goto out_drop;
 else if (VAR_24)
  VAR_20 |= VAR_6;


 VAR_24 = FUNC_12(VAR_13, &VAR_20, &VAR_22, &VAR_19,
      VAR_14, &VAR_16);
 if (VAR_24 < 0)
  goto out_drop;

 VAR_26 = FUNC_11(VAR_14, VAR_13, VAR_20, &VAR_15);

 if (VAR_26)
  VAR_20 |= VAR_7;


 VAR_22 |= VAR_2;

 FUNC_6(VAR_14, VAR_15,
      VAR_16, VAR_17);





 FUNC_4(VAR_14, VAR_13, VAR_20);

 if (FUNC_13(VAR_14, VAR_13, VAR_18, VAR_20, VAR_23,
   VAR_22, VAR_19))
  goto cleanup_tx_tstamp;

 return VAR_9;

out_drop:
 FUNC_9(VAR_12, VAR_18->skb, VAR_14);
 FUNC_2(VAR_18->skb);
 VAR_18->skb = ((void*)0);
cleanup_tx_tstamp:
 if (FUNC_18(VAR_20 & VAR_7)) {
  struct i40e_pf *VAR_27 = FUNC_8(VAR_14->netdev);

  FUNC_2(VAR_27->ptp_tx_skb);
  VAR_27->ptp_tx_skb = ((void*)0);
  FUNC_1(VAR_10, VAR_27->state);
 }

 return VAR_9;
}
