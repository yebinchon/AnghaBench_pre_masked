
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int size; } ;
struct TYPE_4__ {int c; int b; int a; } ;
struct TYPE_6__ {TYPE_2__ memref; TYPE_1__ value; } ;
struct tee_param {int attr; TYPE_3__ u; } ;
struct tee_device {int dummy; } ;
struct tee_context {struct tee_device* teedev; } ;
struct optee_supp_req {size_t num_params; int c; int ret; struct tee_param* param; } ;
struct optee_supp {int mutex; } ;
struct optee {struct optee_supp supp; } ;


 scalar_t__ FUNC_0 (struct optee_supp_req*) ;
 int FUNC_1 (struct optee_supp_req*) ;
 int VAR_0 ;




 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct optee_supp_req* FUNC_5 (struct optee_supp*,int ,struct tee_param*,size_t*) ;
 struct optee* FUNC_6 (struct tee_device*) ;

int FUNC_7(struct tee_context *VAR_1, u32 VAR_2, u32 VAR_3,
      struct tee_param *VAR_4)
{
 struct tee_device *VAR_5 = VAR_1->teedev;
 struct optee *VAR_6 = FUNC_6(VAR_5);
 struct optee_supp *VAR_7 = &VAR_6->supp;
 struct optee_supp_req *VAR_8;
 size_t VAR_9;
 size_t VAR_10;

 FUNC_3(&VAR_7->mutex);
 VAR_8 = FUNC_5(VAR_7, VAR_3, VAR_4, &VAR_10);
 FUNC_4(&VAR_7->mutex);

 if (FUNC_0(VAR_8)) {

  return FUNC_1(VAR_8);
 }


 for (VAR_9 = 0; VAR_9 < VAR_8->num_params; VAR_9++) {
  struct tee_param *VAR_11 = VAR_8->param + VAR_9;

  switch (VAR_11->attr & VAR_0) {
  case 128:
  case 129:
   VAR_11->u.value.a = VAR_4[VAR_9 + VAR_10].u.value.a;
   VAR_11->u.value.b = VAR_4[VAR_9 + VAR_10].u.value.b;
   VAR_11->u.value.c = VAR_4[VAR_9 + VAR_10].u.value.c;
   break;
  case 130:
  case 131:
   VAR_11->u.memref.size = VAR_4[VAR_9 + VAR_10].u.memref.size;
   break;
  default:
   break;
  }
 }
 VAR_8->ret = VAR_2;


 FUNC_2(&VAR_8->c);

 return 0;
}
