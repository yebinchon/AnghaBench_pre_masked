
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct device {int dummy; } ;
struct bgmac_slot_info {scalar_t__ dma_addr; TYPE_6__* skb; } ;
struct bgmac_dma_ring {int start; int end; TYPE_1__* cpu_base; struct bgmac_slot_info* slots; scalar_t__ index_base; scalar_t__ mmio_base; } ;
struct bgmac_dma_desc {int dummy; } ;
struct bgmac {TYPE_3__* net_dev; struct device* dma_dev; } ;
struct TYPE_10__ {scalar_t__ len; } ;
struct TYPE_8__ {int tx_packets; int tx_bytes; } ;
struct TYPE_9__ {TYPE_2__ stats; } ;
struct TYPE_7__ {int ctl1; int ctl0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct bgmac*,scalar_t__) ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (struct device*,scalar_t__,int,int ) ;
 int FUNC_3 (struct device*,scalar_t__,int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*,unsigned int,unsigned int) ;
 scalar_t__ FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_8(struct bgmac *VAR_6, struct bgmac_dma_ring *VAR_7)
{
 struct device *VAR_8 = VAR_6->dma_dev;
 int VAR_9;
 unsigned VAR_10 = 0, VAR_11 = 0;


 VAR_9 = FUNC_0(VAR_6, VAR_7->mmio_base + VAR_3);
 VAR_9 &= VAR_2;
 VAR_9 -= VAR_7->index_base;
 VAR_9 &= VAR_2;
 VAR_9 /= sizeof(struct bgmac_dma_desc);

 while (VAR_7->start != VAR_7->end) {
  int VAR_12 = VAR_7->start % VAR_4;
  struct bgmac_slot_info *VAR_13 = &VAR_7->slots[VAR_12];
  u32 VAR_14, VAR_15;
  int VAR_16;

  if (VAR_12 == VAR_9)
   break;

  VAR_14 = FUNC_4(VAR_7->cpu_base[VAR_12].ctl0);
  VAR_15 = FUNC_4(VAR_7->cpu_base[VAR_12].ctl1);
  VAR_16 = VAR_15 & VAR_1;
  if (VAR_14 & VAR_0)

   FUNC_3(VAR_8, VAR_13->dma_addr, VAR_16,
      VAR_5);
  else
   FUNC_2(VAR_8, VAR_13->dma_addr, VAR_16,
           VAR_5);

  if (VAR_13->skb) {
   VAR_6->net_dev->stats.tx_bytes += VAR_13->skb->len;
   VAR_6->net_dev->stats.tx_packets++;
   VAR_10 += VAR_13->skb->len;
   VAR_11++;


   FUNC_1(VAR_13->skb);
   VAR_13->skb = ((void*)0);
  }

  VAR_13->dma_addr = 0;
  VAR_7->start++;
 }

 if (!VAR_11)
  return;

 FUNC_5(VAR_6->net_dev, VAR_11, VAR_10);

 if (FUNC_6(VAR_6->net_dev))
  FUNC_7(VAR_6->net_dev);
}
