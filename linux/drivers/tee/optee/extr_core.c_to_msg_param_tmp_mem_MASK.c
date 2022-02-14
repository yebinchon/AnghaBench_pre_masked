
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int shm_offs; scalar_t__ shm; int size; } ;
struct TYPE_6__ {TYPE_1__ memref; } ;
struct tee_param {int attr; TYPE_2__ u; } ;
struct TYPE_7__ {unsigned long shm_ref; int buf_ptr; int size; } ;
struct TYPE_8__ {TYPE_3__ tmem; } ;
struct optee_msg_param {int attr; TYPE_4__ u; } ;
typedef int phys_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__,int ,int *) ;

__attribute__((used)) static int FUNC_1(struct optee_msg_param *VAR_4,
    const struct tee_param *VAR_5)
{
 int VAR_6;
 phys_addr_t VAR_7;

 VAR_4->attr = VAR_2 + VAR_5->attr -
     VAR_3;

 VAR_4->u.tmem.shm_ref = (unsigned long)VAR_5->u.memref.shm;
 VAR_4->u.tmem.size = VAR_5->u.memref.size;

 if (!VAR_5->u.memref.shm) {
  VAR_4->u.tmem.buf_ptr = 0;
  return 0;
 }

 VAR_6 = FUNC_0(VAR_5->u.memref.shm, VAR_5->u.memref.shm_offs, &VAR_7);
 if (VAR_6)
  return VAR_6;

 VAR_4->u.tmem.buf_ptr = VAR_7;
 VAR_4->attr |= VAR_0 <<
      VAR_1;

 return 0;
}
