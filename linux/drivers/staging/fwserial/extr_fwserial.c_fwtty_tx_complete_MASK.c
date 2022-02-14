
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int len; } ;
struct fwtty_transaction {TYPE_3__ dma_pended; struct fwtty_port* port; } ;
struct TYPE_5__ {int dropped; } ;
struct TYPE_4__ {int tx; } ;
struct fwtty_port {int port; TYPE_2__ stats; int lock; int tx_fifo; TYPE_1__ icount; } ;
struct fw_card {int dummy; } ;



 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_3__*) ;
 int FUNC_2 (struct fwtty_port*,char*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct fw_card *VAR_1, int VAR_2,
         void *VAR_3, size_t VAR_4,
         struct fwtty_transaction *VAR_5)
{
 struct fwtty_port *VAR_6 = VAR_5->port;
 int VAR_7;

 FUNC_2(VAR_6, "rcode: %d\n", VAR_2);

 switch (VAR_2) {
 case 128:
  FUNC_3(&VAR_6->lock);
  FUNC_1(&VAR_6->tx_fifo, &VAR_5->dma_pended);
  VAR_7 = FUNC_0(&VAR_6->tx_fifo);
  FUNC_4(&VAR_6->lock);

  VAR_6->icount.tx += VAR_5->dma_pended.len;
  break;

 default:

  FUNC_3(&VAR_6->lock);
  FUNC_1(&VAR_6->tx_fifo, &VAR_5->dma_pended);
  VAR_7 = FUNC_0(&VAR_6->tx_fifo);
  FUNC_4(&VAR_6->lock);

  VAR_6->stats.dropped += VAR_5->dma_pended.len;
 }

 if (VAR_7 < VAR_0)
  FUNC_5(&VAR_6->port);
}
