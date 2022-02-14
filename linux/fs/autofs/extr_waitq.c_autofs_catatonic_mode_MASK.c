
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * name; } ;
struct autofs_wait_queue {int queue; int wait_ctr; TYPE_1__ name; int status; struct autofs_wait_queue* next; } ;
struct autofs_sb_info {int flags; int pipefd; int wq_mutex; int * pipe; struct autofs_wait_queue* queues; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct autofs_sb_info *VAR_2)
{
 struct autofs_wait_queue *VAR_3, *VAR_4;

 FUNC_2(&VAR_2->wq_mutex);
 if (VAR_2->flags & VAR_0) {
  FUNC_3(&VAR_2->wq_mutex);
  return;
 }

 FUNC_4("entering catatonic mode\n");

 VAR_2->flags |= VAR_0;
 VAR_3 = VAR_2->queues;
 VAR_2->queues = ((void*)0);
 while (VAR_3) {
  VAR_4 = VAR_3->next;
  VAR_3->status = -VAR_1;
  FUNC_1(VAR_3->name.name);
  VAR_3->name.name = ((void*)0);
  VAR_3->wait_ctr--;
  FUNC_5(&VAR_3->queue);
  VAR_3 = VAR_4;
 }
 FUNC_0(VAR_2->pipe);
 VAR_2->pipe = ((void*)0);
 VAR_2->pipefd = -1;
 FUNC_3(&VAR_2->wq_mutex);
}
