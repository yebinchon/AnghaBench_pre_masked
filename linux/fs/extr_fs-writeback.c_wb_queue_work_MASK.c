
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wb_writeback_work {int list; TYPE_1__* done; } ;
struct bdi_writeback {int work_lock; int dwork; int work_list; int state; } ;
struct TYPE_2__ {int cnt; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (struct bdi_writeback*,struct wb_writeback_work*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 int FUNC_7 (struct bdi_writeback*,struct wb_writeback_work*) ;

__attribute__((used)) static void FUNC_8(struct bdi_writeback *VAR_2,
     struct wb_writeback_work *VAR_3)
{
 FUNC_7(VAR_2, VAR_3);

 if (VAR_3->done)
  FUNC_0(&VAR_3->done->cnt);

 FUNC_4(&VAR_2->work_lock);

 if (FUNC_6(VAR_0, &VAR_2->state)) {
  FUNC_2(&VAR_3->list, &VAR_2->work_list);
  FUNC_3(VAR_1, &VAR_2->dwork, 0);
 } else
  FUNC_1(VAR_2, VAR_3);

 FUNC_5(&VAR_2->work_lock);
}
