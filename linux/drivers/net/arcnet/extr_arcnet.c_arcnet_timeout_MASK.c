
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tx_errors; int tx_aborted_errors; } ;
struct net_device {TYPE_1__ stats; } ;
struct TYPE_4__ {int (* status ) (struct net_device*) ;int (* intmask ) (struct net_device*,int) ;int (* command ) (struct net_device*,int) ;} ;
struct arcnet_local {int timed_out; int cur_tx; int intmask; scalar_t__ last_timeout; int lasttrans_dest; int lock; TYPE_2__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,struct net_device*,char*,char*,int,int,int ) ;
 scalar_t__ VAR_5 ;
 struct arcnet_local* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*,int) ;
 int FUNC_7 (struct net_device*,int) ;
 int FUNC_8 (struct net_device*,int) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__) ;

void FUNC_10(struct net_device *VAR_6)
{
 unsigned long VAR_7;
 struct arcnet_local *VAR_8 = FUNC_1(VAR_6);
 int VAR_9 = VAR_8->hw.status(VAR_6);
 char *VAR_10;

 FUNC_3(&VAR_8->lock, VAR_7);
 if (VAR_9 & VAR_4) {
  VAR_10 = " - missed IRQ?";
 } else {
  VAR_10 = "";
  VAR_6->stats.tx_aborted_errors++;
  VAR_8->timed_out = 1;
  VAR_8->hw.command(VAR_6, VAR_3 | (VAR_8->cur_tx << 3));
 }
 VAR_6->stats.tx_errors++;


 VAR_8->hw.intmask(VAR_6, 0);
 VAR_8->intmask |= VAR_4 | VAR_1;
 VAR_8->hw.intmask(VAR_6, VAR_8->intmask);

 FUNC_4(&VAR_8->lock, VAR_7);

 if (FUNC_9(VAR_5, VAR_8->last_timeout + 10 * VAR_2)) {
  FUNC_0(VAR_0, VAR_6, "tx timed out%s (status=%Xh, intmask=%Xh, dest=%02Xh)\n",
      VAR_10, VAR_9, VAR_8->intmask, VAR_8->lasttrans_dest);
  VAR_8->last_timeout = VAR_5;
 }

 if (VAR_8->cur_tx == -1)
  FUNC_2(VAR_6);
}
