
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_hwfn {int iov_task; int iov_wq; int iov_task_flags; } ;
typedef enum qed_iov_wq_flag { ____Placeholder_qed_iov_wq_flag } qed_iov_wq_flag ;


 int FUNC_0 (struct qed_hwfn*,int ,char*,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

void FUNC_5(struct qed_hwfn *VAR_1, enum qed_iov_wq_flag VAR_2)
{
 FUNC_4();
 FUNC_2(VAR_2, &VAR_1->iov_task_flags);
 FUNC_3();
 FUNC_0(VAR_1, VAR_0, "Scheduling iov task [Flag: %d]\n", VAR_2);
 FUNC_1(VAR_1->iov_wq, &VAR_1->iov_task, 0);
}
