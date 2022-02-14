
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tee_shm {int dummy; } ;
struct tee_device {int dummy; } ;
struct tee_context {struct tee_device* teedev; } ;
struct optee_rpc_param {int a0; int a2; int a1; int a5; int a4; } ;
struct optee_call_ctx {int dummy; } ;
struct optee {int dummy; } ;
typedef unsigned long phys_addr_t ;


 int FUNC_0 (struct tee_shm*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;




 int VAR_1 ;
 int FUNC_2 (struct tee_context*,struct optee*,struct tee_shm*,struct optee_call_ctx*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int *,int *,unsigned long) ;
 struct tee_shm* FUNC_5 (int ,int ) ;
 struct optee* FUNC_6 (struct tee_device*) ;
 struct tee_shm* FUNC_7 (struct tee_context*,int ,int ) ;
 int FUNC_8 (struct tee_shm*) ;
 int FUNC_9 (struct tee_shm*,int ,unsigned long*) ;

void FUNC_10(struct tee_context *VAR_2, struct optee_rpc_param *VAR_3,
        struct optee_call_ctx *VAR_4)
{
 struct tee_device *VAR_5 = VAR_2->teedev;
 struct optee *VAR_6 = FUNC_6(VAR_5);
 struct tee_shm *VAR_7;
 phys_addr_t VAR_8;

 switch (FUNC_1(VAR_3->a0)) {
 case 131:
  VAR_7 = FUNC_7(VAR_2, VAR_3->a1, VAR_1);
  if (!FUNC_0(VAR_7) && !FUNC_9(VAR_7, 0, &VAR_8)) {
   FUNC_4(&VAR_3->a1, &VAR_3->a2, VAR_8);
   FUNC_4(&VAR_3->a4, &VAR_3->a5,
      (unsigned long)VAR_7);
  } else {
   VAR_3->a1 = 0;
   VAR_3->a2 = 0;
   VAR_3->a4 = 0;
   VAR_3->a5 = 0;
  }
  break;
 case 128:
  VAR_7 = FUNC_5(VAR_3->a1, VAR_3->a2);
  FUNC_8(VAR_7);
  break;
 case 129:






  break;
 case 130:
  VAR_7 = FUNC_5(VAR_3->a1, VAR_3->a2);
  FUNC_2(VAR_2, VAR_6, VAR_7, VAR_4);
  break;
 default:
  FUNC_3("Unknown RPC func 0x%x\n",
   (u32)FUNC_1(VAR_3->a0));
  break;
 }

 VAR_3->a0 = VAR_0;
}
