
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wait_queue_head_t ;
struct wb_writeback_work {scalar_t__ auto_free; struct wb_completion* done; } ;
struct wb_completion {int cnt; int * waitq; } ;
struct bdi_writeback {int dummy; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct wb_writeback_work*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct bdi_writeback *VAR_0,
      struct wb_writeback_work *VAR_1)
{
 struct wb_completion *VAR_2 = VAR_1->done;

 if (VAR_1->auto_free)
  FUNC_1(VAR_1);
 if (VAR_2) {
  wait_queue_head_t *VAR_3 = VAR_2->waitq;


  if (FUNC_0(&VAR_2->cnt))
   FUNC_2(VAR_3);
 }
}
