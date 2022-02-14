
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
struct tee_shm {int dummy; } ;
struct TYPE_13__ {struct tee_shm* shm; scalar_t__ shm_offs; scalar_t__ size; } ;
struct TYPE_8__ {int c; int b; int a; } ;
struct TYPE_14__ {TYPE_6__ memref; TYPE_1__ value; } ;
struct tee_param {int attr; TYPE_7__ u; } ;
struct TYPE_11__ {scalar_t__ offs; scalar_t__ shm_ref; scalar_t__ size; } ;
struct TYPE_10__ {scalar_t__ buf_ptr; scalar_t__ shm_ref; scalar_t__ size; } ;
struct TYPE_9__ {int c; int b; int a; } ;
struct TYPE_12__ {TYPE_4__ rmem; TYPE_3__ tmem; TYPE_2__ value; } ;
struct optee_msg_param {int attr; TYPE_5__ u; } ;
typedef scalar_t__ phys_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_7__*,int ,int) ;
 int FUNC_1 (struct tee_shm*,size_t,scalar_t__*) ;

int FUNC_2(struct tee_param *VAR_5, size_t VAR_6,
    const struct optee_msg_param *VAR_7)
{
 int VAR_8;
 size_t VAR_9;
 struct tee_shm *VAR_10;
 phys_addr_t VAR_11;

 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
  struct tee_param *VAR_12 = VAR_5 + VAR_9;
  const struct optee_msg_param *VAR_13 = VAR_7 + VAR_9;
  u32 VAR_14 = VAR_13->attr & VAR_1;

  switch (VAR_14) {
  case 137:
   VAR_12->attr = VAR_3;
   FUNC_0(&VAR_12->u, 0, sizeof(VAR_12->u));
   break;
  case 129:
  case 128:
  case 130:
   VAR_12->attr = VAR_4 +
      VAR_14 - 129;
   VAR_12->u.value.a = VAR_13->u.value.a;
   VAR_12->u.value.b = VAR_13->u.value.b;
   VAR_12->u.value.c = VAR_13->u.value.c;
   break;
  case 132:
  case 131:
  case 133:
   VAR_12->attr = VAR_2 +
      VAR_14 - 132;
   VAR_12->u.memref.size = VAR_13->u.tmem.size;
   VAR_10 = (struct tee_shm *)(unsigned long)
    VAR_13->u.tmem.shm_ref;
   if (!VAR_10) {
    VAR_12->u.memref.shm_offs = 0;
    VAR_12->u.memref.shm = ((void*)0);
    break;
   }
   VAR_8 = FUNC_1(VAR_10, 0, &VAR_11);
   if (VAR_8)
    return VAR_8;
   VAR_12->u.memref.shm_offs = VAR_13->u.tmem.buf_ptr - VAR_11;
   VAR_12->u.memref.shm = VAR_10;


   if (VAR_12->u.memref.size) {
    size_t VAR_15 = VAR_12->u.memref.shm_offs +
        VAR_12->u.memref.size - 1;

    VAR_8 = FUNC_1(VAR_10, VAR_15, ((void*)0));
    if (VAR_8)
     return VAR_8;
   }
   break;
  case 135:
  case 134:
  case 136:
   VAR_12->attr = VAR_2 +
      VAR_14 - 135;
   VAR_12->u.memref.size = VAR_13->u.rmem.size;
   VAR_10 = (struct tee_shm *)(unsigned long)
    VAR_13->u.rmem.shm_ref;

   if (!VAR_10) {
    VAR_12->u.memref.shm_offs = 0;
    VAR_12->u.memref.shm = ((void*)0);
    break;
   }
   VAR_12->u.memref.shm_offs = VAR_13->u.rmem.offs;
   VAR_12->u.memref.shm = VAR_10;

   break;

  default:
   return -VAR_0;
  }
 }
 return 0;
}
