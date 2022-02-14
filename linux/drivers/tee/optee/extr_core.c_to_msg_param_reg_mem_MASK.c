
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int shm_offs; int size; scalar_t__ shm; } ;
struct TYPE_6__ {TYPE_1__ memref; } ;
struct tee_param {TYPE_2__ u; scalar_t__ attr; } ;
struct TYPE_7__ {unsigned long shm_ref; int offs; int size; } ;
struct TYPE_8__ {TYPE_3__ rmem; } ;
struct optee_msg_param {TYPE_4__ u; scalar_t__ attr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_0(struct optee_msg_param *VAR_2,
    const struct tee_param *VAR_3)
{
 VAR_2->attr = VAR_0 + VAR_3->attr -
     VAR_1;

 VAR_2->u.rmem.shm_ref = (unsigned long)VAR_3->u.memref.shm;
 VAR_2->u.rmem.size = VAR_3->u.memref.size;
 VAR_2->u.rmem.offs = VAR_3->u.memref.shm_offs;
 return 0;
}
