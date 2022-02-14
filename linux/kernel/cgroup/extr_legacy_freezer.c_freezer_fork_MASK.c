
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct freezer {int state; } ;


 int VAR_0 ;
 int FUNC_0 (struct task_struct*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (struct task_struct*,int ) ;
 struct freezer* FUNC_6 (struct task_struct*) ;

__attribute__((used)) static void FUNC_7(struct task_struct *VAR_3)
{
 struct freezer *VAR_4;
 if (FUNC_5(VAR_3, VAR_1))
  return;

 FUNC_1(&VAR_2);
 FUNC_3();

 VAR_4 = FUNC_6(VAR_3);
 if (VAR_4->state & VAR_0)
  FUNC_0(VAR_3);

 FUNC_4();
 FUNC_2(&VAR_2);
}
