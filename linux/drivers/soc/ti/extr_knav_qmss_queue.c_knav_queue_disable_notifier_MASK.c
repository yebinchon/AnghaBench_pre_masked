
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct knav_queue_inst {int num_notifiers; } ;
struct knav_queue {int notifier_enabled; struct knav_queue_inst* inst; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct knav_queue_inst*,int) ;

__attribute__((used)) static int FUNC_2(struct knav_queue *VAR_0)
{
 struct knav_queue_inst *VAR_1 = VAR_0->inst;
 bool VAR_2;

 VAR_2 = (FUNC_0(&VAR_0->notifier_enabled) == 0);
 if (!VAR_2)
  return 0;

 VAR_2 = (FUNC_0(&VAR_1->num_notifiers) == 0);
 if (VAR_2)
  FUNC_1(VAR_1, 0);

 return 0;
}
