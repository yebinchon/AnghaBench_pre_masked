
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int gid; int uid; void* type; } ;
struct TYPE_3__ {int status; void* type; } ;
struct orangefs_kernel_op_s {TYPE_2__ upcall; int tag; scalar_t__ attempts; int op_state; TYPE_1__ downcall; int waitq; int lock; int list; } ;
typedef void* __s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct orangefs_kernel_op_s*) ;
 int FUNC_6 (int ,char*,struct orangefs_kernel_op_s*,int ,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int *) ;
 int VAR_4 ;
 struct orangefs_kernel_op_s* FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int VAR_5 ;
 int FUNC_11 (struct orangefs_kernel_op_s*) ;
 int FUNC_12 (int *) ;

struct orangefs_kernel_op_s *FUNC_13(__s32 VAR_6)
{
 struct orangefs_kernel_op_s *VAR_7 = ((void*)0);

 VAR_7 = FUNC_9(VAR_5, VAR_0);
 if (VAR_7) {
  FUNC_0(&VAR_7->list);
  FUNC_12(&VAR_7->lock);
  FUNC_8(&VAR_7->waitq);

  VAR_7->upcall.type = VAR_3;
  VAR_7->downcall.type = VAR_3;
  VAR_7->downcall.status = -1;

  VAR_7->op_state = VAR_2;


  FUNC_11(VAR_7);
  VAR_7->upcall.type = VAR_6;
  VAR_7->attempts = 0;
  FUNC_6(VAR_1,
        "Alloced OP (%p: %llu %s)\n",
        VAR_7,
        FUNC_10(VAR_7->tag),
        FUNC_5(VAR_7));

  VAR_7->upcall.uid = FUNC_4(&VAR_4,
            FUNC_2());

  VAR_7->upcall.gid = FUNC_3(&VAR_4,
            FUNC_1());
 } else {
  FUNC_7("op_alloc: kmem_cache_zalloc failed!\n");
 }
 return VAR_7;
}
