
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct TYPE_2__ {int type; int cookie; scalar_t__ flags; scalar_t__ list; scalar_t__ pad1; int node; void* highest_blocked; void* convert_type; } ;
struct dlm_lock {int lock_refs; scalar_t__ lksb_kernel_allocated; scalar_t__ cancel_pending; scalar_t__ unlock_pending; scalar_t__ lock_pending; scalar_t__ convert_pending; scalar_t__ bast_pending; scalar_t__ ast_pending; TYPE_1__ ml; int * astdata; int * bast; int * ast; int spinlock; int bast_list; int ast_list; int list; } ;


 int FUNC_0 (int *) ;
 void* VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct dlm_lock *VAR_1, int VAR_2,
     u8 VAR_3, u64 VAR_4)
{
 FUNC_0(&VAR_1->list);
 FUNC_0(&VAR_1->ast_list);
 FUNC_0(&VAR_1->bast_list);
 FUNC_3(&VAR_1->spinlock);
 VAR_1->ml.type = VAR_2;
 VAR_1->ml.convert_type = VAR_0;
 VAR_1->ml.highest_blocked = VAR_0;
 VAR_1->ml.node = VAR_3;
 VAR_1->ml.pad1 = 0;
 VAR_1->ml.list = 0;
 VAR_1->ml.flags = 0;
 VAR_1->ast = ((void*)0);
 VAR_1->bast = ((void*)0);
 VAR_1->astdata = ((void*)0);
 VAR_1->ml.cookie = FUNC_1(VAR_4);
 VAR_1->ast_pending = 0;
 VAR_1->bast_pending = 0;
 VAR_1->convert_pending = 0;
 VAR_1->lock_pending = 0;
 VAR_1->unlock_pending = 0;
 VAR_1->cancel_pending = 0;
 VAR_1->lksb_kernel_allocated = 0;

 FUNC_2(&VAR_1->lock_refs);
}
