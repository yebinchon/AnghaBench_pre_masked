
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct rt2x00_dev {TYPE_2__* ops; } ;
struct queue_entry {TYPE_3__* queue; scalar_t__ flags; int * skb; } ;
struct TYPE_7__ {int tx_lock; } ;
struct TYPE_6__ {TYPE_1__* lib; } ;
struct TYPE_5__ {int (* clear_entry ) (struct queue_entry*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct queue_entry*,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct queue_entry*) ;

__attribute__((used)) static void FUNC_6(struct rt2x00_dev *VAR_1,
      struct queue_entry *VAR_2)
{



 VAR_2->skb = ((void*)0);
 VAR_2->flags = 0;

 VAR_1->ops->lib->clear_entry(VAR_2);

 FUNC_0(VAR_2, VAR_0);
 FUNC_3(&VAR_2->queue->tx_lock);
 if (!FUNC_1(VAR_2->queue))
  FUNC_2(VAR_2->queue);
 FUNC_4(&VAR_2->queue->tx_lock);
}
