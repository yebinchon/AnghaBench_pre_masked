
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int xfs_dir2_db_t ;
struct TYPE_8__ {scalar_t__ total; struct xfs_inode* dp; } ;
typedef TYPE_2__ xfs_da_args_t ;
struct xfs_inode {TYPE_1__* d_ops; } ;
struct xfs_dir3_icfree_hdr {int nvalid; int nused; } ;
struct xfs_dir2_free {int dummy; } ;
struct xfs_dir2_data_hdr {int dummy; } ;
struct xfs_buf {int dummy; } ;
typedef int __be16 ;
struct TYPE_7__ {int (* free_hdr_to_disk ) (struct xfs_dir2_free*,struct xfs_dir3_icfree_hdr*) ;int * (* free_bests_p ) (struct xfs_dir2_free*) ;int (* free_hdr_from_disk ) (struct xfs_dir3_icfree_hdr*,struct xfs_dir2_free*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct xfs_dir3_icfree_hdr*,struct xfs_dir2_free*) ;
 int * FUNC_2 (struct xfs_dir2_free*) ;
 int FUNC_3 (struct xfs_dir2_free*,struct xfs_dir3_icfree_hdr*) ;
 int FUNC_4 (TYPE_2__*,struct xfs_buf*,int,int) ;
 int FUNC_5 (TYPE_2__*,struct xfs_buf*) ;
 int FUNC_6 (TYPE_2__*,int ,struct xfs_buf*) ;

__attribute__((used)) static int
FUNC_7(
 xfs_da_args_t *VAR_2,
 struct xfs_dir2_data_hdr *VAR_3,
 struct xfs_dir2_free *VAR_4,
 xfs_dir2_db_t VAR_5,
 int VAR_6,
 struct xfs_buf *VAR_7,
 int VAR_8)
{
 int VAR_9 = 0;
 __be16 *VAR_10;
 struct xfs_dir3_icfree_hdr VAR_11;
 struct xfs_inode *VAR_12 = VAR_2->dp;

 VAR_12->d_ops->free_hdr_from_disk(&VAR_11, VAR_4);
 VAR_10 = VAR_12->d_ops->free_bests_p(VAR_4);
 if (VAR_3) {




  VAR_10[VAR_6] = FUNC_0(VAR_8);
  FUNC_4(VAR_2, VAR_7, VAR_6, VAR_6);
  return 0;
 }


 VAR_11.nused--;






 if (VAR_6 == VAR_11.nvalid - 1) {
  int VAR_13;

  for (VAR_13 = VAR_6 - 1; VAR_13 >= 0; VAR_13--) {
   if (VAR_10[VAR_13] != FUNC_0(VAR_1))
    break;
  }
  VAR_11.nvalid = VAR_13 + 1;
  VAR_9 = 0;
 } else {

  VAR_10[VAR_6] = FUNC_0(VAR_1);
  VAR_9 = 1;
 }

 VAR_12->d_ops->free_hdr_to_disk(VAR_4, &VAR_11);
 FUNC_5(VAR_2, VAR_7);





 if (!VAR_11.nused) {
  int VAR_14;

  VAR_14 = FUNC_6(VAR_2, VAR_5, VAR_7);
  if (VAR_14 == 0) {
   VAR_7 = ((void*)0);
   VAR_9 = 0;
  } else if (VAR_14 != -VAR_0 || VAR_2->total != 0)
   return VAR_14;





 }


 if (VAR_9)
  FUNC_4(VAR_2, VAR_7, VAR_6, VAR_6);
 return 0;
}
