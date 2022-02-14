
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct queue_entry {int last_action; struct data_queue* queue; } ;
struct data_queue {scalar_t__* index; scalar_t__ limit; int index_lock; int count; int length; int rt2x00dev; } ;
typedef enum queue_index { ____Placeholder_queue_index } queue_index ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 scalar_t__ FUNC_3 (int) ;

void FUNC_4(struct queue_entry *VAR_4, enum queue_index VAR_5)
{
 struct data_queue *VAR_6 = VAR_4->queue;
 unsigned long VAR_7;

 if (FUNC_3(VAR_5 >= VAR_2)) {
  FUNC_0(VAR_6->rt2x00dev,
      "Index change on invalid index type (%d)\n", VAR_5);
  return;
 }

 FUNC_1(&VAR_6->index_lock, VAR_7);

 VAR_6->index[VAR_5]++;
 if (VAR_6->index[VAR_5] >= VAR_6->limit)
  VAR_6->index[VAR_5] = 0;

 VAR_4->last_action = VAR_3;

 if (VAR_5 == VAR_0) {
  VAR_6->length++;
 } else if (VAR_5 == VAR_1) {
  VAR_6->length--;
  VAR_6->count++;
 }

 FUNC_2(&VAR_6->index_lock, VAR_7);
}
