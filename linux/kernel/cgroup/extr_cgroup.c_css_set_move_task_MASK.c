
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int flags; int cg_list; } ;
struct css_set {int tasks; int mg_tasks; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct task_struct*,struct css_set*) ;
 int VAR_1 ;
 int FUNC_2 (struct css_set*) ;
 int FUNC_3 (struct css_set*,struct task_struct*) ;
 int FUNC_4 (struct css_set*,int) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct task_struct *VAR_2,
         struct css_set *VAR_3, struct css_set *VAR_4,
         bool VAR_5)
{
 FUNC_8(&VAR_1);

 if (VAR_4 && !FUNC_2(VAR_4))
  FUNC_4(VAR_4, 1);

 if (VAR_3) {
  FUNC_0(FUNC_7(&VAR_2->cg_list));

  FUNC_3(VAR_3, VAR_2);
  FUNC_6(&VAR_2->cg_list);
  if (!FUNC_2(VAR_3))
   FUNC_4(VAR_3, 0);
 } else {
  FUNC_0(!FUNC_7(&VAR_2->cg_list));
 }

 if (VAR_4) {






  FUNC_0(VAR_2->flags & VAR_0);

  FUNC_1(VAR_2, VAR_4);
  FUNC_5(&VAR_2->cg_list, VAR_5 ? &VAR_4->mg_tasks :
            &VAR_4->tasks);
 }
}
