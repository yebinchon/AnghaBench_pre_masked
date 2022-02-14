
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int status_error; int vlan; int length; } ;
struct TYPE_5__ {int rss; } ;
struct TYPE_6__ {TYPE_1__ hi_dword; } ;
struct TYPE_8__ {TYPE_3__ upper; TYPE_2__ lower; } ;
union e1000_rx_desc_extended {TYPE_4__ wb; } ;
typedef int u32 ;
struct sk_buff {union e1000_rx_desc_extended* data; } ;
struct pci_dev {int dev; } ;
struct net_device {int features; } ;
struct e1000_ring {unsigned int next_to_clean; unsigned int count; struct e1000_buffer* buffer_info; struct e1000_adapter* adapter; } ;
struct e1000_hw {int dummy; } ;
struct e1000_buffer {struct sk_buff* skb; scalar_t__ dma; } ;
struct e1000_adapter {int flags2; unsigned int total_rx_bytes; unsigned int total_rx_packets; int (* alloc_rx_buf ) (struct e1000_ring*,int,int ) ;int napi; int rx_buffer_len; struct e1000_hw hw; struct pci_dev* pdev; struct net_device* netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 union e1000_rx_desc_extended* FUNC_0 (struct e1000_ring,unsigned int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,scalar_t__,int ,int ) ;
 int FUNC_4 (struct e1000_ring*) ;
 int FUNC_5 (struct e1000_adapter*,struct net_device*,struct sk_buff*,int,int ) ;
 int FUNC_6 (struct e1000_adapter*,int,struct sk_buff*) ;
 int FUNC_7 (struct net_device*,int ,struct sk_buff*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 struct sk_buff* FUNC_11 (int *,int) ;
 int FUNC_12 (union e1000_rx_desc_extended*) ;
 int FUNC_13 (struct sk_buff*,int ,union e1000_rx_desc_extended*,int ) ;
 int FUNC_14 (struct sk_buff*,int) ;
 int FUNC_15 (struct e1000_ring*,int,int ) ;
 int FUNC_16 (struct e1000_ring*,int,int ) ;
 scalar_t__ FUNC_17 (int) ;

__attribute__((used)) static bool FUNC_18(struct e1000_ring *VAR_12, int *VAR_13,
          int VAR_14)
{
 struct e1000_adapter *VAR_15 = VAR_12->adapter;
 struct net_device *VAR_16 = VAR_15->netdev;
 struct pci_dev *VAR_17 = VAR_15->pdev;
 struct e1000_hw *VAR_18 = &VAR_15->hw;
 union e1000_rx_desc_extended *VAR_19, *VAR_20;
 struct e1000_buffer *VAR_21, *VAR_22;
 u32 VAR_23, VAR_24;
 unsigned int VAR_25;
 int VAR_26 = 0;
 bool VAR_27 = 0;
 unsigned int VAR_28 = 0, VAR_29 = 0;

 VAR_25 = VAR_12->next_to_clean;
 VAR_19 = FUNC_0(*VAR_12, VAR_25);
 VAR_24 = FUNC_10(VAR_19->wb.upper.status_error);
 VAR_21 = &VAR_12->buffer_info[VAR_25];

 while (VAR_24 & VAR_2) {
  struct sk_buff *VAR_30;

  if (*VAR_13 >= VAR_14)
   break;
  (*VAR_13)++;
  FUNC_2();

  VAR_30 = VAR_21->skb;
  VAR_21->skb = ((void*)0);

  FUNC_12(VAR_30->data - VAR_10);

  VAR_25++;
  if (VAR_25 == VAR_12->count)
   VAR_25 = 0;
  VAR_20 = FUNC_0(*VAR_12, VAR_25);
  FUNC_12(VAR_20);

  VAR_22 = &VAR_12->buffer_info[VAR_25];

  VAR_27 = 1;
  VAR_26++;
  FUNC_3(&VAR_17->dev, VAR_21->dma,
     VAR_15->rx_buffer_len, VAR_0);
  VAR_21->dma = 0;

  VAR_23 = FUNC_9(VAR_19->wb.upper.length);







  if (FUNC_17(!(VAR_24 & VAR_3)))
   VAR_15->flags2 |= VAR_6;

  if (VAR_15->flags2 & VAR_6) {

   FUNC_8("Receive packet consumed multiple buffers\n");

   VAR_21->skb = VAR_30;
   if (VAR_24 & VAR_3)
    VAR_15->flags2 &= ~VAR_6;
   goto next_desc;
  }

  if (FUNC_17((VAR_24 & VAR_1) &&
        !(VAR_16->features & VAR_8))) {

   VAR_21->skb = VAR_30;
   goto next_desc;
  }


  if (!(VAR_15->flags2 & VAR_5)) {




   if (VAR_16->features & VAR_9)
    VAR_28 -= 4;
   else
    VAR_23 -= 4;
  }

  VAR_28 += VAR_23;
  VAR_29++;





  if (VAR_23 < VAR_11) {
   struct sk_buff *VAR_31 =
    FUNC_11(&VAR_15->napi, VAR_23);
   if (VAR_31) {
    FUNC_13(VAR_31,
              -VAR_10,
              (VAR_30->data -
        VAR_10),
              (VAR_23 +
        VAR_10));

    VAR_21->skb = VAR_30;
    VAR_30 = VAR_31;
   }

  }

  FUNC_14(VAR_30, VAR_23);


  FUNC_6(VAR_15, VAR_24, VAR_30);

  FUNC_7(VAR_16, VAR_19->wb.lower.hi_dword.rss, VAR_30);

  FUNC_5(VAR_15, VAR_16, VAR_30, VAR_24,
      VAR_19->wb.upper.vlan);

next_desc:
  VAR_19->wb.upper.status_error &= FUNC_1(~0xFF);


  if (VAR_26 >= VAR_4) {
   VAR_15->alloc_rx_buf(VAR_12, VAR_26,
           VAR_7);
   VAR_26 = 0;
  }


  VAR_19 = VAR_20;
  VAR_21 = VAR_22;

  VAR_24 = FUNC_10(VAR_19->wb.upper.status_error);
 }
 VAR_12->next_to_clean = VAR_25;

 VAR_26 = FUNC_4(VAR_12);
 if (VAR_26)
  VAR_15->alloc_rx_buf(VAR_12, VAR_26, VAR_7);

 VAR_15->total_rx_bytes += VAR_28;
 VAR_15->total_rx_packets += VAR_29;
 return VAR_27;
}
