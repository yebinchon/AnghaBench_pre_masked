
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct sk_buff {int data; } ;
struct rx_free_desc {scalar_t__ coalese; int buf_len; int buffer_addr; } ;
struct pci_dev {int dummy; } ;
struct page {int dummy; } ;
struct atl1_rfd_ring {size_t count; int next_to_use; struct atl1_buffer* buffer_info; } ;
struct atl1_buffer {int alloced; size_t length; int dma; struct sk_buff* skb; } ;
struct TYPE_2__ {int rx_dropped; } ;
struct atl1_adapter {scalar_t__ rx_buffer_len; TYPE_1__ soft_stats; int netdev; struct pci_dev* pdev; struct atl1_rfd_ring rfd_ring; } ;


 struct rx_free_desc* FUNC_0 (struct atl1_rfd_ring*,size_t) ;
 int VAR_0 ;
 size_t FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 struct sk_buff* FUNC_5 (int ,scalar_t__) ;
 unsigned long FUNC_6 (int ) ;
 int FUNC_7 (struct pci_dev*,struct page*,unsigned long,scalar_t__,int ) ;
 scalar_t__ FUNC_8 (int) ;
 struct page* FUNC_9 (int ) ;
 int FUNC_10 () ;

__attribute__((used)) static u16 FUNC_11(struct atl1_adapter *VAR_1)
{
 struct atl1_rfd_ring *VAR_2 = &VAR_1->rfd_ring;
 struct pci_dev *VAR_3 = VAR_1->pdev;
 struct page *VAR_4;
 unsigned long VAR_5;
 struct atl1_buffer *VAR_6, *VAR_7;
 struct sk_buff *VAR_8;
 u16 VAR_9 = 0;
 u16 VAR_10, VAR_11;
 struct rx_free_desc *VAR_12;

 VAR_11 = VAR_10 = FUNC_1(&VAR_2->next_to_use);
 if (++VAR_11 == VAR_2->count)
  VAR_11 = 0;
 VAR_6 = &VAR_2->buffer_info[VAR_10];
 VAR_7 = &VAR_2->buffer_info[VAR_11];

 while (!VAR_6->alloced && !VAR_7->alloced) {
  if (VAR_6->skb) {
   VAR_6->alloced = 1;
   goto next;
  }

  VAR_12 = FUNC_0(VAR_2, VAR_10);

  VAR_8 = FUNC_5(VAR_1->netdev,
      VAR_1->rx_buffer_len);
  if (FUNC_8(!VAR_8)) {

   VAR_1->soft_stats.rx_dropped++;
   break;
  }

  VAR_6->alloced = 1;
  VAR_6->skb = VAR_8;
  VAR_6->length = (u16) VAR_1->rx_buffer_len;
  VAR_4 = FUNC_9(VAR_8->data);
  VAR_5 = FUNC_6(VAR_8->data);
  VAR_6->dma = FUNC_7(VAR_3, VAR_4, VAR_5,
      VAR_1->rx_buffer_len,
      VAR_0);
  VAR_12->buffer_addr = FUNC_4(VAR_6->dma);
  VAR_12->buf_len = FUNC_3(VAR_1->rx_buffer_len);
  VAR_12->coalese = 0;

next:
  VAR_10 = VAR_11;
  if (FUNC_8(++VAR_11 == VAR_2->count))
   VAR_11 = 0;

  VAR_6 = &VAR_2->buffer_info[VAR_10];
  VAR_7 = &VAR_2->buffer_info[VAR_11];
  VAR_9++;
 }

 if (VAR_9) {






  FUNC_10();
  FUNC_2(&VAR_2->next_to_use, (int)VAR_10);
 }
 return VAR_9;
}
