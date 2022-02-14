
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_hwfn {int slowpath_task_flags; int periodic_db_rec_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct qed_hwfn*,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int *) ;

void FUNC_2(struct qed_hwfn *VAR_3)
{

 VAR_3->periodic_db_rec_count = VAR_0;


 if (FUNC_1(VAR_2,
       &VAR_3->slowpath_task_flags))
  return;

 FUNC_0(VAR_3, VAR_2,
      VAR_1);
}
