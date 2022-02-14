
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sge_params {int* cmdQ_size; } ;
struct sge {TYPE_2__* adapter; struct cmdQ* cmdQ; } ;
struct pci_dev {int dummy; } ;
struct cmdQ_e {int dummy; } ;
struct cmdQ_ce {int dummy; } ;
struct cmdQ {int genbit; int sop; int size; int stop_thres; int centries; int entries; int dma_addr; int lock; scalar_t__ cleaned; scalar_t__ processed; scalar_t__ status; scalar_t__ in_use; } ;
struct TYPE_3__ {int nports; } ;
struct TYPE_4__ {TYPE_1__ params; struct pci_dev* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct sge*) ;
 int FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (struct pci_dev*,unsigned int,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct sge *VAR_4, struct sge_params *VAR_5)
{
 struct pci_dev *VAR_6 = VAR_4->adapter->pdev;
 unsigned int VAR_7, VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  struct cmdQ *VAR_9 = &VAR_4->cmdQ[VAR_8];

  VAR_9->genbit = 1;
  VAR_9->sop = 1;
  VAR_9->size = VAR_5->cmdQ_size[VAR_8];
  VAR_9->in_use = 0;
  VAR_9->status = 0;
  VAR_9->processed = VAR_9->cleaned = 0;
  VAR_9->stop_thres = 0;
  FUNC_3(&VAR_9->lock);
  VAR_7 = sizeof(struct cmdQ_e) * VAR_9->size;
  VAR_9->entries = FUNC_2(VAR_6, VAR_7, &VAR_9->dma_addr);
  if (!VAR_9->entries)
   goto err_no_mem;

  VAR_7 = sizeof(struct cmdQ_ce) * VAR_9->size;
  VAR_9->centries = FUNC_1(VAR_7, VAR_1);
  if (!VAR_9->centries)
   goto err_no_mem;
 }
 VAR_4->cmdQ[0].stop_thres = VAR_4->adapter->params.nports *
  (VAR_2 + 1);
 return 0;

err_no_mem:
 FUNC_0(VAR_4);
 return -VAR_0;
}
