
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_agino_t ;
struct xfs_ialloc_count_inodes {int freecount; int count; int member_0; } ;
struct xfs_btree_cur {scalar_t__ bc_btnum; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct xfs_btree_cur*,int ,struct xfs_ialloc_count_inodes*) ;
 int VAR_1 ;

int
FUNC_2(
 struct xfs_btree_cur *VAR_2,
 xfs_agino_t *VAR_3,
 xfs_agino_t *VAR_4)
{
 struct xfs_ialloc_count_inodes VAR_5 = {0};
 int VAR_6;

 FUNC_0(VAR_2->bc_btnum == VAR_0);
 VAR_6 = FUNC_1(VAR_2, VAR_1, &VAR_5);
 if (VAR_6)
  return VAR_6;

 *VAR_3 = VAR_5.count;
 *VAR_4 = VAR_5.freecount;
 return 0;
}
