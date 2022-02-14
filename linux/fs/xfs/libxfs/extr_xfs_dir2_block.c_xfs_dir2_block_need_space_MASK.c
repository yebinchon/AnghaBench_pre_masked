
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfs_dir2_data_unused {int length; int freetag; } ;
typedef struct xfs_dir2_data_unused xfs_dir2_data_unused_t ;
typedef int uint ;
struct xfs_inode {TYPE_1__* d_ops; } ;
struct xfs_dir2_leaf_entry {int dummy; } ;
struct xfs_dir2_data_hdr {int dummy; } ;
struct xfs_dir2_data_free {int offset; int length; } ;
struct xfs_dir2_block_tail {scalar_t__ stale; } ;
typedef int __be16 ;
struct TYPE_2__ {struct xfs_dir2_data_free* (* data_bestfree_p ) (struct xfs_dir2_data_hdr*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 struct xfs_dir2_data_free* FUNC_2 (struct xfs_dir2_data_hdr*) ;

__attribute__((used)) static void
FUNC_3(
 struct xfs_inode *VAR_1,
 struct xfs_dir2_data_hdr *VAR_2,
 struct xfs_dir2_block_tail *VAR_3,
 struct xfs_dir2_leaf_entry *VAR_4,
 __be16 **VAR_5,
 struct xfs_dir2_data_unused **VAR_6,
 struct xfs_dir2_data_unused **VAR_7,
 int *VAR_8,
 int VAR_9)
{
 struct xfs_dir2_data_free *VAR_10;
 __be16 *VAR_11 = ((void*)0);
 struct xfs_dir2_data_unused *VAR_12 = ((void*)0);
 struct xfs_dir2_data_unused *VAR_13 = ((void*)0);

 *VAR_8 = 0;
 VAR_10 = VAR_1->d_ops->data_bestfree_p(VAR_2);




 if (VAR_3->stale) {
  if (FUNC_0(VAR_10[0].length) >= VAR_9) {



   VAR_12 = (xfs_dir2_data_unused_t *)
         ((char *)VAR_2 + FUNC_0(VAR_10[0].offset));
   goto out;
  }





  *VAR_8 = 1;
  VAR_11 = (__be16 *)VAR_4 - 1;


  VAR_12 = (xfs_dir2_data_unused_t *)((char *)VAR_2 + FUNC_0(*VAR_11));





  if (FUNC_0(VAR_12->freetag) == VAR_0) {
   if (FUNC_0(VAR_12->length) + (FUNC_1(VAR_3->stale) - 1) *
       (uint)sizeof(*VAR_4) < VAR_9)
    VAR_12 = ((void*)0);
  } else if ((FUNC_1(VAR_3->stale) - 1) * (uint)sizeof(*VAR_4) < VAR_9)
   VAR_12 = ((void*)0);
  else
   VAR_12 = (xfs_dir2_data_unused_t *)VAR_4;
  goto out;
 }





 VAR_11 = (__be16 *)VAR_4 - 1;


 VAR_13 = (xfs_dir2_data_unused_t *)((char *)VAR_2 + FUNC_0(*VAR_11));






 if (FUNC_0(VAR_13->freetag) == VAR_0) {



  VAR_12 = (xfs_dir2_data_unused_t *)
        ((char *)VAR_2 + FUNC_0(VAR_10[0].offset));
  if (VAR_12 != VAR_13) {



   if (FUNC_0(VAR_12->length) < VAR_9)
    VAR_12 = ((void*)0);
   goto out;
  }




  if (FUNC_0(VAR_12->length) < VAR_9 + (uint)sizeof(*VAR_4)) {



   if (FUNC_0(VAR_10[1].length) >= VAR_9)
    VAR_12 = (xfs_dir2_data_unused_t *)
          ((char *)VAR_2 + FUNC_0(VAR_10[1].offset));
   else
    VAR_12 = ((void*)0);
  }
 }
out:
 *VAR_5 = VAR_11;
 *VAR_6 = VAR_12;
 *VAR_7 = VAR_13;
}
