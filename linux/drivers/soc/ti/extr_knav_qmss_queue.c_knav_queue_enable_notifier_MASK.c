
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct knav_queue_inst {int num_notifiers; } ;
struct knav_queue {int notifier_enabled; int notifier_fn; struct knav_queue_inst* inst; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct knav_queue_inst*,int) ;

__attribute__((used)) static int FUNC_3(struct knav_queue *VAR_1)
{
 struct knav_queue_inst *VAR_2 = VAR_1->inst;
 bool VAR_3;

 if (FUNC_0(!VAR_1->notifier_fn))
  return -VAR_0;


 VAR_3 = (FUNC_1(&VAR_1->notifier_enabled) == 1);
 if (!VAR_3)
  return 0;


 VAR_3 = (FUNC_1(&VAR_2->num_notifiers) == 1);
 if (VAR_3)
  FUNC_2(VAR_2, 1);

 return 0;
}
