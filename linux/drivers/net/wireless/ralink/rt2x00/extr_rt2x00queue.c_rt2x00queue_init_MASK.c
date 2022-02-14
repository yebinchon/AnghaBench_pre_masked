
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rt2x00_dev {TYPE_1__* ops; } ;
struct data_queue {int qid; int aifs; int cw_min; int cw_max; int limit; int threshold; scalar_t__ txop; struct rt2x00_dev* rt2x00dev; int index_lock; int tx_lock; int status_lock; } ;
typedef enum data_queue_qid { ____Placeholder_data_queue_qid } data_queue_qid ;
struct TYPE_2__ {int (* queue_init ) (struct data_queue*) ;} ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct data_queue*) ;

__attribute__((used)) static void FUNC_4(struct rt2x00_dev *VAR_0,
        struct data_queue *VAR_1, enum data_queue_qid VAR_2)
{
 FUNC_1(&VAR_1->status_lock);
 FUNC_2(&VAR_1->tx_lock);
 FUNC_2(&VAR_1->index_lock);

 VAR_1->rt2x00dev = VAR_0;
 VAR_1->qid = VAR_2;
 VAR_1->txop = 0;
 VAR_1->aifs = 2;
 VAR_1->cw_min = 5;
 VAR_1->cw_max = 10;

 VAR_0->ops->queue_init(VAR_1);

 VAR_1->threshold = FUNC_0(VAR_1->limit, 10);
}
