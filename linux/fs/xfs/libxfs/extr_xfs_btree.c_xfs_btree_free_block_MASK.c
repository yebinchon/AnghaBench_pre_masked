
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfs_buf {int dummy; } ;
struct xfs_btree_cur {int bc_tp; TYPE_1__* bc_ops; } ;
struct TYPE_2__ {int (* free_block ) (struct xfs_btree_cur*,struct xfs_buf*) ;} ;


 int FUNC_0 (struct xfs_btree_cur*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct xfs_btree_cur*,struct xfs_buf*) ;
 int FUNC_2 (int ,struct xfs_buf*) ;

__attribute__((used)) static int
FUNC_3(
 struct xfs_btree_cur *VAR_1,
 struct xfs_buf *VAR_2)
{
 int VAR_3;

 VAR_3 = VAR_1->bc_ops->free_block(VAR_1, VAR_2);
 if (!VAR_3) {
  FUNC_2(VAR_1->bc_tp, VAR_2);
  FUNC_0(VAR_1, VAR_0);
 }
 return VAR_3;
}
