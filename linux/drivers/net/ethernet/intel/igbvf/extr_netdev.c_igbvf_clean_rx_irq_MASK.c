
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ status_error; int vlan; int length; } ;
struct TYPE_8__ {int hdr_info; } ;
struct TYPE_9__ {TYPE_1__ hs_rss; } ;
struct TYPE_10__ {TYPE_2__ lo_dword; } ;
struct TYPE_12__ {TYPE_4__ upper; TYPE_3__ lower; } ;
union e1000_adv_rx_desc {TYPE_5__ wb; } ;
typedef int u32 ;
struct sk_buff {int data_len; int truesize; int protocol; scalar_t__ len; union e1000_adv_rx_desc* data; } ;
struct pci_dev {int dev; } ;
struct TYPE_13__ {unsigned int rx_bytes; unsigned int rx_packets; } ;
struct net_device {TYPE_6__ stats; } ;
struct igbvf_ring {unsigned int next_to_clean; unsigned int count; struct igbvf_buffer* buffer_info; } ;
struct igbvf_buffer {scalar_t__ dma; struct sk_buff* skb; int * page; int page_offset; scalar_t__ page_dma; } ;
struct igbvf_adapter {int rx_ps_hdr_size; int rx_buffer_len; unsigned int total_rx_packets; unsigned int total_rx_bytes; struct pci_dev* pdev; struct net_device* netdev; struct igbvf_ring* rx_ring; } ;
struct TYPE_14__ {int nr_frags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 union e1000_adv_rx_desc* FUNC_0 (struct igbvf_ring,unsigned int) ;
 union e1000_adv_rx_desc* VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int *,scalar_t__,int,int ) ;
 int FUNC_3 (int *,scalar_t__,int,int ) ;
 int FUNC_4 (struct sk_buff*,struct net_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct igbvf_ring*,int) ;
 int FUNC_7 (struct igbvf_ring*) ;
 int FUNC_8 (struct igbvf_adapter*,struct net_device*,struct sk_buff*,int,int ) ;
 int FUNC_9 (struct igbvf_adapter*,int,struct sk_buff*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (union e1000_adv_rx_desc*) ;
 int FUNC_14 () ;
 int FUNC_15 (struct sk_buff*,int ,int *,int ,int) ;
 int FUNC_16 (struct sk_buff*,int) ;
 TYPE_7__* FUNC_17 (struct sk_buff*) ;

__attribute__((used)) static bool FUNC_18(struct igbvf_adapter *VAR_9,
          int *VAR_10, int VAR_11)
{
 struct igbvf_ring *VAR_12 = VAR_9->rx_ring;
 struct net_device *VAR_13 = VAR_9->netdev;
 struct pci_dev *VAR_14 = VAR_9->pdev;
 union e1000_adv_rx_desc *VAR_15, *VAR_16;
 struct igbvf_buffer *VAR_17, *VAR_18;
 struct sk_buff *VAR_19;
 bool VAR_20 = 0;
 int VAR_21 = 0;
 unsigned int VAR_22 = 0, VAR_23 = 0;
 unsigned int VAR_24;
 u32 VAR_25, VAR_26, VAR_27;

 VAR_24 = VAR_12->next_to_clean;
 VAR_15 = FUNC_0(*VAR_12, VAR_24);
 VAR_27 = FUNC_11(VAR_15->wb.upper.status_error);

 while (VAR_27 & VAR_4) {
  if (*VAR_10 >= VAR_11)
   break;
  (*VAR_10)++;
  FUNC_14();

  VAR_17 = &VAR_12->buffer_info[VAR_24];






  VAR_26 = (FUNC_10(VAR_15->wb.lower.lo_dword.hs_rss.hdr_info)
         & VAR_1) >>
         VAR_2;
  if (VAR_26 > VAR_9->rx_ps_hdr_size)
   VAR_26 = VAR_9->rx_ps_hdr_size;

  VAR_25 = FUNC_10(VAR_15->wb.upper.length);
  VAR_20 = 1;
  VAR_21++;

  VAR_19 = VAR_17->skb;
  FUNC_13(VAR_19->data - VAR_7);
  VAR_17->skb = ((void*)0);
  if (!VAR_9->rx_ps_hdr_size) {
   FUNC_3(&VAR_14->dev, VAR_17->dma,
      VAR_9->rx_buffer_len,
      VAR_0);
   VAR_17->dma = 0;
   FUNC_16(VAR_19, VAR_25);
   goto send_up;
  }

  if (!FUNC_17(VAR_19)->nr_frags) {
   FUNC_3(&VAR_14->dev, VAR_17->dma,
      VAR_9->rx_ps_hdr_size,
      VAR_0);
   VAR_17->dma = 0;
   FUNC_16(VAR_19, VAR_26);
  }

  if (VAR_25) {
   FUNC_2(&VAR_14->dev, VAR_17->page_dma,
           VAR_8 / 2,
           VAR_0);
   VAR_17->page_dma = 0;

   FUNC_15(VAR_19, FUNC_17(VAR_19)->nr_frags,
        VAR_17->page,
        VAR_17->page_offset,
        VAR_25);

   if ((VAR_9->rx_buffer_len > (VAR_8 / 2)) ||
       (FUNC_12(VAR_17->page) != 1))
    VAR_17->page = ((void*)0);
   else
    FUNC_5(VAR_17->page);

   VAR_19->len += VAR_25;
   VAR_19->data_len += VAR_25;
   VAR_19->truesize += VAR_8 / 2;
  }
send_up:
  VAR_24++;
  if (VAR_24 == VAR_12->count)
   VAR_24 = 0;
  VAR_16 = FUNC_0(*VAR_12, VAR_24);
  FUNC_13(VAR_16);
  VAR_18 = &VAR_12->buffer_info[VAR_24];

  if (!(VAR_27 & VAR_5)) {
   VAR_17->skb = VAR_18->skb;
   VAR_17->dma = VAR_18->dma;
   VAR_18->skb = VAR_19;
   VAR_18->dma = 0;
   goto next_desc;
  }

  if (VAR_27 & VAR_3) {
   FUNC_1(VAR_19);
   goto next_desc;
  }

  VAR_22 += VAR_19->len;
  VAR_23++;

  FUNC_9(VAR_9, VAR_27, VAR_19);

  VAR_19->protocol = FUNC_4(VAR_19, VAR_13);

  FUNC_8(VAR_9, VAR_13, VAR_19, VAR_27,
      VAR_15->wb.upper.vlan);

next_desc:
  VAR_15->wb.upper.status_error = 0;


  if (VAR_21 >= VAR_6) {
   FUNC_6(VAR_12, VAR_21);
   VAR_21 = 0;
  }


  VAR_15 = VAR_16;
  VAR_17 = VAR_18;

  VAR_27 = FUNC_11(VAR_15->wb.upper.status_error);
 }

 VAR_12->next_to_clean = VAR_24;
 VAR_21 = FUNC_7(VAR_12);

 if (VAR_21)
  FUNC_6(VAR_12, VAR_21);

 VAR_9->total_rx_packets += VAR_23;
 VAR_9->total_rx_bytes += VAR_22;
 VAR_13->stats.rx_bytes += VAR_22;
 VAR_13->stats.rx_packets += VAR_23;
 return VAR_20;
}
