
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int data; } ;
struct pci_dev {int dev; } ;
struct igbvf_ring {unsigned int next_to_use; unsigned int count; struct igbvf_buffer* buffer_info; } ;
struct igbvf_buffer {unsigned int length; int mapped_as_page; void* time_stamp; scalar_t__ dma; struct sk_buff* skb; } ;
struct igbvf_adapter {struct pci_dev* pdev; } ;
typedef int skb_frag_t ;
struct TYPE_2__ {unsigned int nr_frags; int * frags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (int *,int ,unsigned int,int ) ;
 scalar_t__ FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (struct igbvf_adapter*,struct igbvf_buffer*) ;
 void* VAR_2 ;
 scalar_t__ FUNC_5 (int *,int const*,int ,unsigned int,int ) ;
 unsigned int FUNC_6 (int const*) ;
 unsigned int FUNC_7 (struct sk_buff*) ;
 TYPE_1__* FUNC_8 (struct sk_buff*) ;

__attribute__((used)) static inline int FUNC_9(struct igbvf_adapter *VAR_3,
       struct igbvf_ring *VAR_4,
       struct sk_buff *VAR_5)
{
 struct igbvf_buffer *VAR_6;
 struct pci_dev *VAR_7 = VAR_3->pdev;
 unsigned int VAR_8 = FUNC_7(VAR_5);
 unsigned int VAR_9 = 0, VAR_10;
 unsigned int VAR_11;

 VAR_10 = VAR_4->next_to_use;

 VAR_6 = &VAR_4->buffer_info[VAR_10];
 FUNC_0(VAR_8 >= VAR_1);
 VAR_6->length = VAR_8;

 VAR_6->time_stamp = VAR_2;
 VAR_6->mapped_as_page = 0;
 VAR_6->dma = FUNC_2(&VAR_7->dev, VAR_5->data, VAR_8,
       VAR_0);
 if (FUNC_3(&VAR_7->dev, VAR_6->dma))
  goto dma_error;

 for (VAR_11 = 0; VAR_11 < FUNC_8(VAR_5)->nr_frags; VAR_11++) {
  const skb_frag_t *VAR_12;

  VAR_9++;
  VAR_10++;
  if (VAR_10 == VAR_4->count)
   VAR_10 = 0;

  VAR_12 = &FUNC_8(VAR_5)->frags[VAR_11];
  VAR_8 = FUNC_6(VAR_12);

  VAR_6 = &VAR_4->buffer_info[VAR_10];
  FUNC_0(VAR_8 >= VAR_1);
  VAR_6->length = VAR_8;
  VAR_6->time_stamp = VAR_2;
  VAR_6->mapped_as_page = 1;
  VAR_6->dma = FUNC_5(&VAR_7->dev, VAR_12, 0, VAR_8,
          VAR_0);
  if (FUNC_3(&VAR_7->dev, VAR_6->dma))
   goto dma_error;
 }

 VAR_4->buffer_info[VAR_10].skb = VAR_5;

 return ++VAR_9;

dma_error:
 FUNC_1(&VAR_7->dev, "TX DMA map failed\n");


 VAR_6->dma = 0;
 VAR_6->time_stamp = 0;
 VAR_6->length = 0;
 VAR_6->mapped_as_page = 0;
 if (VAR_9)
  VAR_9--;


 while (VAR_9--) {
  if (VAR_10 == 0)
   VAR_10 += VAR_4->count;
  VAR_10--;
  VAR_6 = &VAR_4->buffer_info[VAR_10];
  FUNC_4(VAR_3, VAR_6);
 }

 return 0;
}
