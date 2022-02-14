
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int xfs_dir2_leaf_t ;
struct TYPE_7__ {struct xfs_inode* dp; } ;
typedef TYPE_2__ xfs_da_args_t ;
struct xfs_inode {TYPE_1__* d_ops; } ;
struct xfs_dir3_icleaf_hdr {int stale; int count; } ;
struct xfs_dir2_leaf_entry {scalar_t__ address; } ;
struct xfs_buf {int * b_addr; } ;
struct TYPE_6__ {int (* leaf_hdr_to_disk ) (int *,struct xfs_dir3_icleaf_hdr*) ;struct xfs_dir2_leaf_entry* (* leaf_ents_p ) (int *) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 struct xfs_dir2_leaf_entry* FUNC_2 (int *) ;
 int FUNC_3 (int *,struct xfs_dir3_icleaf_hdr*) ;
 int FUNC_4 (TYPE_2__*,struct xfs_buf*,int,int) ;
 int FUNC_5 (TYPE_2__*,struct xfs_buf*) ;

void
FUNC_6(
 xfs_da_args_t *VAR_1,
 struct xfs_dir3_icleaf_hdr *VAR_2,
 struct xfs_buf *VAR_3)
{
 int VAR_4;
 xfs_dir2_leaf_t *VAR_5;
 int VAR_6;
 int VAR_7;
 struct xfs_dir2_leaf_entry *VAR_8;
 struct xfs_inode *VAR_9 = VAR_1->dp;

 VAR_5 = VAR_3->b_addr;
 if (!VAR_2->stale)
  return;




 VAR_8 = VAR_9->d_ops->leaf_ents_p(VAR_5);
 for (VAR_4 = VAR_7 = 0, VAR_6 = -1; VAR_4 < VAR_2->count; VAR_4++) {
  if (VAR_8[VAR_4].address == FUNC_1(VAR_0))
   continue;



  if (VAR_4 > VAR_7) {
   if (VAR_6 == -1)
    VAR_6 = VAR_7;
   VAR_8[VAR_7] = VAR_8[VAR_4];
  }
  VAR_7++;
 }



 FUNC_0(VAR_2->stale == VAR_4 - VAR_7);
 VAR_2->count -= VAR_2->stale;
 VAR_2->stale = 0;

 VAR_9->d_ops->leaf_hdr_to_disk(VAR_5, VAR_2);
 FUNC_5(VAR_1, VAR_3);
 if (VAR_6 != -1)
  FUNC_4(VAR_1, VAR_3, VAR_6, VAR_7 - 1);
}
