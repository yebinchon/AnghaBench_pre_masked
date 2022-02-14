
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct tee_shm {int dummy; } ;
struct tee_context {int dummy; } ;
struct page {int dummy; } ;
struct optee_msg_arg {scalar_t__ ret; TYPE_3__* params; int cmd; } ;
typedef int phys_addr_t ;
struct TYPE_4__ {unsigned long shm_ref; int buf_ptr; int size; } ;
struct TYPE_5__ {TYPE_1__ tmem; } ;
struct TYPE_6__ {int attr; TYPE_2__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct tee_shm*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct tee_shm*) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (unsigned long,size_t) ;
 struct tee_shm* FUNC_3 (struct tee_context*,int,struct optee_msg_arg**,int *) ;
 int * FUNC_4 (size_t) ;
 scalar_t__ FUNC_5 (struct tee_context*,int ) ;
 int FUNC_6 (int *,struct page**,size_t,int) ;
 int FUNC_7 (int *,size_t) ;
 int FUNC_8 (struct tee_shm*) ;
 int FUNC_9 (struct tee_shm*) ;
 int FUNC_10 (struct tee_shm*) ;
 int FUNC_11 (int *) ;

int FUNC_12(struct tee_context *VAR_7, struct tee_shm *VAR_8,
         struct page **VAR_9, size_t VAR_10,
         unsigned long VAR_11)
{
 struct tee_shm *VAR_12 = ((void*)0);
 struct optee_msg_arg *VAR_13;
 u64 *VAR_14;
 phys_addr_t VAR_15;
 int VAR_16;

 if (!VAR_10)
  return -VAR_0;

 VAR_16 = FUNC_2(VAR_11, VAR_10);
 if (VAR_16)
  return VAR_16;

 VAR_14 = FUNC_4(VAR_10);
 if (!VAR_14)
  return -VAR_1;

 VAR_12 = FUNC_3(VAR_7, 1, &VAR_13, &VAR_15);
 if (FUNC_0(VAR_12)) {
  VAR_16 = FUNC_1(VAR_12);
  goto out;
 }

 FUNC_6(VAR_14, VAR_9, VAR_10,
         FUNC_9(VAR_8));

 VAR_13->cmd = VAR_4;
 VAR_13->params->attr = VAR_3 |
    VAR_2;
 VAR_13->params->u.tmem.shm_ref = (unsigned long)VAR_8;
 VAR_13->params->u.tmem.size = FUNC_10(VAR_8);




 VAR_13->params->u.tmem.buf_ptr = FUNC_11(VAR_14) |
   (FUNC_9(VAR_8) & (VAR_5 - 1));

 if (FUNC_5(VAR_7, VAR_15) ||
     VAR_13->ret != VAR_6)
  VAR_16 = -VAR_0;

 FUNC_8(VAR_12);
out:
 FUNC_7(VAR_14, VAR_10);
 return VAR_16;
}
