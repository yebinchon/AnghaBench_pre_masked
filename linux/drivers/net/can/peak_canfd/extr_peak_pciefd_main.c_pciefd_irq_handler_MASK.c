
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pciefd_rx_dma {int msg; int irq_status; } ;
struct TYPE_4__ {int * echo_skb; } ;
struct TYPE_5__ {size_t echo_idx; int echo_lock; int ndev; TYPE_1__ can; } ;
struct pciefd_can {scalar_t__ irq_tag; TYPE_2__ ucan; int tx_lock; int tx_pages_free; int irq_status; TYPE_3__* board; struct pciefd_rx_dma* rx_dma_vaddr; } ;
typedef int irqreturn_t ;
struct TYPE_6__ {int pci_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct pciefd_can*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (TYPE_3__*,int ) ;
 int FUNC_8 (TYPE_2__*,int ,int ) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_11(int VAR_3, void *VAR_4)
{
 struct pciefd_can *VAR_5 = VAR_4;
 struct pciefd_rx_dma *VAR_6 = VAR_5->rx_dma_vaddr;


 if (!FUNC_2(VAR_5->board->pci_dev))
  (void)FUNC_7(VAR_5->board, VAR_2);


 VAR_5->irq_status = FUNC_0(VAR_6->irq_status);


 if (FUNC_6(VAR_5->irq_status) != VAR_5->irq_tag)
  return VAR_1;


 FUNC_8(&VAR_5->ucan,
        VAR_6->msg,
        FUNC_5(VAR_5->irq_status));


 if (FUNC_4(VAR_5->irq_status)) {
  unsigned long VAR_7;

  FUNC_9(&VAR_5->tx_lock, VAR_7);
  VAR_5->tx_pages_free++;
  FUNC_10(&VAR_5->tx_lock, VAR_7);


  FUNC_9(&VAR_5->ucan.echo_lock, VAR_7);
  if (!VAR_5->ucan.can.echo_skb[VAR_5->ucan.echo_idx])
   FUNC_1(VAR_5->ucan.ndev);

  FUNC_10(&VAR_5->ucan.echo_lock, VAR_7);
 }


 FUNC_3(VAR_5);

 return VAR_0;
}
