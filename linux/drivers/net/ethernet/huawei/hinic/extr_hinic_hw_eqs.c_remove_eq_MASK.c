
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msix_entry {int vector; } ;
struct hinic_eq_work {int work; } ;
struct hinic_eq {scalar_t__ type; int ceq_tasklet; struct hinic_eq_work aeq_work; struct msix_entry msix_entry; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct hinic_eq*) ;
 int FUNC_2 (int ,struct hinic_eq*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct hinic_eq *VAR_2)
{
 struct msix_entry *VAR_3 = &VAR_2->msix_entry;

 FUNC_2(VAR_3->vector, VAR_2);

 if (VAR_2->type == VAR_0) {
  struct hinic_eq_work *VAR_4 = &VAR_2->aeq_work;

  FUNC_0(&VAR_4->work);
 } else if (VAR_2->type == VAR_1) {
  FUNC_3(&VAR_2->ceq_tasklet);
 }

 FUNC_1(VAR_2);
}
