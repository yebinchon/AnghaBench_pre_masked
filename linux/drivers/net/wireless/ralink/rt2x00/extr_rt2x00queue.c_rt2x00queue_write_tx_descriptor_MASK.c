
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct txentry_desc {int dummy; } ;
struct queue_entry {struct data_queue* queue; } ;
struct data_queue {TYPE_3__* rt2x00dev; } ;
struct TYPE_6__ {TYPE_2__* ops; } ;
struct TYPE_5__ {TYPE_1__* lib; } ;
struct TYPE_4__ {int (* write_tx_desc ) (struct queue_entry*,struct txentry_desc*) ;} ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ,struct queue_entry*) ;
 int FUNC_1 (struct queue_entry*,struct txentry_desc*) ;

__attribute__((used)) static void FUNC_2(struct queue_entry *VAR_1,
         struct txentry_desc *VAR_2)
{
 struct data_queue *VAR_3 = VAR_1->queue;

 VAR_3->rt2x00dev->ops->lib->write_tx_desc(VAR_1, VAR_2);





 FUNC_0(VAR_3->rt2x00dev, VAR_0, VAR_1);
}
