
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct knav_queue_inst {int desc_count; } ;
struct knav_queue {TYPE_1__* reg_peek; struct knav_queue_inst* inst; } ;
struct TYPE_2__ {int entry_count; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(void *VAR_0)
{
 struct knav_queue *VAR_1 = VAR_0;
 struct knav_queue_inst *VAR_2 = VAR_1->inst;

 return FUNC_1(&VAR_1->reg_peek[0].entry_count) +
  FUNC_0(&VAR_2->desc_count);
}
