
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct skb_shared_hwtstamps {int hwtstamp; } ;
struct sk_buff {scalar_t__ len; } ;
struct efx_tx_queue {int read_count; int queue; TYPE_2__* efx; scalar_t__ completed_timestamp_minor; scalar_t__ completed_timestamp_major; scalar_t__ timestamping; } ;
struct efx_tx_buffer {int flags; scalar_t__ len; scalar_t__ skb; scalar_t__ unmap_len; scalar_t__ dma_offset; scalar_t__ dma_addr; } ;
struct device {int dummy; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_4__ {int net_dev; TYPE_1__* pci_dev; } ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct device*,scalar_t__,scalar_t__,int ) ;
 int FUNC_3 (struct device*,scalar_t__,scalar_t__,int ) ;
 int FUNC_4 (struct efx_tx_queue*) ;
 int FUNC_5 (TYPE_2__*,int ,int ,char*,int ,int ) ;
 int FUNC_6 (struct sk_buff*,struct skb_shared_hwtstamps*) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_7(struct efx_tx_queue *VAR_4,
          struct efx_tx_buffer *VAR_5,
          unsigned int *VAR_6,
          unsigned int *VAR_7)
{
 if (VAR_5->unmap_len) {
  struct device *VAR_8 = &VAR_4->efx->pci_dev->dev;
  dma_addr_t VAR_9 = VAR_5->dma_addr - VAR_5->dma_offset;
  if (VAR_5->flags & VAR_1)
   FUNC_3(VAR_8, VAR_9, VAR_5->unmap_len,
      VAR_0);
  else
   FUNC_2(VAR_8, VAR_9, VAR_5->unmap_len,
           VAR_0);
  VAR_5->unmap_len = 0;
 }

 if (VAR_5->flags & VAR_2) {
  struct sk_buff *VAR_10 = (struct sk_buff *)VAR_5->skb;

  FUNC_0(!VAR_6 || !VAR_7);
  (*VAR_6)++;
  (*VAR_7) += VAR_10->len;
  if (VAR_4->timestamping &&
      (VAR_4->completed_timestamp_major ||
       VAR_4->completed_timestamp_minor)) {
   struct skb_shared_hwtstamps VAR_11;

   VAR_11.hwtstamp =
    FUNC_4(VAR_4);
   FUNC_6(VAR_10, &VAR_11);

   VAR_4->completed_timestamp_major = 0;
   VAR_4->completed_timestamp_minor = 0;
  }
  FUNC_1((struct sk_buff *)VAR_5->skb);
  FUNC_5(VAR_4->efx, VAR_3, VAR_4->efx->net_dev,
      "TX queue %d transmission id %x complete\n",
      VAR_4->queue, VAR_4->read_count);
 }

 VAR_5->len = 0;
 VAR_5->flags = 0;
}
