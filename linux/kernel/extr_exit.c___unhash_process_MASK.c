
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int thread_node; int thread_group; int sibling; int tasks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct task_struct*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_4(struct task_struct *VAR_6, bool VAR_7)
{
 VAR_4--;
 FUNC_1(VAR_6, VAR_1);
 if (VAR_7) {
  FUNC_1(VAR_6, VAR_3);
  FUNC_1(VAR_6, VAR_0);
  FUNC_1(VAR_6, VAR_2);

  FUNC_3(&VAR_6->tasks);
  FUNC_2(&VAR_6->sibling);
  FUNC_0(VAR_5);
 }
 FUNC_3(&VAR_6->thread_group);
 FUNC_3(&VAR_6->thread_node);
}
