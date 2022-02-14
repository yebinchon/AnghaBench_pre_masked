
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct sk_buff {int protocol; } ;
struct device {int dummy; } ;
struct bgmac_slot_info {int dma_addr; struct bgmac_rx_header* buf; } ;
struct bgmac_rx_header {int flags; int len; } ;
struct bgmac_dma_ring {int start; struct bgmac_slot_info* slots; scalar_t__ index_base; scalar_t__ mmio_base; } ;
struct bgmac_dma_desc {int dummy; } ;
struct bgmac {int napi; TYPE_2__* net_dev; struct device* dma_dev; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {int rx_bytes; int rx_packets; int rx_errors; int rx_length_errors; } ;
struct TYPE_5__ {TYPE_1__ stats; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct device*,struct bgmac_slot_info*) ;
 int FUNC_1 (struct bgmac*,struct bgmac_dma_ring*,size_t) ;
 scalar_t__ FUNC_2 (struct bgmac*,struct bgmac_slot_info*) ;
 int FUNC_3 (struct bgmac*,struct bgmac_dma_ring*) ;
 int FUNC_4 (struct bgmac*,scalar_t__) ;
 struct sk_buff* FUNC_5 (void*,int) ;
 int FUNC_6 (struct device*,int ,int ,int ) ;
 int FUNC_7 (struct sk_buff*,TYPE_2__*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,struct sk_buff*) ;
 int FUNC_10 (TYPE_2__*,char*,...) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (struct sk_buff*,int) ;
 int FUNC_14 (struct sk_buff*,int) ;
 scalar_t__ FUNC_15 (int) ;
 int FUNC_16 (void*) ;

__attribute__((used)) static int FUNC_17(struct bgmac *VAR_9, struct bgmac_dma_ring *VAR_10,
        int VAR_11)
{
 u32 VAR_12;
 int VAR_13 = 0;

 VAR_12 = FUNC_4(VAR_9, VAR_10->mmio_base + VAR_1);
 VAR_12 &= VAR_0;
 VAR_12 -= VAR_10->index_base;
 VAR_12 &= VAR_0;
 VAR_12 /= sizeof(struct bgmac_dma_desc);

 while (VAR_10->start != VAR_12) {
  struct device *VAR_14 = VAR_9->dma_dev;
  struct bgmac_slot_info *VAR_15 = &VAR_10->slots[VAR_10->start];
  struct bgmac_rx_header *VAR_16 = VAR_15->buf + VAR_3;
  struct sk_buff *VAR_17;
  void *VAR_18 = VAR_15->buf;
  dma_addr_t VAR_19 = VAR_15->dma_addr;
  u16 VAR_20, VAR_21;

  do {

   if (FUNC_2(VAR_9, VAR_15)) {
    FUNC_0(VAR_14, VAR_15);
    break;
   }


   FUNC_6(VAR_14, VAR_19,
      VAR_4, VAR_7);


   VAR_20 = FUNC_8(VAR_16->len);
   VAR_21 = FUNC_8(VAR_16->flags);


   if (VAR_20 == 0xdead && VAR_21 == 0xbeef) {
    FUNC_10(VAR_9->net_dev, "Found poisoned packet at slot %d, DMA issue!\n",
        VAR_10->start);
    FUNC_11(FUNC_16(VAR_18));
    VAR_9->net_dev->stats.rx_errors++;
    break;
   }

   if (VAR_20 > VAR_2) {
    FUNC_10(VAR_9->net_dev, "Found oversized packet at slot %d, DMA issue!\n",
        VAR_10->start);
    FUNC_11(FUNC_16(VAR_18));
    VAR_9->net_dev->stats.rx_length_errors++;
    VAR_9->net_dev->stats.rx_errors++;
    break;
   }


   VAR_20 -= VAR_8;

   VAR_17 = FUNC_5(VAR_18, VAR_2);
   if (FUNC_15(!VAR_17)) {
    FUNC_10(VAR_9->net_dev, "build_skb failed\n");
    FUNC_11(FUNC_16(VAR_18));
    VAR_9->net_dev->stats.rx_errors++;
    break;
   }
   FUNC_14(VAR_17, VAR_5 +
    VAR_3 + VAR_20);
   FUNC_13(VAR_17, VAR_5 +
     VAR_3);

   FUNC_12(VAR_17);
   VAR_17->protocol = FUNC_7(VAR_17, VAR_9->net_dev);
   VAR_9->net_dev->stats.rx_bytes += VAR_20;
   VAR_9->net_dev->stats.rx_packets++;
   FUNC_9(&VAR_9->napi, VAR_17);
   VAR_13++;
  } while (0);

  FUNC_1(VAR_9, VAR_10, VAR_10->start);

  if (++VAR_10->start >= VAR_6)
   VAR_10->start = 0;

  if (VAR_13 >= VAR_11)
   break;
 }

 FUNC_3(VAR_9, VAR_10);

 return VAR_13;
}
