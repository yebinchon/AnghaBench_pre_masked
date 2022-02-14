
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int tx_packets; } ;
struct net_device {TYPE_2__ stats; } ;
struct TYPE_3__ {int (* command ) (struct net_device*,int) ;int (* status ) (struct net_device*) ;} ;
struct arcnet_local {int intmask; int next_tx; int cur_tx; scalar_t__ excnak_pending; scalar_t__ lastload_dest; scalar_t__ lasttrans_dest; TYPE_1__ hw; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,struct net_device*,char*,int ,int,int,int) ;
 int FUNC_2 (struct net_device*,int,char*,int ) ;
 struct arcnet_local* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*,int) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_5)
{
 struct arcnet_local *VAR_6 = FUNC_3(VAR_5);

 FUNC_1(VAR_0, VAR_5, "go_tx: status=%Xh, intmask=%Xh, next_tx=%d, cur_tx=%d\n",
     VAR_6->hw.status(VAR_5), VAR_6->intmask, VAR_6->next_tx, VAR_6->cur_tx);

 if (VAR_6->cur_tx != -1 || VAR_6->next_tx == -1)
  return 0;

 if (FUNC_0(VAR_1))
  FUNC_2(VAR_5, VAR_6->next_tx, "go_tx", 0);

 VAR_6->cur_tx = VAR_6->next_tx;
 VAR_6->next_tx = -1;


 VAR_6->hw.command(VAR_5, VAR_4 | (VAR_6->cur_tx << 3));

 VAR_5->stats.tx_packets++;
 VAR_6->lasttrans_dest = VAR_6->lastload_dest;
 VAR_6->lastload_dest = 0;
 VAR_6->excnak_pending = 0;
 VAR_6->intmask |= VAR_3 | VAR_2;

 return 1;
}
