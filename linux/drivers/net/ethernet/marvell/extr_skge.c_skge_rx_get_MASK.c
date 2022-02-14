
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_6__ {int start; } ;
struct skge_port {scalar_t__ rx_buf_size; TYPE_3__* hw; TYPE_1__ rx_ring; int netdev; } ;
struct skge_element {struct sk_buff* skb; } ;
struct sk_buff {int protocol; int ip_summed; int csum; int data; } ;
struct TYPE_7__ {int rx_crc_errors; int rx_frame_errors; int rx_length_errors; } ;
struct net_device {int features; TYPE_2__ stats; } ;
struct TYPE_8__ {int pdev; } ;


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
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct skge_element*,int ) ;
 int FUNC_3 (struct skge_element*,int ) ;
 int FUNC_4 (struct sk_buff*,struct net_device*) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (scalar_t__) ;
 int VAR_16 ;
 int VAR_17 ;
 struct sk_buff* FUNC_7 (struct net_device*,scalar_t__) ;
 struct skge_port* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct skge_port*,int ,int ,int ,char*,struct skge_element*,int,int) ;
 int FUNC_10 (int ,int ,int ,int ) ;
 int FUNC_11 (int ,int ,int ,int ) ;
 int FUNC_12 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_13 (TYPE_3__*,int) ;
 int FUNC_14 (int ) ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_15 (struct sk_buff*,int ,scalar_t__) ;
 int FUNC_16 (struct sk_buff*,scalar_t__) ;
 int FUNC_17 (struct skge_element*,scalar_t__) ;
 scalar_t__ FUNC_18 (struct skge_port*,struct skge_element*,struct sk_buff*,scalar_t__) ;

__attribute__((used)) static struct sk_buff *FUNC_19(struct net_device *VAR_20,
       struct skge_element *VAR_21,
       u32 VAR_22, u32 VAR_23, u16 VAR_24)
{
 struct skge_port *VAR_25 = FUNC_8(VAR_20);
 struct sk_buff *VAR_26;
 u16 VAR_27 = VAR_22 & VAR_0;

 FUNC_9(VAR_25, VAR_19, VAR_8, VAR_25->netdev,
       "rx slot %td status 0x%x len %d\n",
       VAR_21 - VAR_25->rx_ring.start, VAR_23, VAR_27);

 if (VAR_27 > VAR_25->rx_buf_size)
  goto error;

 if ((VAR_22 & (VAR_1|VAR_2)) != (VAR_2|VAR_1))
  goto error;

 if (FUNC_0(VAR_25->hw, VAR_23))
  goto error;

 if (FUNC_13(VAR_25->hw, VAR_23) != VAR_27)
  goto error;

 if (VAR_27 < VAR_11) {
  VAR_26 = FUNC_7(VAR_20, VAR_27);
  if (!VAR_26)
   goto resubmit;

  FUNC_10(VAR_25->hw->pdev,
         FUNC_2(VAR_21, VAR_16),
         FUNC_3(VAR_21, VAR_17),
         VAR_10);
  FUNC_15(VAR_21->skb, VAR_26->data, VAR_27);
  FUNC_11(VAR_25->hw->pdev,
            FUNC_2(VAR_21, VAR_16),
            FUNC_3(VAR_21, VAR_17),
            VAR_10);
  FUNC_17(VAR_21, VAR_25->rx_buf_size);
 } else {
  struct skge_element VAR_28;
  struct sk_buff *VAR_29;

  VAR_29 = FUNC_7(VAR_20, VAR_25->rx_buf_size);
  if (!VAR_29)
   goto resubmit;

  VAR_28 = *VAR_21;

  VAR_26 = VAR_28.skb;
  FUNC_14(VAR_26->data);

  if (FUNC_18(VAR_25, VAR_21, VAR_29, VAR_25->rx_buf_size) < 0) {
   FUNC_1(VAR_29);
   goto resubmit;
  }

  FUNC_12(VAR_25->hw->pdev,
     FUNC_2(&VAR_28, VAR_16),
     FUNC_3(&VAR_28, VAR_17),
     VAR_10);
 }

 FUNC_16(VAR_26, VAR_27);

 if (VAR_20->features & VAR_9) {
  VAR_26->csum = FUNC_6(VAR_24);
  VAR_26->ip_summed = VAR_3;
 }

 VAR_26->protocol = FUNC_4(VAR_26, VAR_20);

 return VAR_26;
error:

 FUNC_9(VAR_25, VAR_18, VAR_8, VAR_25->netdev,
       "rx err, slot %td control 0x%x status 0x%x\n",
       VAR_21 - VAR_25->rx_ring.start, VAR_22, VAR_23);

 if (FUNC_5(VAR_25->hw)) {
  if (VAR_23 & (VAR_15|VAR_14))
   VAR_20->stats.rx_length_errors++;
  if (VAR_23 & VAR_13)
   VAR_20->stats.rx_frame_errors++;
  if (VAR_23 & VAR_12)
   VAR_20->stats.rx_crc_errors++;
 } else {
  if (VAR_23 & (VAR_6|VAR_7))
   VAR_20->stats.rx_length_errors++;
  if (VAR_23 & VAR_5)
   VAR_20->stats.rx_frame_errors++;
  if (VAR_23 & VAR_4)
   VAR_20->stats.rx_crc_errors++;
 }

resubmit:
 FUNC_17(VAR_21, VAR_25->rx_buf_size);
 return ((void*)0);
}
