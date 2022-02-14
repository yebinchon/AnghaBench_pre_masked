
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
struct cpuset_migrate_mm_work {int work; int to; int from; struct mm_struct* mm; } ;
typedef int nodemask_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct cpuset_migrate_mm_work* FUNC_1 (int,int ) ;
 int FUNC_2 (struct mm_struct*) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct mm_struct *VAR_3, const nodemask_t *VAR_4,
       const nodemask_t *VAR_5)
{
 struct cpuset_migrate_mm_work *VAR_6;

 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_0);
 if (VAR_6) {
  VAR_6->mm = VAR_3;
  VAR_6->from = *VAR_4;
  VAR_6->to = *VAR_5;
  FUNC_0(&VAR_6->work, VAR_1);
  FUNC_3(VAR_2, &VAR_6->work);
 } else {
  FUNC_2(VAR_3);
 }
}
