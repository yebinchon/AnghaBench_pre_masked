
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union cdu_context {int dummy; } cdu_context ;
struct ilt_line {int dummy; } ;
struct host_sp_status_block {int dummy; } ;
struct bnx2x_slowpath {int dummy; } ;
struct bnx2x {void* eq_ring; int eq_mapping; void* spq; int spq_mapping; TYPE_2__* ilt; TYPE_1__* context; void* slowpath; int slowpath_mapping; void* def_status_blk; int def_status_blk_mapping; void* t2; int t2_mapping; } ;
struct TYPE_4__ {int lines; } ;
struct TYPE_3__ {int size; void* vcxt; int cxt_mapping; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct bnx2x*) ;
 void* FUNC_2 (int *,int) ;
 int VAR_1 ;
 int FUNC_3 (struct bnx2x*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (struct bnx2x*) ;
 scalar_t__ FUNC_5 (struct bnx2x*,int ) ;
 scalar_t__ FUNC_6 (struct bnx2x*) ;
 int FUNC_7 (int ,int,int ) ;
 int FUNC_8 (int ,int) ;

int FUNC_9(struct bnx2x *VAR_8)
{
 int VAR_9, VAR_10, VAR_11;

 if (!FUNC_3(VAR_8) && !VAR_8->t2) {

  VAR_8->t2 = FUNC_2(&VAR_8->t2_mapping, VAR_7);
  if (!VAR_8->t2)
   goto alloc_mem_err;
 }

 VAR_8->def_status_blk = FUNC_2(&VAR_8->def_status_blk_mapping,
          sizeof(struct host_sp_status_block));
 if (!VAR_8->def_status_blk)
  goto alloc_mem_err;

 VAR_8->slowpath = FUNC_2(&VAR_8->slowpath_mapping,
           sizeof(struct bnx2x_slowpath));
 if (!VAR_8->slowpath)
  goto alloc_mem_err;
 VAR_11 = sizeof(union cdu_context) * FUNC_1(VAR_8);

 for (VAR_9 = 0, VAR_10 = 0; VAR_10 < VAR_11; VAR_9++) {
  VAR_8->context[VAR_9].size = FUNC_8(VAR_1,
       (VAR_11 - VAR_10));
  VAR_8->context[VAR_9].vcxt = FUNC_2(&VAR_8->context[VAR_9].cxt_mapping,
            VAR_8->context[VAR_9].size);
  if (!VAR_8->context[VAR_9].vcxt)
   goto alloc_mem_err;
  VAR_10 += VAR_8->context[VAR_9].size;
 }
 VAR_8->ilt->lines = FUNC_7(VAR_4, sizeof(struct ilt_line),
     VAR_3);
 if (!VAR_8->ilt->lines)
  goto alloc_mem_err;

 if (FUNC_5(VAR_8, VAR_5))
  goto alloc_mem_err;

 if (FUNC_6(VAR_8))
  goto alloc_mem_err;


 VAR_8->spq = FUNC_2(&VAR_8->spq_mapping, VAR_0);
 if (!VAR_8->spq)
  goto alloc_mem_err;


 VAR_8->eq_ring = FUNC_2(&VAR_8->eq_mapping,
          VAR_0 * VAR_6);
 if (!VAR_8->eq_ring)
  goto alloc_mem_err;

 return 0;

alloc_mem_err:
 FUNC_4(VAR_8);
 FUNC_0("Can't allocate memory\n");
 return -VAR_2;
}
