
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u8 ;
struct sk_buff {unsigned int data_len; scalar_t__ ip_summed; int no_fcs; int len; } ;
struct net_device {int dummy; } ;
struct e1000_tx_ring {int last_tx_tso; unsigned int next_to_use; TYPE_1__* buffer_info; scalar_t__ tdt; } ;
struct e1000_hw {int mac_type; scalar_t__ bus_type; scalar_t__ hw_addr; } ;
struct e1000_adapter {scalar_t__ pcix_82544; int fifo_stall_task; int flags; struct e1000_tx_ring* tx_ring; struct e1000_hw hw; } ;
typedef int netdev_tx_t ;
typedef scalar_t__ __be16 ;
struct TYPE_4__ {unsigned int gso_size; unsigned int nr_frags; int * frags; } ;
struct TYPE_3__ {scalar_t__ time_stamp; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_0 (unsigned int,unsigned int) ;
 int VAR_13 ;
 int FUNC_1 (struct sk_buff*,unsigned int) ;
 int FUNC_2 (struct sk_buff*) ;
 int VAR_14 ;

 int VAR_15 ;
 scalar_t__ FUNC_3 (struct e1000_adapter*,struct sk_buff*) ;
 scalar_t__ VAR_16 ;
 int FUNC_4 (struct net_device*,struct e1000_tx_ring*,int) ;
 int FUNC_5 (struct e1000_adapter*,struct e1000_tx_ring*,struct sk_buff*,scalar_t__) ;
 int FUNC_6 (struct e1000_adapter*,struct e1000_tx_ring*,struct sk_buff*,scalar_t__) ;
 int FUNC_7 (struct e1000_adapter*,struct e1000_tx_ring*,struct sk_buff*,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_8 (struct e1000_adapter*,struct e1000_tx_ring*,unsigned int,int) ;
 int FUNC_9 (int ,char*) ;
 scalar_t__ FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (unsigned int) ;
 scalar_t__ FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int) ;
 unsigned int FUNC_14 (unsigned int,unsigned int) ;
 int FUNC_15 (struct net_device*,int ) ;
 struct e1000_adapter* FUNC_16 (struct net_device*) ;
 int FUNC_17 (struct net_device*,int ) ;
 int FUNC_18 () ;
 int FUNC_19 (struct net_device*) ;
 scalar_t__ FUNC_20 (int ) ;
 int FUNC_21 (int *,int) ;
 unsigned int FUNC_22 (int *) ;
 unsigned int FUNC_23 (struct sk_buff*) ;
 int FUNC_24 (struct sk_buff*) ;
 TYPE_2__* FUNC_25 (struct sk_buff*) ;
 int FUNC_26 (struct sk_buff*) ;
 unsigned int FUNC_27 (struct sk_buff*) ;
 int FUNC_28 (struct sk_buff*) ;
 unsigned int FUNC_29 (struct sk_buff*) ;
 scalar_t__ FUNC_30 (struct sk_buff*) ;
 unsigned int FUNC_31 (struct sk_buff*) ;
 int FUNC_32 (int ,int *) ;
 scalar_t__ FUNC_33 (int) ;
 scalar_t__ FUNC_34 (struct sk_buff*) ;
 int FUNC_35 (unsigned int,scalar_t__) ;

__attribute__((used)) static netdev_tx_t FUNC_36(struct sk_buff *VAR_17,
        struct net_device *VAR_18)
{
 struct e1000_adapter *VAR_19 = FUNC_16(VAR_18);
 struct e1000_hw *VAR_20 = &VAR_19->hw;
 struct e1000_tx_ring *VAR_21;
 unsigned int VAR_22, VAR_23 = VAR_1;
 unsigned int VAR_24 = VAR_2;
 unsigned int VAR_25 = 0;
 unsigned int VAR_26 = FUNC_23(VAR_17);
 unsigned int VAR_27;
 unsigned int VAR_28;
 int VAR_29 = 0;
 int VAR_30;
 unsigned int VAR_31;
 __be16 VAR_32 = FUNC_34(VAR_17);






 VAR_21 = VAR_19->tx_ring;





 if (FUNC_10(VAR_17))
  return VAR_12;

 VAR_28 = FUNC_25(VAR_17)->gso_size;







 if (VAR_28) {
  u8 VAR_33;
  VAR_23 = FUNC_14(VAR_28 << 2, VAR_23);
  VAR_24 = FUNC_11(VAR_23) - 1;

  VAR_33 = FUNC_27(VAR_17) + FUNC_31(VAR_17);
  if (VAR_17->data_len && VAR_33 == VAR_26) {
   switch (VAR_20->mac_type) {
    unsigned int VAR_34;
   case 128:







    if ((unsigned long)(FUNC_26(VAR_17) - 1)
        & 4)
     break;

    VAR_34 = FUNC_14((unsigned int)4, VAR_17->data_len);
    if (!FUNC_1(VAR_17, VAR_34)) {
     FUNC_9(VAR_14, "__pskb_pull_tail "
           "failed.\n");
     FUNC_2(VAR_17);
     return VAR_12;
    }
    VAR_26 = FUNC_23(VAR_17);
    break;
   default:

    break;
   }
  }
 }


 if ((VAR_28) || (VAR_17->ip_summed == VAR_0))
  VAR_29++;
 VAR_29++;


 if (!VAR_17->data_len && VAR_21->last_tx_tso && !FUNC_24(VAR_17))
  VAR_29++;

 VAR_29 += FUNC_0(VAR_26, VAR_24);

 if (VAR_19->pcix_82544)
  VAR_29++;




 if (FUNC_33((VAR_20->bus_type == VAR_16) &&
   (VAR_26 > 2015)))
  VAR_29++;

 VAR_27 = FUNC_25(VAR_17)->nr_frags;
 for (VAR_31 = 0; VAR_31 < VAR_27; VAR_31++)
  VAR_29 += FUNC_0(FUNC_22(&FUNC_25(VAR_17)->frags[VAR_31]),
           VAR_24);
 if (VAR_19->pcix_82544)
  VAR_29 += VAR_27;




 if (FUNC_33(FUNC_4(VAR_18, VAR_21, VAR_29 + 2)))
  return VAR_11;

 if (FUNC_33((VAR_20->mac_type == VAR_15) &&
       (FUNC_3(VAR_19, VAR_17)))) {
  FUNC_19(VAR_18);
  if (!FUNC_32(VAR_13, &VAR_19->flags))
   FUNC_21(&VAR_19->fifo_stall_task, 1);
  return VAR_11;
 }

 if (FUNC_30(VAR_17)) {
  VAR_25 |= VAR_7;
  VAR_25 |= (FUNC_29(VAR_17) <<
        VAR_8);
 }

 VAR_22 = VAR_21->next_to_use;

 VAR_30 = FUNC_5(VAR_19, VAR_21, VAR_17, VAR_32);
 if (VAR_30 < 0) {
  FUNC_2(VAR_17);
  return VAR_12;
 }

 if (FUNC_13(VAR_30)) {
  if (FUNC_13(VAR_20->mac_type != 128))
   VAR_21->last_tx_tso = 1;
  VAR_25 |= VAR_6;
 } else if (FUNC_13(FUNC_6(VAR_19, VAR_21, VAR_17, VAR_32)))
  VAR_25 |= VAR_3;

 if (VAR_32 == FUNC_12(VAR_9))
  VAR_25 |= VAR_4;

 if (FUNC_33(VAR_17->no_fcs))
  VAR_25 |= VAR_5;

 VAR_29 = FUNC_7(VAR_19, VAR_21, VAR_17, VAR_22, VAR_23,
        VAR_27, VAR_28);

 if (VAR_29) {







  int VAR_35 = VAR_10 + 7;

  FUNC_17(VAR_18, VAR_17->len);
  FUNC_28(VAR_17);

  FUNC_8(VAR_19, VAR_21, VAR_25, VAR_29);





  if (VAR_19->pcix_82544)
   VAR_35 += VAR_10 + 1;


  FUNC_4(VAR_18, VAR_21, VAR_35);

  if (!FUNC_18() ||
      FUNC_20(FUNC_15(VAR_18, 0))) {
   FUNC_35(VAR_21->next_to_use, VAR_20->hw_addr + VAR_21->tdt);
  }
 } else {
  FUNC_2(VAR_17);
  VAR_21->buffer_info[VAR_22].time_stamp = 0;
  VAR_21->next_to_use = VAR_22;
 }

 return VAR_12;
}
