
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tee_context {int teedev; } ;
struct optee_rpc_param {scalar_t__ a0; int a3; int a2; int a1; int a7; int a6; int a5; int a4; } ;
struct optee_call_waiter {int dummy; } ;
struct optee_call_ctx {int dummy; } ;
struct optee {int call_queue; int (* invoke_fn ) (scalar_t__,int ,int ,int ,int ,int ,int ,int ,struct arm_smccc_res*) ;} ;
struct arm_smccc_res {scalar_t__ a0; int a3; int a2; int a1; } ;
typedef int phys_addr_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,struct optee_call_waiter*) ;
 int FUNC_3 (int *,struct optee_call_waiter*) ;
 int FUNC_4 (int *,struct optee_call_waiter*) ;
 int FUNC_5 (struct tee_context*,struct optee_rpc_param*,struct optee_call_ctx*) ;
 int FUNC_6 (struct optee_call_ctx*) ;
 int FUNC_7 (int *,int *,int ) ;
 int FUNC_8 (scalar_t__,int ,int ,int ,int ,int ,int ,int ,struct arm_smccc_res*) ;
 struct optee* FUNC_9 (int ) ;

u32 FUNC_10(struct tee_context *VAR_2, phys_addr_t VAR_3)
{
 struct optee *VAR_4 = FUNC_9(VAR_2->teedev);
 struct optee_call_waiter VAR_5;
 struct optee_rpc_param VAR_6 = { };
 struct optee_call_ctx VAR_7 = { };
 u32 VAR_8;

 VAR_6.a0 = VAR_0;
 FUNC_7(&VAR_6.a1, &VAR_6.a2, VAR_3);

 FUNC_4(&VAR_4->call_queue, &VAR_5);
 while (1) {
  struct arm_smccc_res VAR_9;

  VAR_4->invoke_fn(VAR_6.a0, VAR_6.a1, VAR_6.a2, VAR_6.a3,
     VAR_6.a4, VAR_6.a5, VAR_6.a6, VAR_6.a7,
     &VAR_9);

  if (VAR_9.a0 == VAR_1) {




   FUNC_3(&VAR_4->call_queue, &VAR_5);
  } else if (FUNC_0(VAR_9.a0)) {
   FUNC_1();
   VAR_6.a0 = VAR_9.a0;
   VAR_6.a1 = VAR_9.a1;
   VAR_6.a2 = VAR_9.a2;
   VAR_6.a3 = VAR_9.a3;
   FUNC_5(VAR_2, &VAR_6, &VAR_7);
  } else {
   VAR_8 = VAR_9.a0;
   break;
  }
 }

 FUNC_6(&VAR_7);




 FUNC_2(&VAR_4->call_queue, &VAR_5);

 return VAR_8;
}
