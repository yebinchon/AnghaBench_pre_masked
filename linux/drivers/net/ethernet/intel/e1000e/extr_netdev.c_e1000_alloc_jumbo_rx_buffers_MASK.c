
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int buffer_addr; } ;
union e1000_rx_desc_extended {TYPE_1__ read; } ;
struct sk_buff {int dummy; } ;
struct pci_dev {int dev; } ;
struct net_device {int dummy; } ;
struct e1000_ring {unsigned int next_to_use; unsigned int count; int tail; struct e1000_buffer* buffer_info; struct e1000_adapter* adapter; } ;
struct e1000_buffer {scalar_t__ dma; scalar_t__ page; struct sk_buff* skb; } ;
struct e1000_adapter {int flags2; int alloc_rx_buff_failed; struct pci_dev* pdev; struct net_device* netdev; } ;
typedef int gfp_t ;


 int VAR_0 ;
 union e1000_rx_desc_extended* FUNC_0 (struct e1000_ring,unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_1 (struct net_device*,unsigned int,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int *,scalar_t__,int ,int ,int ) ;
 scalar_t__ FUNC_5 (int *,scalar_t__) ;
 int FUNC_6 (struct e1000_ring*,unsigned int) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 () ;
 int FUNC_11 (unsigned int,int ) ;

__attribute__((used)) static void FUNC_12(struct e1000_ring *VAR_3,
      int VAR_4, gfp_t VAR_5)
{
 struct e1000_adapter *VAR_6 = VAR_3->adapter;
 struct net_device *VAR_7 = VAR_6->netdev;
 struct pci_dev *VAR_8 = VAR_6->pdev;
 union e1000_rx_desc_extended *VAR_9;
 struct e1000_buffer *VAR_10;
 struct sk_buff *VAR_11;
 unsigned int VAR_12;
 unsigned int VAR_13 = 256 - 16;

 VAR_12 = VAR_3->next_to_use;
 VAR_10 = &VAR_3->buffer_info[VAR_12];

 while (VAR_4--) {
  VAR_11 = VAR_10->skb;
  if (VAR_11) {
   FUNC_8(VAR_11, 0);
   goto check_page;
  }

  VAR_11 = FUNC_1(VAR_7, VAR_13, VAR_5);
  if (FUNC_9(!VAR_11)) {

   VAR_6->alloc_rx_buff_failed++;
   break;
  }

  VAR_10->skb = VAR_11;
check_page:

  if (!VAR_10->page) {
   VAR_10->page = FUNC_2(VAR_5);
   if (FUNC_9(!VAR_10->page)) {
    VAR_6->alloc_rx_buff_failed++;
    break;
   }
  }

  if (!VAR_10->dma) {
   VAR_10->dma = FUNC_4(&VAR_8->dev,
       VAR_10->page, 0,
       VAR_2,
       VAR_0);
   if (FUNC_5(&VAR_8->dev, VAR_10->dma)) {
    VAR_6->alloc_rx_buff_failed++;
    break;
   }
  }

  VAR_9 = FUNC_0(*VAR_3, VAR_12);
  VAR_9->read.buffer_addr = FUNC_3(VAR_10->dma);

  if (FUNC_9(++VAR_12 == VAR_3->count))
   VAR_12 = 0;
  VAR_10 = &VAR_3->buffer_info[VAR_12];
 }

 if (FUNC_7(VAR_3->next_to_use != VAR_12)) {
  VAR_3->next_to_use = VAR_12;
  if (FUNC_9(VAR_12-- == 0))
   VAR_12 = (VAR_3->count - 1);






  FUNC_10();
  if (VAR_6->flags2 & VAR_1)
   FUNC_6(VAR_3, VAR_12);
  else
   FUNC_11(VAR_12, VAR_3->tail);
 }
}
