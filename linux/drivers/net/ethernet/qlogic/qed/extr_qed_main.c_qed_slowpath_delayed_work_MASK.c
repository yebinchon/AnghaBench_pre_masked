
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_hwfn {int slowpath_task; int slowpath_wq; int slowpath_task_flags; int slowpath_wq_active; } ;
typedef enum qed_slowpath_wq_flag { ____Placeholder_qed_slowpath_wq_flag } qed_slowpath_wq_flag ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,unsigned long) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct qed_hwfn *VAR_1,
         enum qed_slowpath_wq_flag VAR_2,
         unsigned long VAR_3)
{
 if (!VAR_1->slowpath_wq_active)
  return -VAR_0;


 FUNC_3();
 FUNC_1(VAR_2, &VAR_1->slowpath_task_flags);
 FUNC_2();
 FUNC_0(VAR_1->slowpath_wq, &VAR_1->slowpath_task, VAR_3);

 return 0;
}
