
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int len; scalar_t__ ip_summed; int data; } ;
struct TYPE_5__ {int tx_errors; int tx_dropped; } ;
struct net_device {TYPE_2__ stats; } ;
struct device {int dummy; } ;
struct bgmac_slot_info {int dma_addr; struct sk_buff* skb; } ;
struct bgmac_dma_ring {int end; int start; int mmio_base; TYPE_1__* cpu_base; struct bgmac_slot_info* slots; scalar_t__ index_base; } ;
struct bgmac_dma_desc {int dummy; } ;
struct bgmac {struct net_device* net_dev; struct device* dma_dev; } ;
typedef int skb_frag_t ;
typedef int netdev_tx_t ;
struct TYPE_6__ {int nr_frags; int * frags; } ;
struct TYPE_4__ {int ctl1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct bgmac*,struct bgmac_dma_ring*,int,int,int) ;
 int FUNC_1 (struct bgmac*,int,scalar_t__) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct device*,int ,int,int ) ;
 int FUNC_4 (struct device*,int ) ;
 int FUNC_5 (struct device*,int ,int,int ) ;
 int FUNC_6 (struct device*,int ,int,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct net_device*,char*,...) ;
 int FUNC_9 (struct net_device*,int) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct device*,int *,int ,int,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct sk_buff*) ;
 TYPE_3__* FUNC_15 (struct sk_buff*) ;
 scalar_t__ FUNC_16 (int ) ;
 int FUNC_17 () ;

__attribute__((used)) static netdev_tx_t FUNC_18(struct bgmac *VAR_10,
        struct bgmac_dma_ring *VAR_11,
        struct sk_buff *VAR_12)
{
 struct device *VAR_13 = VAR_10->dma_dev;
 struct net_device *VAR_14 = VAR_10->net_dev;
 int VAR_15 = VAR_11->end % VAR_5;
 struct bgmac_slot_info *VAR_16 = &VAR_11->slots[VAR_15];
 int VAR_17;
 u32 VAR_18;
 int VAR_19;

 if (VAR_12->len > VAR_3) {
  FUNC_8(VAR_10->net_dev, "Too long skb (%d)\n", VAR_12->len);
  goto err_drop;
 }

 if (VAR_12->ip_summed == VAR_6)
  FUNC_11(VAR_12);

 VAR_17 = FUNC_15(VAR_12)->nr_frags;




 if (VAR_11->end - VAR_11->start + VAR_17 + 1 >= VAR_5) {
  FUNC_8(VAR_10->net_dev, "TX ring is full, queue should be stopped!\n");
  FUNC_10(VAR_14);
  return VAR_8;
 }

 VAR_16->dma_addr = FUNC_3(VAR_13, VAR_12->data, FUNC_14(VAR_12),
     VAR_7);
 if (FUNC_16(FUNC_4(VAR_13, VAR_16->dma_addr)))
  goto err_dma_head;

 VAR_18 = VAR_2;
 if (!VAR_17)
  VAR_18 |= VAR_0 | VAR_1;

 FUNC_0(VAR_10, VAR_11, VAR_15, FUNC_14(VAR_12), VAR_18);
 VAR_18 = 0;

 for (VAR_19 = 0; VAR_19 < VAR_17; VAR_19++) {
  skb_frag_t *VAR_20 = &FUNC_15(VAR_12)->frags[VAR_19];
  int VAR_21 = FUNC_13(VAR_20);

  VAR_15 = (VAR_15 + 1) % VAR_5;
  VAR_16 = &VAR_11->slots[VAR_15];
  VAR_16->dma_addr = FUNC_12(VAR_13, VAR_20, 0,
        VAR_21, VAR_7);
  if (FUNC_16(FUNC_4(VAR_13, VAR_16->dma_addr)))
   goto err_dma;

  if (VAR_19 == VAR_17 - 1)
   VAR_18 |= VAR_0 | VAR_1;

  FUNC_0(VAR_10, VAR_11, VAR_15, VAR_21, VAR_18);
 }

 VAR_16->skb = VAR_12;
 VAR_11->end += VAR_17 + 1;
 FUNC_9(VAR_14, VAR_12->len);

 FUNC_17();




 FUNC_1(VAR_10, VAR_11->mmio_base + VAR_4,
      VAR_11->index_base +
      (VAR_11->end % VAR_5) *
      sizeof(struct bgmac_dma_desc));

 if (VAR_11->end - VAR_11->start >= VAR_5 - 8)
  FUNC_10(VAR_14);

 return VAR_9;

err_dma:
 FUNC_6(VAR_13, VAR_16->dma_addr, FUNC_14(VAR_12),
    VAR_7);

 while (VAR_19-- > 0) {
  int VAR_22 = (VAR_11->end + VAR_19) % VAR_5;
  struct bgmac_slot_info *VAR_23 = &VAR_11->slots[VAR_22];
  u32 VAR_24 = FUNC_7(VAR_11->cpu_base[VAR_22].ctl1);
  int VAR_25 = VAR_24 & VAR_3;

  FUNC_5(VAR_13, VAR_23->dma_addr, VAR_25, VAR_7);
 }

err_dma_head:
 FUNC_8(VAR_10->net_dev, "Mapping error of skb on ring 0x%X\n",
     VAR_11->mmio_base);

err_drop:
 FUNC_2(VAR_12);
 VAR_14->stats.tx_dropped++;
 VAR_14->stats.tx_errors++;
 return VAR_9;
}
