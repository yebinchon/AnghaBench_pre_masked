
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int xfs_trans_t ;
struct TYPE_11__ {int m_bsize; int m_ddev_targp; } ;
typedef TYPE_2__ xfs_mount_t ;
typedef int xfs_buf_t ;
struct TYPE_12__ {int bc_nlevels; int ** bc_bufs; TYPE_1__* bc_ops; int * bc_ra; int * bc_ptrs; int bc_rec; TYPE_2__* bc_mp; int * bc_tp; } ;
typedef TYPE_3__ xfs_btree_cur_t ;
struct TYPE_10__ {int buf_ops; TYPE_3__* (* dup_cursor ) (TYPE_3__*) ;} ;


 int FUNC_0 (int *) ;
 TYPE_3__* FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (TYPE_2__*,int *,int ,int ,int ,int ,int **,int ) ;

int
FUNC_4(
 xfs_btree_cur_t *VAR_0,
 xfs_btree_cur_t **VAR_1)
{
 xfs_buf_t *VAR_2;
 int VAR_3;
 int VAR_4;
 xfs_mount_t *VAR_5;
 xfs_btree_cur_t *VAR_6;
 xfs_trans_t *VAR_7;

 VAR_7 = VAR_0->bc_tp;
 VAR_5 = VAR_0->bc_mp;




 VAR_6 = VAR_0->bc_ops->dup_cursor(VAR_0);




 VAR_6->bc_rec = VAR_0->bc_rec;




 for (VAR_4 = 0; VAR_4 < VAR_6->bc_nlevels; VAR_4++) {
  VAR_6->bc_ptrs[VAR_4] = VAR_0->bc_ptrs[VAR_4];
  VAR_6->bc_ra[VAR_4] = VAR_0->bc_ra[VAR_4];
  VAR_2 = VAR_0->bc_bufs[VAR_4];
  if (VAR_2) {
   VAR_3 = FUNC_3(VAR_5, VAR_7, VAR_5->m_ddev_targp,
         FUNC_0(VAR_2), VAR_5->m_bsize,
         0, &VAR_2,
         VAR_0->bc_ops->buf_ops);
   if (VAR_3) {
    FUNC_2(VAR_6, VAR_3);
    *VAR_1 = ((void*)0);
    return VAR_3;
   }
  }
  VAR_6->bc_bufs[VAR_4] = VAR_2;
 }
 *VAR_1 = VAR_6;
 return 0;
}
