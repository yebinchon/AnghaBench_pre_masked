
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tee_shm {int dummy; } ;
struct tee_context {int dummy; } ;
struct optee_msg_arg {scalar_t__ ret; TYPE_3__* params; int cmd; } ;
typedef int phys_addr_t ;
struct TYPE_4__ {unsigned long shm_ref; } ;
struct TYPE_5__ {TYPE_1__ rmem; } ;
struct TYPE_6__ {TYPE_2__ u; int attr; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct tee_shm*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct tee_shm*) ;
 scalar_t__ VAR_3 ;
 struct tee_shm* FUNC_2 (struct tee_context*,int,struct optee_msg_arg**,int *) ;
 scalar_t__ FUNC_3 (struct tee_context*,int ) ;
 int FUNC_4 (struct tee_shm*) ;

int FUNC_5(struct tee_context *VAR_4, struct tee_shm *VAR_5)
{
 struct tee_shm *VAR_6;
 struct optee_msg_arg *VAR_7;
 phys_addr_t VAR_8;
 int VAR_9 = 0;

 VAR_6 = FUNC_2(VAR_4, 1, &VAR_7, &VAR_8);
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);

 VAR_7->cmd = VAR_2;

 VAR_7->params[0].attr = VAR_1;
 VAR_7->params[0].u.rmem.shm_ref = (unsigned long)VAR_5;

 if (FUNC_3(VAR_4, VAR_8) ||
     VAR_7->ret != VAR_3)
  VAR_9 = -VAR_0;
 FUNC_4(VAR_6);
 return VAR_9;
}
