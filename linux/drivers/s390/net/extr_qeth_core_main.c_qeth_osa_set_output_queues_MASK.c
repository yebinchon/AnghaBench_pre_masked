
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned int no_out_queues; int default_out_queue; int state; } ;
struct qeth_card {TYPE_2__ qdio; TYPE_1__* gdev; TYPE_3__* dev; } ;
struct TYPE_6__ {int num_tx_queues; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (TYPE_3__*,unsigned int) ;
 int FUNC_3 (struct qeth_card*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct qeth_card *VAR_2, bool VAR_3)
{
 unsigned int VAR_4 = VAR_3 ? 1 : VAR_2->dev->num_tx_queues;
 int VAR_5;

 FUNC_4();
 VAR_5 = FUNC_2(VAR_2->dev, VAR_4);
 FUNC_5();

 if (VAR_5)
  return VAR_5;

 if (VAR_2->qdio.no_out_queues == VAR_4)
  return 0;

 if (FUNC_0(&VAR_2->qdio.state) != VAR_1)
  FUNC_3(VAR_2);

 if (VAR_4 == 1)
  FUNC_1(&VAR_2->gdev->dev, "Priority Queueing not supported\n");

 VAR_2->qdio.default_out_queue = VAR_3 ? 0 : VAR_0;
 VAR_2->qdio.no_out_queues = VAR_4;
 return 0;
}
