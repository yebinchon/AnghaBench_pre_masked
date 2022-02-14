
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_hwfn {int slowpath_task; int slowpath_wq; int slowpath_task_flags; int cdev; } ;


 int FUNC_0 (int ,int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

int FUNC_5(struct qed_hwfn *VAR_2)
{
 FUNC_0(VAR_2->cdev, VAR_0,
     "Scheduling slowpath task [Flag: %d]\n",
     VAR_1);
 FUNC_4();
 FUNC_2(VAR_1, &VAR_2->slowpath_task_flags);
 FUNC_3();
 FUNC_1(VAR_2->slowpath_wq, &VAR_2->slowpath_task, 0);

 return 0;
}
