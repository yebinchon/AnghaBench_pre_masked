
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {unsigned int data; } ;
struct efx_tx_queue {int tso_long_headers; struct efx_nic* efx; } ;
struct efx_tx_buffer {unsigned short flags; size_t unmap_len; size_t dma_offset; size_t dma_addr; struct sk_buff* skb; } ;
struct efx_nic {TYPE_1__* pci_dev; } ;
struct device {int dummy; } ;
typedef int skb_frag_t ;
typedef size_t dma_addr_t ;
struct TYPE_6__ {unsigned int nr_frags; int * frags; } ;
struct TYPE_5__ {unsigned int doff; } ;
struct TYPE_4__ {struct device dev; } ;


 int VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 int VAR_4 ;
 size_t FUNC_0 (struct device*,unsigned int,size_t,int ) ;
 int FUNC_1 (struct device*,size_t) ;
 struct efx_tx_buffer* FUNC_2 (struct efx_tx_queue*,size_t,size_t) ;
 size_t FUNC_3 (struct device*,int *,int ,size_t,int ) ;
 size_t FUNC_4 (int *) ;
 size_t FUNC_5 (struct sk_buff*) ;
 TYPE_3__* FUNC_6 (struct sk_buff*) ;
 unsigned int FUNC_7 (struct sk_buff*) ;
 TYPE_2__* FUNC_8 (struct sk_buff*) ;
 scalar_t__ FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct efx_tx_queue *VAR_5, struct sk_buff *VAR_6,
      unsigned int VAR_7)
{
 struct efx_nic *VAR_8 = VAR_5->efx;
 struct device *VAR_9 = &VAR_8->pci_dev->dev;
 unsigned int VAR_10, VAR_11;
 dma_addr_t VAR_12, VAR_13;
 unsigned short VAR_14;
 size_t VAR_15, VAR_16;

 VAR_11 = FUNC_6(VAR_6)->nr_frags;
 VAR_10 = 0;


 VAR_15 = FUNC_5(VAR_6);
 VAR_12 = FUNC_0(VAR_9, VAR_6->data, VAR_15, VAR_0);
 VAR_14 = VAR_2;
 VAR_16 = VAR_15;
 VAR_13 = VAR_12;

 if (FUNC_9(FUNC_1(VAR_9, VAR_12)))
  return -VAR_4;

 if (VAR_7) {



  size_t VAR_17 = FUNC_7(VAR_6) - VAR_6->data +
    (FUNC_8(VAR_6)->doff << 2u);

  if (VAR_17 != VAR_15) {
   VAR_5->tso_long_headers++;
   FUNC_2(VAR_5, VAR_12, VAR_17);
   VAR_15 -= VAR_17;
   VAR_12 += VAR_17;
  }
 }


 do {
  struct efx_tx_buffer *VAR_18;
  skb_frag_t *VAR_19;

  VAR_18 = FUNC_2(VAR_5, VAR_12, VAR_15);




  VAR_18->flags = VAR_1 | VAR_14;
  VAR_18->unmap_len = VAR_16;
  VAR_18->dma_offset = VAR_18->dma_addr - VAR_13;

  if (VAR_10 >= VAR_11) {



   VAR_18->skb = VAR_6;
   VAR_18->flags = VAR_3 | VAR_14;
   return 0;
  }


  VAR_19 = &FUNC_6(VAR_6)->frags[VAR_10++];
  VAR_15 = FUNC_4(VAR_19);
  VAR_12 = FUNC_3(VAR_9, VAR_19,
    0, VAR_15, VAR_0);
  VAR_14 = 0;
  VAR_16 = VAR_15;
  VAR_13 = VAR_12;

  if (FUNC_9(FUNC_1(VAR_9, VAR_12)))
   return -VAR_4;
 } while (1);
}
