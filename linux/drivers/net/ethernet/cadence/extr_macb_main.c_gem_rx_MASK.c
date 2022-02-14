
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {unsigned int len; unsigned int csum; int data; int ip_summed; int protocol; } ;
struct napi_struct {int dummy; } ;
struct TYPE_9__ {unsigned int rx_bytes; int rx_packets; int rx_dropped; } ;
struct macb_queue {TYPE_3__ stats; struct sk_buff** rx_skbuff; int rx_tail; struct macb* bp; } ;
struct macb_dma_desc {int addr; int ctrl; } ;
struct macb {int rx_frm_len_mask; TYPE_4__* dev; int rx_buffer_size; TYPE_1__* pdev; } ;
typedef int dma_addr_t ;
struct TYPE_8__ {unsigned int rx_bytes; int rx_packets; int rx_dropped; } ;
struct TYPE_10__ {int features; int flags; TYPE_2__ stats; } ;
struct TYPE_7__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int ,int ,int ) ;
 int FUNC_4 (struct sk_buff*,TYPE_4__*) ;
 int FUNC_5 (struct macb*,struct sk_buff*,struct macb_dma_desc*) ;
 int FUNC_6 (struct macb_queue*) ;
 int FUNC_7 (struct macb*,struct macb_dma_desc*) ;
 struct macb_dma_desc* FUNC_8 (struct macb_queue*,unsigned int) ;
 unsigned int FUNC_9 (struct macb*,int ) ;
 int FUNC_10 (struct napi_struct*,struct sk_buff*) ;
 int FUNC_11 (TYPE_4__*,char*) ;
 int FUNC_12 (TYPE_4__*,char*,unsigned int,unsigned int) ;
 int FUNC_13 (int ,char*,int ,int,int,int ,int,int) ;
 int FUNC_14 () ;
 int FUNC_15 (struct sk_buff*) ;
 int FUNC_16 (struct sk_buff*) ;
 int FUNC_17 (struct sk_buff*,unsigned int) ;
 scalar_t__ FUNC_18 (int) ;

__attribute__((used)) static int FUNC_19(struct macb_queue *VAR_11, struct napi_struct *VAR_12,
    int VAR_13)
{
 struct macb *VAR_14 = VAR_11->bp;
 unsigned int VAR_15;
 unsigned int VAR_16;
 struct sk_buff *VAR_17;
 struct macb_dma_desc *VAR_18;
 int VAR_19 = 0;

 while (VAR_19 < VAR_13) {
  u32 VAR_20;
  dma_addr_t VAR_21;
  bool VAR_22;

  VAR_16 = FUNC_9(VAR_14, VAR_11->rx_tail);
  VAR_18 = FUNC_8(VAR_11, VAR_16);


  FUNC_14();

  VAR_22 = (VAR_18->addr & FUNC_1(VAR_10)) ? 1 : 0;
  VAR_21 = FUNC_7(VAR_14, VAR_18);

  if (!VAR_22)
   break;


  FUNC_2();

  VAR_20 = VAR_18->ctrl;

  VAR_11->rx_tail++;
  VAR_19++;

  if (!(VAR_20 & FUNC_1(VAR_9) && VAR_20 & FUNC_1(VAR_8))) {
   FUNC_11(VAR_14->dev,
       "not whole frame pointed by descriptor\n");
   VAR_14->dev->stats.rx_dropped++;
   VAR_11->stats.rx_dropped++;
   break;
  }
  VAR_17 = VAR_11->rx_skbuff[VAR_16];
  if (FUNC_18(!VAR_17)) {
   FUNC_11(VAR_14->dev,
       "inconsistent Rx descriptor chain\n");
   VAR_14->dev->stats.rx_dropped++;
   VAR_11->stats.rx_dropped++;
   break;
  }

  VAR_11->rx_skbuff[VAR_16] = ((void*)0);
  VAR_15 = VAR_20 & VAR_14->rx_frm_len_mask;

  FUNC_12(VAR_14->dev, "gem_rx %u (len %u)\n", VAR_16, VAR_15);

  FUNC_17(VAR_17, VAR_15);
  FUNC_3(&VAR_14->pdev->dev, VAR_21,
     VAR_14->rx_buffer_size, VAR_1);

  VAR_17->protocol = FUNC_4(VAR_17, VAR_14->dev);
  FUNC_15(VAR_17);
  if (VAR_14->dev->features & VAR_6 &&
      !(VAR_14->dev->flags & VAR_4) &&
      FUNC_0(VAR_7, VAR_20) & VAR_3)
   VAR_17->ip_summed = VAR_0;

  VAR_14->dev->stats.rx_packets++;
  VAR_11->stats.rx_packets++;
  VAR_14->dev->stats.rx_bytes += VAR_17->len;
  VAR_11->stats.rx_bytes += VAR_17->len;

  FUNC_5(VAR_14, VAR_17, VAR_18);
  FUNC_10(VAR_12, VAR_17);
 }

 FUNC_6(VAR_11);

 return VAR_19;
}
