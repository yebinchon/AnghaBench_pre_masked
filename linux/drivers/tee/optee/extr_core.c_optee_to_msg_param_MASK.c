
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int shm; } ;
struct TYPE_7__ {int c; int b; int a; } ;
struct TYPE_9__ {TYPE_3__ memref; TYPE_2__ value; } ;
struct tee_param {int attr; TYPE_4__ u; } ;
struct TYPE_6__ {int c; int b; int a; } ;
struct TYPE_10__ {TYPE_1__ value; } ;
struct optee_msg_param {int attr; TYPE_5__ u; } ;


 int VAR_0 ;
 int VAR_1 ;







 int FUNC_0 (TYPE_5__*,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct optee_msg_param*,struct tee_param const*) ;
 int FUNC_3 (struct optee_msg_param*,struct tee_param const*) ;

int FUNC_4(struct optee_msg_param *VAR_2, size_t VAR_3,
         const struct tee_param *VAR_4)
{
 int VAR_5;
 size_t VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  const struct tee_param *VAR_7 = VAR_4 + VAR_6;
  struct optee_msg_param *VAR_8 = VAR_2 + VAR_6;

  switch (VAR_7->attr) {
  case 131:
   VAR_8->attr = 131;
   FUNC_0(&VAR_8->u, 0, sizeof(VAR_8->u));
   break;
  case 129:
  case 128:
  case 130:
   VAR_8->attr = VAR_1 + VAR_7->attr -
       129;
   VAR_8->u.value.a = VAR_7->u.value.a;
   VAR_8->u.value.b = VAR_7->u.value.b;
   VAR_8->u.value.c = VAR_7->u.value.c;
   break;
  case 133:
  case 132:
  case 134:
   if (FUNC_1(VAR_7->u.memref.shm))
    VAR_5 = FUNC_2(VAR_8, VAR_7);
   else
    VAR_5 = FUNC_3(VAR_8, VAR_7);
   if (VAR_5)
    return VAR_5;
   break;
  default:
   return -VAR_0;
  }
 }
 return 0;
}
