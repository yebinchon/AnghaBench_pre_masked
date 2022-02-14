
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct autofs_wait_queue* name; } ;
struct autofs_wait_queue {scalar_t__ wait_queue_token; int status; int wait_ctr; int queue; TYPE_1__ name; struct autofs_wait_queue* next; } ;
struct autofs_sb_info {int wq_mutex; struct autofs_wait_queue* queues; } ;
typedef scalar_t__ autofs_wqt_t ;


 int VAR_0 ;
 int FUNC_0 (struct autofs_wait_queue*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct autofs_sb_info *VAR_1,
   autofs_wqt_t VAR_2, int VAR_3)
{
 struct autofs_wait_queue *VAR_4, **VAR_5;

 FUNC_1(&VAR_1->wq_mutex);
 for (VAR_5 = &VAR_1->queues; (VAR_4 = *VAR_5) != ((void*)0); VAR_5 = &VAR_4->next) {
  if (VAR_4->wait_queue_token == VAR_2)
   break;
 }

 if (!VAR_4) {
  FUNC_2(&VAR_1->wq_mutex);
  return -VAR_0;
 }

 *VAR_5 = VAR_4->next;
 FUNC_0(VAR_4->name.name);
 VAR_4->name.name = ((void*)0);
 VAR_4->status = VAR_3;
 FUNC_3(&VAR_4->queue);
 if (!--VAR_4->wait_ctr)
  FUNC_0(VAR_4);
 FUNC_2(&VAR_1->wq_mutex);

 return 0;
}
