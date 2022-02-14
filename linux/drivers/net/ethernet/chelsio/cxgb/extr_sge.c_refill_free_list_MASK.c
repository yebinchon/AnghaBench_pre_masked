
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct sk_buff {int data; } ;
struct sge {unsigned int rx_pkt_pad; TYPE_1__* adapter; } ;
struct pci_dev {int dummy; } ;
struct freelQ_e {int addr_hi; int len_gen; int gen2; scalar_t__ addr_lo; } ;
struct freelQ_ce {struct sk_buff* skb; } ;
struct freelQ {size_t pidx; unsigned int rx_buffer_size; unsigned int dma_offset; size_t credits; size_t size; int genbit; struct freelQ_e* entries; struct freelQ_ce* centries; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_2__ {struct pci_dev* pdev; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned int) ;
 struct sk_buff* FUNC_3 (unsigned int) ;
 int VAR_1 ;
 int FUNC_4 (struct freelQ_ce*,int ,scalar_t__) ;
 int FUNC_5 (struct freelQ_ce*,unsigned int,unsigned int) ;
 scalar_t__ FUNC_6 (struct pci_dev*,int ,unsigned int,int ) ;
 int FUNC_7 (struct sk_buff*,unsigned int) ;
 int FUNC_8 () ;

__attribute__((used)) static void FUNC_9(struct sge *VAR_2, struct freelQ *VAR_3)
{
 struct pci_dev *VAR_4 = VAR_2->adapter->pdev;
 struct freelQ_ce *VAR_5 = &VAR_3->centries[VAR_3->pidx];
 struct freelQ_e *VAR_6 = &VAR_3->entries[VAR_3->pidx];
 unsigned int VAR_7 = VAR_3->rx_buffer_size - VAR_3->dma_offset;

 while (VAR_3->credits < VAR_3->size) {
  struct sk_buff *VAR_8;
  dma_addr_t VAR_9;

  VAR_8 = FUNC_3(VAR_3->rx_buffer_size);
  if (!VAR_8)
   break;

  FUNC_7(VAR_8, VAR_3->dma_offset);
  VAR_9 = FUNC_6(VAR_4, VAR_8->data, VAR_7,
      VAR_0);
  FUNC_7(VAR_8, VAR_2->rx_pkt_pad);

  VAR_5->skb = VAR_8;
  FUNC_4(VAR_5, VAR_1, VAR_9);
  FUNC_5(VAR_5, VAR_7, VAR_7);
  VAR_6->addr_lo = (u32)VAR_9;
  VAR_6->addr_hi = (u64)VAR_9 >> 32;
  VAR_6->len_gen = FUNC_2(VAR_7) | FUNC_0(VAR_3->genbit);
  FUNC_8();
  VAR_6->gen2 = FUNC_1(VAR_3->genbit);

  VAR_6++;
  VAR_5++;
  if (++VAR_3->pidx == VAR_3->size) {
   VAR_3->pidx = 0;
   VAR_3->genbit ^= 1;
   VAR_5 = VAR_3->centries;
   VAR_6 = VAR_3->entries;
  }
  VAR_3->credits++;
 }
}
