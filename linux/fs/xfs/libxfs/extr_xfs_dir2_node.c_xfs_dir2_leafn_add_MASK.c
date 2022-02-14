
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfs_inode {TYPE_1__* d_ops; } ;
struct xfs_dir3_icleaf_hdr {int count; int stale; } ;
struct xfs_dir2_leaf_entry {void* address; void* hashval; } ;
struct xfs_dir2_leaf {int dummy; } ;
struct xfs_da_args {scalar_t__ hashval; int op_flags; int index; int blkno; int geo; struct xfs_inode* dp; } ;
struct xfs_buf {struct xfs_dir2_leaf* b_addr; } ;
struct TYPE_2__ {int (* leaf_max_ents ) (int ) ;int (* leaf_hdr_to_disk ) (struct xfs_dir2_leaf*,struct xfs_dir3_icleaf_hdr*) ;struct xfs_dir2_leaf_entry* (* leaf_ents_p ) (struct xfs_dir2_leaf*) ;int (* leaf_hdr_from_disk ) (struct xfs_dir3_icleaf_hdr*,struct xfs_dir2_leaf*) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (void*) ;
 void* FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct xfs_dir3_icleaf_hdr*,struct xfs_dir2_leaf*) ;
 struct xfs_dir2_leaf_entry* FUNC_4 (struct xfs_dir2_leaf*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct xfs_dir2_leaf*,struct xfs_dir3_icleaf_hdr*) ;
 int FUNC_7 (struct xfs_da_args*,int) ;
 scalar_t__ FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (struct xfs_inode*,struct xfs_buf*) ;
 int FUNC_10 (struct xfs_dir3_icleaf_hdr*,struct xfs_dir2_leaf_entry*,int*,int*,int*,int*,int*) ;
 struct xfs_dir2_leaf_entry* FUNC_11 (struct xfs_dir3_icleaf_hdr*,struct xfs_dir2_leaf_entry*,int,int,int,int,int*,int*) ;
 int FUNC_12 (struct xfs_da_args*,struct xfs_buf*,int,int) ;
 int FUNC_13 (struct xfs_da_args*,struct xfs_buf*) ;

__attribute__((used)) static int
FUNC_14(
 struct xfs_buf *VAR_3,
 struct xfs_da_args *VAR_4,
 int VAR_5)
{
 struct xfs_dir3_icleaf_hdr VAR_6;
 struct xfs_inode *VAR_7 = VAR_4->dp;
 struct xfs_dir2_leaf *VAR_8 = VAR_3->b_addr;
 struct xfs_dir2_leaf_entry *VAR_9;
 struct xfs_dir2_leaf_entry *VAR_10;
 int VAR_11;
 int VAR_12 = 0;
 int VAR_13;
 int VAR_14;
 int VAR_15 = 0;

 FUNC_7(VAR_4, VAR_5);

 VAR_7->d_ops->leaf_hdr_from_disk(&VAR_6, VAR_8);
 VAR_10 = VAR_7->d_ops->leaf_ents_p(VAR_8);





 if (VAR_5 < 0)
  return -VAR_0;
 if (VAR_6.count == VAR_7->d_ops->leaf_max_ents(VAR_4->geo)) {
  if (!VAR_6.stale)
   return -VAR_1;
  VAR_11 = VAR_6.stale > 1;
 } else
  VAR_11 = 0;
 FUNC_0(VAR_5 == 0 || FUNC_1(VAR_10[VAR_5 - 1].hashval) <= VAR_4->hashval);
 FUNC_0(VAR_5 == VAR_6.count ||
        FUNC_1(VAR_10[VAR_5].hashval) >= VAR_4->hashval);

 if (VAR_4->op_flags & VAR_2)
  return 0;





 if (VAR_11)
  FUNC_10(&VAR_6, VAR_10, &VAR_5, &VAR_15,
      &VAR_12, &VAR_14, &VAR_13);
 else if (VAR_6.stale) {



  VAR_14 = VAR_6.count;
  VAR_13 = -1;
 }




 VAR_9 = FUNC_11(&VAR_6, VAR_10, VAR_5, VAR_11, VAR_15,
           VAR_12, &VAR_14, &VAR_13);

 VAR_9->hashval = FUNC_2(VAR_4->hashval);
 VAR_9->address = FUNC_2(FUNC_8(VAR_4->geo,
    VAR_4->blkno, VAR_4->index));

 VAR_7->d_ops->leaf_hdr_to_disk(VAR_8, &VAR_6);
 FUNC_13(VAR_4, VAR_3);
 FUNC_12(VAR_4, VAR_3, VAR_14, VAR_13);
 FUNC_9(VAR_7, VAR_3);
 return 0;
}
