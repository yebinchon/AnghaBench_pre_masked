
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tty_struct {int hw_stopped; int stopped; } ;
struct TYPE_4__ {int len; int data; } ;
struct fwtty_transaction {TYPE_2__ dma_pended; } ;
struct TYPE_3__ {int sent; int txns; int fifo_errs; int tx_stall; } ;
struct fwtty_port {int wait_tx; int flags; int lock; int tx_fifo; int drain; TYPE_1__ stats; int peer; int port; } ;
struct fwtty_peer {int fifo_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_2__*) ;
 int FUNC_4 (struct fwtty_port*,char*,int ,int) ;
 int FUNC_5 (struct fwtty_port*,char*,int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct fwtty_peer*,struct fwtty_transaction*,int ,int ,int ,int ,int ,struct fwtty_port*) ;
 int VAR_13 ;
 int VAR_14 ;
 struct fwtty_transaction* FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,struct fwtty_transaction*) ;
 struct fwtty_peer* FUNC_10 (int ) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (int ,int *) ;
 int FUNC_17 (int ,int *) ;
 int FUNC_18 (struct tty_struct*) ;
 struct tty_struct* FUNC_19 (int *) ;
 int FUNC_20 (struct tty_struct*) ;
 int FUNC_21 (int *) ;

__attribute__((used)) static int FUNC_22(struct fwtty_port *VAR_15, bool VAR_16)
{
 struct fwtty_peer *VAR_17;
 struct fwtty_transaction *VAR_18;
 struct tty_struct *VAR_19;
 int VAR_20, VAR_21;

 VAR_19 = FUNC_19(&VAR_15->port);
 if (!VAR_19)
  return -VAR_4;

 FUNC_11();
 VAR_17 = FUNC_10(VAR_15->peer);
 if (!VAR_17) {
  VAR_20 = -VAR_2;
  goto out;
 }

 if (FUNC_16(VAR_8, &VAR_15->flags)) {
  VAR_20 = -VAR_1;
  goto out;
 }


 VAR_20 = -VAR_0;
 while (!VAR_19->stopped && !VAR_19->hw_stopped &&
        !FUNC_17(VAR_9, &VAR_15->flags)) {
  VAR_18 = FUNC_8(VAR_14, VAR_6);
  if (!VAR_18) {
   VAR_20 = -VAR_5;
   break;
  }

  FUNC_14(&VAR_15->lock);
  VAR_20 = FUNC_3(&VAR_15->tx_fifo, &VAR_18->dma_pended);
  FUNC_15(&VAR_15->lock);

  FUNC_4(VAR_15, "out: %u rem: %d\n", VAR_18->dma_pended.len, VAR_20);

  if (VAR_20 < 0) {
   FUNC_9(VAR_14, VAR_18);
   if (VAR_20 == -VAR_0) {
    ++VAR_15->stats.tx_stall;
   } else if (VAR_20 == -VAR_3) {
    FUNC_6(VAR_15->stats.txns, 0);
   } else {
    ++VAR_15->stats.fifo_errs;
    FUNC_5(VAR_15, "fifo err: %d\n",
            VAR_20);
   }
   break;
  }

  FUNC_6(VAR_15->stats.txns, VAR_18->dma_pended.len);

  FUNC_7(VAR_17, VAR_18, VAR_10,
         VAR_17->fifo_addr, VAR_18->dma_pended.data,
         VAR_18->dma_pended.len, VAR_13,
         VAR_15);
  ++VAR_15->stats.sent;





  if (VAR_20 == 0 || (!VAR_16 && VAR_20 < VAR_12))
   break;
 }

 if (VAR_20 >= 0 || VAR_20 == -VAR_0 || VAR_20 == -VAR_5 || VAR_20 == -VAR_3) {
  FUNC_14(&VAR_15->lock);
  VAR_21 = FUNC_2(&VAR_15->tx_fifo);
  if (VAR_21) {
   unsigned long VAR_22 = (VAR_20 == -VAR_5) ? VAR_7 : 1;

   FUNC_13(&VAR_15->drain, VAR_22);
  }
  VAR_21 = FUNC_1(&VAR_15->tx_fifo);
  FUNC_15(&VAR_15->lock);


  if (VAR_16 && VAR_21 < VAR_11)
   FUNC_20(VAR_19);
 }

 FUNC_0(VAR_8, &VAR_15->flags);
 FUNC_21(&VAR_15->wait_tx);

out:
 FUNC_12();
 FUNC_18(VAR_19);
 return VAR_20;
}
