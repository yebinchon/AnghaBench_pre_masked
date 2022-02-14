
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct knav_queue_inst {unsigned int id; TYPE_2__* qmgr; int desc_count; } ;
struct knav_queue {struct knav_queue_inst* inst; } ;
struct TYPE_4__ {unsigned int start_queue; TYPE_1__* reg_push; } ;
struct TYPE_3__ {int ptr_size_thresh; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(struct knav_queue *VAR_0)
{
 struct knav_queue_inst *VAR_1 = VAR_0->inst;
 unsigned VAR_2 = VAR_1->id - VAR_1->qmgr->start_queue;

 FUNC_0(&VAR_1->desc_count, 0);
 FUNC_1(0, &VAR_1->qmgr->reg_push[VAR_2].ptr_size_thresh);
 return 0;
}
