
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int status_error; int vlan; int length0; } ;
struct TYPE_9__ {int header_status; int * length; } ;
struct TYPE_6__ {int rss; } ;
struct TYPE_7__ {TYPE_1__ hi_dword; } ;
struct TYPE_10__ {TYPE_3__ middle; TYPE_4__ upper; TYPE_2__ lower; } ;
union e1000_rx_desc_packet_split {TYPE_5__ wb; } ;
typedef int u8 ;
typedef int u32 ;
struct sk_buff {int data_len; scalar_t__ len; int truesize; union e1000_rx_desc_packet_split* data; } ;
struct pci_dev {int dev; } ;
struct net_device {int features; } ;
struct e1000_ring {unsigned int next_to_clean; unsigned int count; struct e1000_buffer* buffer_info; struct e1000_adapter* adapter; } ;
struct e1000_ps_page {int * page; scalar_t__ dma; } ;
struct e1000_hw {int dummy; } ;
struct e1000_buffer {struct sk_buff* skb; struct e1000_ps_page* ps_pages; scalar_t__ dma; } ;
struct e1000_adapter {int rx_ps_bsize0; int flags2; unsigned int total_rx_bytes; unsigned int total_rx_packets; int (* alloc_rx_buf ) (struct e1000_ring*,int,int ) ;int rx_hdr_split; struct pci_dev* pdev; struct net_device* netdev; struct e1000_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 union e1000_rx_desc_packet_split* FUNC_0 (struct e1000_ring,unsigned int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 union e1000_rx_desc_packet_split* VAR_11 ;
 scalar_t__ VAR_12 ;
 unsigned int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,scalar_t__,scalar_t__,int ) ;
 int FUNC_6 (int *,scalar_t__,scalar_t__,int ) ;
 int FUNC_7 (int *,scalar_t__,scalar_t__,int ) ;
 int FUNC_8 (int *,scalar_t__,int,int ) ;
 int FUNC_9 (struct e1000_ring*) ;
 int FUNC_10 (struct e1000_adapter*,struct net_device*,struct sk_buff*,int,int ) ;
 int FUNC_11 (struct e1000_adapter*,int,struct sk_buff*) ;
 int FUNC_12 (struct net_device*,int ,struct sk_buff*) ;
 int FUNC_13 (char*) ;
 int * FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ,int *,int) ;
 int FUNC_19 (union e1000_rx_desc_packet_split*) ;
 int FUNC_20 (struct sk_buff*,scalar_t__) ;
 int FUNC_21 (struct sk_buff*,unsigned int,int *,int ,int) ;
 int FUNC_22 (struct sk_buff*,int) ;
 int FUNC_23 (struct sk_buff*) ;
 int FUNC_24 (struct e1000_ring*,int,int ) ;
 int FUNC_25 (struct e1000_ring*,int,int ) ;
 scalar_t__ FUNC_26 (int) ;

__attribute__((used)) static bool FUNC_27(struct e1000_ring *VAR_15, int *VAR_16,
      int VAR_17)
{
 struct e1000_adapter *VAR_18 = VAR_15->adapter;
 struct e1000_hw *VAR_19 = &VAR_18->hw;
 union e1000_rx_desc_packet_split *VAR_20, *VAR_21;
 struct net_device *VAR_22 = VAR_18->netdev;
 struct pci_dev *VAR_23 = VAR_18->pdev;
 struct e1000_buffer *VAR_24, *VAR_25;
 struct e1000_ps_page *VAR_26;
 struct sk_buff *VAR_27;
 unsigned int VAR_28, VAR_29;
 u32 VAR_30, VAR_31;
 int VAR_32 = 0;
 bool VAR_33 = 0;
 unsigned int VAR_34 = 0, VAR_35 = 0;

 VAR_28 = VAR_15->next_to_clean;
 VAR_20 = FUNC_0(*VAR_15, VAR_28);
 VAR_31 = FUNC_17(VAR_20->wb.middle.status_error);
 VAR_24 = &VAR_15->buffer_info[VAR_28];

 while (VAR_31 & VAR_3) {
  if (*VAR_16 >= VAR_17)
   break;
  (*VAR_16)++;
  VAR_27 = VAR_24->skb;
  FUNC_4();


  FUNC_19(VAR_27->data - VAR_11);

  VAR_28++;
  if (VAR_28 == VAR_15->count)
   VAR_28 = 0;
  VAR_21 = FUNC_0(*VAR_15, VAR_28);
  FUNC_19(VAR_21);

  VAR_25 = &VAR_15->buffer_info[VAR_28];

  VAR_33 = 1;
  VAR_32++;
  FUNC_8(&VAR_23->dev, VAR_24->dma,
     VAR_18->rx_ps_bsize0, VAR_0);
  VAR_24->dma = 0;


  if (!(VAR_31 & VAR_4))
   VAR_18->flags2 |= VAR_7;

  if (VAR_18->flags2 & VAR_7) {
   FUNC_13("Packet Split buffers didn't pick up the full packet\n");
   FUNC_3(VAR_27);
   if (VAR_31 & VAR_4)
    VAR_18->flags2 &= ~VAR_7;
   goto next_desc;
  }

  if (FUNC_26((VAR_31 & VAR_1) &&
        !(VAR_22->features & VAR_9))) {
   FUNC_3(VAR_27);
   goto next_desc;
  }

  VAR_30 = FUNC_16(VAR_20->wb.middle.length0);

  if (!VAR_30) {
   FUNC_13("Last part of the packet spanning multiple descriptors\n");
   FUNC_3(VAR_27);
   goto next_desc;
  }


  FUNC_22(VAR_27, VAR_30);

  {



   int VAR_36 = FUNC_16(VAR_20->wb.upper.length[0]);






   if (VAR_36 && (VAR_36 <= VAR_14) &&
       ((VAR_30 + VAR_36) <= VAR_18->rx_ps_bsize0)) {
    u8 *VAR_37;

    VAR_26 = &VAR_24->ps_pages[0];





    FUNC_5(&VAR_23->dev,
       VAR_26->dma,
       VAR_12,
       VAR_0);
    VAR_37 = FUNC_14(VAR_26->page);
    FUNC_18(FUNC_23(VAR_27), VAR_37, VAR_36);
    FUNC_15(VAR_37);
    FUNC_6(&VAR_23->dev,
          VAR_26->dma,
          VAR_12,
          VAR_0);


    if (!(VAR_18->flags2 & VAR_6)) {
     if (!(VAR_22->features & VAR_10))
      VAR_36 -= 4;
    }

    FUNC_22(VAR_27, VAR_36);
    goto copydone;
   }
  }

  for (VAR_29 = 0; VAR_29 < VAR_13; VAR_29++) {
   VAR_30 = FUNC_16(VAR_20->wb.upper.length[VAR_29]);
   if (!VAR_30)
    break;

   VAR_26 = &VAR_24->ps_pages[VAR_29];
   FUNC_7(&VAR_23->dev, VAR_26->dma, VAR_12,
           VAR_0);
   VAR_26->dma = 0;
   FUNC_21(VAR_27, VAR_29, VAR_26->page, 0, VAR_30);
   VAR_26->page = ((void*)0);
   VAR_27->len += VAR_30;
   VAR_27->data_len += VAR_30;
   VAR_27->truesize += VAR_12;
  }




  if (!(VAR_18->flags2 & VAR_6)) {
   if (!(VAR_22->features & VAR_10))
    FUNC_20(VAR_27, VAR_27->len - 4);
  }

copydone:
  VAR_34 += VAR_27->len;
  VAR_35++;

  FUNC_11(VAR_18, VAR_31, VAR_27);

  FUNC_12(VAR_22, VAR_20->wb.lower.hi_dword.rss, VAR_27);

  if (VAR_20->wb.upper.header_status &
      FUNC_1(VAR_2))
   VAR_18->rx_hdr_split++;

  FUNC_10(VAR_18, VAR_22, VAR_27, VAR_31,
      VAR_20->wb.middle.vlan);

next_desc:
  VAR_20->wb.middle.status_error &= FUNC_2(~0xFF);
  VAR_24->skb = ((void*)0);


  if (VAR_32 >= VAR_5) {
   VAR_18->alloc_rx_buf(VAR_15, VAR_32,
           VAR_8);
   VAR_32 = 0;
  }


  VAR_20 = VAR_21;
  VAR_24 = VAR_25;

  VAR_31 = FUNC_17(VAR_20->wb.middle.status_error);
 }
 VAR_15->next_to_clean = VAR_28;

 VAR_32 = FUNC_9(VAR_15);
 if (VAR_32)
  VAR_18->alloc_rx_buf(VAR_15, VAR_32, VAR_8);

 VAR_18->total_rx_bytes += VAR_34;
 VAR_18->total_rx_packets += VAR_35;
 return VAR_33;
}
