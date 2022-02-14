
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct skb_shared_info {int dummy; } ;
struct sge_params {int* freelQ_size; } ;
struct TYPE_4__ {int genbit; int size; void* entries; int dma_addr; scalar_t__ credits; } ;
struct sge {size_t jumbo_fl; TYPE_2__ respQ; struct freelQ* freelQ; scalar_t__ rx_pkt_pad; TYPE_1__* adapter; } ;
struct respQ_e {int dummy; } ;
struct pci_dev {int dummy; } ;
struct freelQ_e {int dummy; } ;
struct freelQ_ce {int dummy; } ;
struct freelQ {int genbit; int size; unsigned int dma_offset; unsigned int rx_buffer_size; int recycleq_idx; int centries; void* entries; int dma_addr; } ;
struct cpl_rx_data {int dummy; } ;
struct TYPE_3__ {struct pci_dev* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct sge*) ;
 int FUNC_2 (unsigned int,int ) ;
 void* FUNC_3 (struct pci_dev*,unsigned int,int *) ;

__attribute__((used)) static int FUNC_4(struct sge *VAR_6, struct sge_params *VAR_7)
{
 struct pci_dev *VAR_8 = VAR_6->adapter->pdev;
 unsigned int VAR_9, VAR_10;

 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
  struct freelQ *VAR_11 = &VAR_6->freelQ[VAR_10];

  VAR_11->genbit = 1;
  VAR_11->size = VAR_7->freelQ_size[VAR_10];
  VAR_11->dma_offset = VAR_6->rx_pkt_pad ? 0 : VAR_2;
  VAR_9 = sizeof(struct freelQ_e) * VAR_11->size;
  VAR_11->entries = FUNC_3(VAR_8, VAR_9, &VAR_11->dma_addr);
  if (!VAR_11->entries)
   goto err_no_mem;

  VAR_9 = sizeof(struct freelQ_ce) * VAR_11->size;
  VAR_11->centries = FUNC_2(VAR_9, VAR_1);
  if (!VAR_11->centries)
   goto err_no_mem;
 }
 VAR_6->freelQ[!VAR_6->jumbo_fl].rx_buffer_size = VAR_5 +
  sizeof(struct cpl_rx_data) +
  VAR_6->freelQ[!VAR_6->jumbo_fl].dma_offset;

 VAR_9 = (16 * 1024) - FUNC_0(sizeof(struct skb_shared_info));

 VAR_6->freelQ[VAR_6->jumbo_fl].rx_buffer_size = VAR_9;





 VAR_6->freelQ[!VAR_6->jumbo_fl].recycleq_idx = 0;
 VAR_6->freelQ[VAR_6->jumbo_fl].recycleq_idx = 1;

 VAR_6->respQ.genbit = 1;
 VAR_6->respQ.size = VAR_4;
 VAR_6->respQ.credits = 0;
 VAR_9 = sizeof(struct respQ_e) * VAR_6->respQ.size;
 VAR_6->respQ.entries =
  FUNC_3(VAR_8, VAR_9, &VAR_6->respQ.dma_addr);
 if (!VAR_6->respQ.entries)
  goto err_no_mem;
 return 0;

err_no_mem:
 FUNC_1(VAR_6);
 return -VAR_0;
}
