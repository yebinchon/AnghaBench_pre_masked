
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct upid {int nr; TYPE_1__* ns; } ;
struct task_struct {int dummy; } ;
struct pid {int level; struct upid* numbers; } ;
struct TYPE_2__ {int proc_mnt; } ;


 int FUNC_0 (int ,int ,int ) ;
 struct pid* FUNC_1 (struct task_struct*) ;
 struct pid* FUNC_2 (struct task_struct*) ;

void FUNC_3(struct task_struct *VAR_0)
{
 int VAR_1;
 struct pid *VAR_2, *VAR_3;
 struct upid *VAR_4;

 VAR_2 = FUNC_1(VAR_0);
 VAR_3 = FUNC_2(VAR_0);

 for (VAR_1 = 0; VAR_1 <= VAR_2->level; VAR_1++) {
  VAR_4 = &VAR_2->numbers[VAR_1];
  FUNC_0(VAR_4->ns->proc_mnt, VAR_4->nr,
     VAR_3->numbers[VAR_1].nr);
 }
}
