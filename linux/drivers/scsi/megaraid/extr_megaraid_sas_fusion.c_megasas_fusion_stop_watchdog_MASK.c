
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct workqueue_struct {int dummy; } ;
struct megasas_instance {int fw_fault_work; struct workqueue_struct* fw_fault_work_q; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct workqueue_struct*) ;
 int FUNC_2 (struct workqueue_struct*) ;

void
FUNC_3(struct megasas_instance *VAR_0)
{
 struct workqueue_struct *VAR_1;

 if (VAR_0->fw_fault_work_q) {
  VAR_1 = VAR_0->fw_fault_work_q;
  VAR_0->fw_fault_work_q = ((void*)0);
  if (!FUNC_0(&VAR_0->fw_fault_work))
   FUNC_2(VAR_1);
  FUNC_1(VAR_1);
 }
}
