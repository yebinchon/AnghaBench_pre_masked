
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct net_device {int dev; } ;
struct macb_queue {int tx_ts_task; scalar_t__ tx_ts_tail; scalar_t__ tx_ts_head; } ;
struct TYPE_7__ {int max_adj; } ;
struct macb {unsigned int num_queues; TYPE_2__* pdev; struct macb_queue* queues; int tsu_clk_lock; int * ptp_clock; TYPE_3__ ptp_clock_info; TYPE_1__* ptp_info; int tsu_rate; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {int (* get_ptp_max_adj ) () ;int (* get_tsu_rate ) (struct macb*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,int ) ;
 TYPE_3__ VAR_1 ;
 int FUNC_4 (struct macb*) ;
 int FUNC_5 (struct macb*) ;
 int VAR_2 ;
 struct macb* FUNC_6 (struct net_device*) ;
 int FUNC_7 (char*,...) ;
 int * FUNC_8 (TYPE_3__*,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct macb*) ;
 int FUNC_11 () ;

void FUNC_12(struct net_device *VAR_3)
{
 struct macb *VAR_4 = FUNC_6(VAR_3);
 struct macb_queue *VAR_5;
 unsigned int VAR_6;

 VAR_4->ptp_clock_info = VAR_1;


 VAR_4->tsu_rate = VAR_4->ptp_info->get_tsu_rate(VAR_4);
 VAR_4->ptp_clock_info.max_adj = VAR_4->ptp_info->get_ptp_max_adj();
 FUNC_4(VAR_4);
 VAR_4->ptp_clock = FUNC_8(&VAR_4->ptp_clock_info, &VAR_3->dev);
 if (FUNC_1(VAR_4->ptp_clock)) {
  FUNC_7("ptp clock register failed: %ld\n",
   FUNC_2(VAR_4->ptp_clock));
  VAR_4->ptp_clock = ((void*)0);
  return;
 } else if (VAR_4->ptp_clock == ((void*)0)) {
  FUNC_7("ptp clock register failed\n");
  return;
 }

 FUNC_9(&VAR_4->tsu_clk_lock);
 for (VAR_6 = 0, VAR_5 = VAR_4->queues; VAR_6 < VAR_4->num_queues; ++VAR_6, ++VAR_5) {
  VAR_5->tx_ts_head = 0;
  VAR_5->tx_ts_tail = 0;
  FUNC_0(&VAR_5->tx_ts_task, VAR_2);
 }

 FUNC_5(VAR_4);

 FUNC_3(&VAR_4->pdev->dev, "%s ptp clock registered.\n",
   VAR_0);
}
