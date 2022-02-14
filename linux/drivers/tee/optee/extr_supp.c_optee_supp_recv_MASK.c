
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_3__ {int a; scalar_t__ c; scalar_t__ b; } ;
struct TYPE_4__ {TYPE_1__ value; } ;
struct tee_param {int attr; TYPE_2__ u; } ;
struct tee_device {int dummy; } ;
struct tee_context {struct tee_device* teedev; } ;
struct optee_supp_req {size_t func; size_t num_params; int param; } ;
struct optee_supp {int req_id; int mutex; int reqs_c; } ;
struct optee {struct optee_supp supp; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct optee_supp_req*) ;
 int FUNC_1 (struct optee_supp_req*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct tee_param*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (size_t,struct tee_param*,size_t*) ;
 struct optee_supp_req* FUNC_6 (struct optee_supp*,size_t,int*) ;
 struct optee* FUNC_7 (struct tee_device*) ;
 scalar_t__ FUNC_8 (int *) ;

int FUNC_9(struct tee_context *VAR_3, u32 *VAR_4, u32 *VAR_5,
      struct tee_param *VAR_6)
{
 struct tee_device *VAR_7 = VAR_3->teedev;
 struct optee *VAR_8 = FUNC_7(VAR_7);
 struct optee_supp *VAR_9 = &VAR_8->supp;
 struct optee_supp_req *VAR_10 = ((void*)0);
 int VAR_11;
 size_t VAR_12;
 int VAR_13;

 VAR_13 = FUNC_5(*VAR_5, VAR_6, &VAR_12);
 if (VAR_13)
  return VAR_13;

 while (1) {
  FUNC_3(&VAR_9->mutex);
  VAR_10 = FUNC_6(VAR_9, *VAR_5 - VAR_12, &VAR_11);
  FUNC_4(&VAR_9->mutex);

  if (VAR_10) {
   if (FUNC_0(VAR_10))
    return FUNC_1(VAR_10);
   break;
  }
  if (FUNC_8(&VAR_9->reqs_c))
   return -VAR_0;
 }

 if (VAR_12) {




  VAR_6->attr = VAR_2 |
         VAR_1;
  VAR_6->u.value.a = VAR_11;
  VAR_6->u.value.b = 0;
  VAR_6->u.value.c = 0;
 } else {
  FUNC_3(&VAR_9->mutex);
  VAR_9->req_id = VAR_11;
  FUNC_4(&VAR_9->mutex);
 }

 *VAR_4 = VAR_10->func;
 *VAR_5 = VAR_10->num_params + VAR_12;
 FUNC_2(VAR_6 + VAR_12, VAR_10->param,
        sizeof(struct tee_param) * VAR_10->num_params);

 return 0;
}
