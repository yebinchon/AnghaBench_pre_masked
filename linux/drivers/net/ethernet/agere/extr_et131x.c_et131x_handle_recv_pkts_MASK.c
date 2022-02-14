
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct rx_ring {scalar_t__ num_ready_recv; int unfinished_receives; int recv_list; } ;
struct rfd {scalar_t__ len; } ;
struct et131x_adapter {TYPE_4__* regs; TYPE_2__* pdev; TYPE_5__* netdev; int packet_filter; struct rx_ring rx_ring; } ;
struct TYPE_6__ {int rx_packets; } ;
struct TYPE_10__ {TYPE_1__ stats; } ;
struct TYPE_8__ {int watchdog_timer; } ;
struct TYPE_9__ {TYPE_3__ global; } ;
struct TYPE_7__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (TYPE_5__*) ;
 struct rfd* FUNC_4 (struct et131x_adapter*) ;
 int FUNC_5 (int,int *) ;

__attribute__((used)) static int FUNC_6(struct et131x_adapter *VAR_4, int VAR_5)
{
 struct rfd *VAR_6 = ((void*)0);
 int VAR_7 = 0;
 int VAR_8 = VAR_5;
 bool VAR_9 = 1;
 struct rx_ring *VAR_10 = &VAR_4->rx_ring;

 if (VAR_5 > VAR_0)
  VAR_8 = VAR_0;


 while (VAR_7 < VAR_8) {
  if (FUNC_2(&VAR_10->recv_list)) {
   FUNC_0(VAR_10->num_ready_recv != 0);
   VAR_9 = 0;
   break;
  }

  VAR_6 = FUNC_4(VAR_4);

  if (VAR_6 == ((void*)0))
   break;






  if (!VAR_4->packet_filter ||
      !FUNC_3(VAR_4->netdev) ||
      VAR_6->len == 0)
   continue;

  VAR_4->netdev->stats.rx_packets++;

  if (VAR_10->num_ready_recv < VAR_3)
   FUNC_1(&VAR_4->pdev->dev, "RFD's are running out\n");

  VAR_7++;
 }

 if (VAR_7 == VAR_8 || !VAR_9) {
  VAR_10->unfinished_receives = 1;
  FUNC_5(VAR_2 * VAR_1,
         &VAR_4->regs->global.watchdog_timer);
 } else {

  VAR_10->unfinished_receives = 0;
 }

 return VAR_7;
}
