
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tee_shm {int dummy; } ;
struct tee_context {int dummy; } ;
struct optee_msg_arg {int num_params; void* ret; TYPE_3__* params; int ret_origin; } ;
struct TYPE_4__ {int a; scalar_t__ b; } ;
struct TYPE_5__ {TYPE_1__ value; } ;
struct TYPE_6__ {scalar_t__ attr; TYPE_2__ u; } ;


 scalar_t__ VAR_0 ;


 void* VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (struct tee_context*,struct tee_shm*) ;
 int FUNC_1 (struct tee_shm*) ;

__attribute__((used)) static void FUNC_2(struct tee_context *VAR_4,
      struct optee_msg_arg *VAR_5)
{
 struct tee_shm *VAR_6;

 VAR_5->ret_origin = VAR_2;

 if (VAR_5->num_params != 1 ||
     VAR_5->params[0].attr != VAR_0) {
  VAR_5->ret = VAR_1;
  return;
 }

 VAR_6 = (struct tee_shm *)(unsigned long)VAR_5->params[0].u.value.b;
 switch (VAR_5->params[0].u.value.a) {
 case 129:
  FUNC_0(VAR_4, VAR_6);
  break;
 case 128:
  FUNC_1(VAR_6);
  break;
 default:
  VAR_5->ret = VAR_1;
 }
 VAR_5->ret = VAR_3;
}
