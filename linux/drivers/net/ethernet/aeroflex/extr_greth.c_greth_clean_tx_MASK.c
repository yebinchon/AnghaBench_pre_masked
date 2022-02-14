
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int tx_bytes; int tx_packets; int tx_fifo_errors; int tx_aborted_errors; int tx_errors; } ;
struct net_device {TYPE_2__ stats; } ;
struct greth_private {int tx_last; scalar_t__ tx_free; scalar_t__* tx_bufs_length; TYPE_1__* regs; struct greth_bd* tx_bd_base; } ;
struct greth_bd {int stat; } ;
struct TYPE_3__ {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 size_t FUNC_1 (size_t) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 struct greth_private* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_7)
{
 struct greth_private *VAR_8;
 struct greth_bd *VAR_9;
 u32 VAR_10;

 VAR_8 = FUNC_4(VAR_7);

 while (1) {
  VAR_9 = VAR_8->tx_bd_base + VAR_8->tx_last;
  FUNC_0(VAR_8->regs->status, VAR_1 | VAR_2);
  FUNC_3();
  VAR_10 = FUNC_2(&VAR_9->stat);

  if (FUNC_6(VAR_10 & VAR_0))
   break;

  if (VAR_8->tx_free == VAR_5)
   break;


  if (FUNC_6(VAR_10 & VAR_6)) {
   VAR_7->stats.tx_errors++;
   if (VAR_10 & VAR_3)
    VAR_7->stats.tx_aborted_errors++;
   if (VAR_10 & VAR_4)
    VAR_7->stats.tx_fifo_errors++;
  }
  VAR_7->stats.tx_packets++;
  VAR_7->stats.tx_bytes += VAR_8->tx_bufs_length[VAR_8->tx_last];
  VAR_8->tx_last = FUNC_1(VAR_8->tx_last);
  VAR_8->tx_free++;
 }

 if (VAR_8->tx_free > 0) {
  FUNC_5(VAR_7);
 }
}
