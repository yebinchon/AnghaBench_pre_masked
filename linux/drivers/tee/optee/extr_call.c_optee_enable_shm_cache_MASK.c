
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct optee_call_waiter {int dummy; } ;
struct optee {int call_queue; int (* invoke_fn ) (int ,int ,int ,int ,int ,int ,int ,int ,struct arm_smccc_res*) ;} ;
struct arm_smccc_res {scalar_t__ a0; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,struct optee_call_waiter*) ;
 int FUNC_1 (int *,struct optee_call_waiter*) ;
 int FUNC_2 (int *,struct optee_call_waiter*) ;
 int FUNC_3 (int ,int ,int ,int ,int ,int ,int ,int ,struct arm_smccc_res*) ;

void FUNC_4(struct optee *VAR_2)
{
 struct optee_call_waiter VAR_3;


 FUNC_2(&VAR_2->call_queue, &VAR_3);
 while (1) {
  struct arm_smccc_res VAR_4;

  VAR_2->invoke_fn(VAR_0, 0, 0, 0, 0, 0, 0,
     0, &VAR_4);
  if (VAR_4.a0 == VAR_1)
   break;
  FUNC_1(&VAR_2->call_queue, &VAR_3);
 }
 FUNC_0(&VAR_2->call_queue, &VAR_3);
}
