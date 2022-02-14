
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {scalar_t__ actual_length; scalar_t__ status; scalar_t__ context; } ;
struct rt2x00_dev {int rxdone_work; int workqueue; } ;
struct queue_entry {int flags; TYPE_1__* queue; } ;
struct TYPE_2__ {scalar_t__ desc_size; struct rt2x00_dev* rt2x00dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct queue_entry*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct urb *VAR_2)
{
 struct queue_entry *VAR_3 = (struct queue_entry *)VAR_2->context;
 struct rt2x00_dev *VAR_4 = VAR_3->queue->rt2x00dev;

 if (!FUNC_3(VAR_1, &VAR_3->flags))
  return;






 if (VAR_2->actual_length < VAR_3->queue->desc_size || VAR_2->status)
  FUNC_2(VAR_0, &VAR_3->flags);




 FUNC_1(VAR_3);




 FUNC_0(VAR_4->workqueue, &VAR_4->rxdone_work);
}
