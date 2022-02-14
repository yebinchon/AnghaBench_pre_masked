
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int data; } ;
struct ef4_tx_queue {struct ef4_nic* efx; } ;
struct ef4_tx_buffer {unsigned short flags; size_t unmap_len; struct sk_buff* skb; scalar_t__ dma_addr; scalar_t__ dma_offset; } ;
struct ef4_nic {TYPE_1__* pci_dev; } ;
struct device {int dummy; } ;
typedef int skb_frag_t ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_4__ {unsigned int nr_frags; int * frags; } ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct device*,int ,size_t,int ) ;
 int FUNC_1 (struct device*,scalar_t__) ;
 struct ef4_tx_buffer* FUNC_2 (struct ef4_tx_queue*,scalar_t__,size_t) ;
 scalar_t__ FUNC_3 (struct device*,int *,int ,size_t,int ) ;
 size_t FUNC_4 (int *) ;
 size_t FUNC_5 (struct sk_buff*) ;
 TYPE_2__* FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct ef4_tx_queue *VAR_5, struct sk_buff *VAR_6)
{
 struct ef4_nic *VAR_7 = VAR_5->efx;
 struct device *VAR_8 = &VAR_7->pci_dev->dev;
 unsigned int VAR_9, VAR_10;
 dma_addr_t VAR_11, VAR_12;
 unsigned short VAR_13;
 size_t VAR_14, VAR_15;

 VAR_10 = FUNC_6(VAR_6)->nr_frags;
 VAR_9 = 0;


 VAR_14 = FUNC_5(VAR_6);
 VAR_11 = FUNC_0(VAR_8, VAR_6->data, VAR_14, VAR_0);
 VAR_13 = VAR_2;
 VAR_15 = VAR_14;
 VAR_12 = VAR_11;

 if (FUNC_7(FUNC_1(VAR_8, VAR_11)))
  return -VAR_4;


 do {
  struct ef4_tx_buffer *VAR_16;
  skb_frag_t *VAR_17;

  VAR_16 = FUNC_2(VAR_5, VAR_11, VAR_14);




  VAR_16->flags = VAR_1 | VAR_13;
  VAR_16->unmap_len = VAR_15;
  VAR_16->dma_offset = VAR_16->dma_addr - VAR_12;

  if (VAR_9 >= VAR_10) {



   VAR_16->skb = VAR_6;
   VAR_16->flags = VAR_3 | VAR_13;
   return 0;
  }


  VAR_17 = &FUNC_6(VAR_6)->frags[VAR_9++];
  VAR_14 = FUNC_4(VAR_17);
  VAR_11 = FUNC_3(VAR_8, VAR_17,
    0, VAR_14, VAR_0);
  VAR_13 = 0;
  VAR_15 = VAR_14;
  VAR_12 = VAR_11;

  if (FUNC_7(FUNC_1(VAR_8, VAR_11)))
   return -VAR_4;
 } while (1);
}
