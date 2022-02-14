
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ rsp_cons; TYPE_1__* sring; } ;
struct netfront_queue {int rx_lock; int napi; TYPE_2__ rx; } ;
struct netfront_info {struct netfront_queue* queues; } ;
struct net_device {unsigned int real_num_tx_queues; } ;
struct TYPE_3__ {scalar_t__ rsp_event; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct netfront_info* FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct netfront_queue*) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_1)
{
 struct netfront_info *VAR_2 = FUNC_3(VAR_1);
 unsigned int VAR_3 = VAR_1->real_num_tx_queues;
 unsigned int VAR_4 = 0;
 struct netfront_queue *VAR_5 = ((void*)0);

 if (!VAR_2->queues)
  return -VAR_0;

 for (VAR_4 = 0; VAR_4 < VAR_3; ++VAR_4) {
  VAR_5 = &VAR_2->queues[VAR_4];
  FUNC_1(&VAR_5->napi);

  FUNC_6(&VAR_5->rx_lock);
  if (FUNC_4(VAR_1)) {
   FUNC_8(VAR_5);
   VAR_5->rx.sring->rsp_event = VAR_5->rx.rsp_cons + 1;
   if (FUNC_0(&VAR_5->rx))
    FUNC_2(&VAR_5->napi);
  }
  FUNC_7(&VAR_5->rx_lock);
 }

 FUNC_5(VAR_1);

 return 0;
}
