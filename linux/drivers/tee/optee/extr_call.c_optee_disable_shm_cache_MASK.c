
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tee_shm {int dummy; } ;
struct optee_smc_disable_shm_cache_result {scalar_t__ status; int shm_lower32; int shm_upper32; } ;
struct optee_call_waiter {int dummy; } ;
struct optee {int call_queue; int (* invoke_fn ) (int ,int ,int ,int ,int ,int ,int ,int ,struct arm_smccc_res*) ;} ;
struct arm_smccc_res {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,struct optee_call_waiter*) ;
 int FUNC_1 (int *,struct optee_call_waiter*) ;
 int FUNC_2 (int *,struct optee_call_waiter*) ;
 struct tee_shm* FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ,int ,int ,int ,int ,struct arm_smccc_res*) ;
 int FUNC_5 (struct tee_shm*) ;

void FUNC_6(struct optee *VAR_3)
{
 struct optee_call_waiter VAR_4;


 FUNC_2(&VAR_3->call_queue, &VAR_4);
 while (1) {
  union {
   struct arm_smccc_res smccc;
   struct optee_smc_disable_shm_cache_result result;
  } VAR_5;

  VAR_3->invoke_fn(VAR_0, 0, 0, 0, 0, 0, 0,
     0, &VAR_5.smccc);
  if (VAR_5.result.status == VAR_1)
   break;
  if (VAR_5.result.status == VAR_2) {
   struct tee_shm *VAR_6;

   VAR_6 = FUNC_3(VAR_5.result.shm_upper32,
           VAR_5.result.shm_lower32);
   FUNC_5(VAR_6);
  } else {
   FUNC_1(&VAR_3->call_queue, &VAR_4);
  }
 }
 FUNC_0(&VAR_3->call_queue, &VAR_4);
}
