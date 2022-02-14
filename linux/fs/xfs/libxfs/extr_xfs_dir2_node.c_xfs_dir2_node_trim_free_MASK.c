
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int xfs_trans_t ;
struct TYPE_8__ {TYPE_1__* d_ops; } ;
typedef TYPE_2__ xfs_inode_t ;
typedef scalar_t__ xfs_fileoff_t ;
typedef int xfs_dir2_free_t ;
typedef int xfs_dablk_t ;
struct TYPE_9__ {int geo; int * trans; TYPE_2__* dp; } ;
typedef TYPE_3__ xfs_da_args_t ;
struct xfs_dir3_icfree_hdr {scalar_t__ nused; } ;
struct xfs_buf {int * b_addr; } ;
struct TYPE_7__ {int (* free_hdr_from_disk ) (struct xfs_dir3_icfree_hdr*,int *) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct xfs_dir3_icfree_hdr*,int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,TYPE_2__*,scalar_t__,struct xfs_buf**) ;
 int FUNC_4 (TYPE_3__*,int ,struct xfs_buf*) ;
 int FUNC_5 (int *,struct xfs_buf*) ;

int
FUNC_6(
 xfs_da_args_t *VAR_1,
 xfs_fileoff_t VAR_2,
 int *VAR_3)
{
 struct xfs_buf *VAR_4;
 xfs_inode_t *VAR_5;
 int VAR_6;
 xfs_dir2_free_t *VAR_7;
 xfs_trans_t *VAR_8;
 struct xfs_dir3_icfree_hdr VAR_9;

 VAR_5 = VAR_1->dp;
 VAR_8 = VAR_1->trans;

 *VAR_3 = 0;




 VAR_6 = FUNC_3(VAR_8, VAR_5, VAR_2, &VAR_4);
 if (VAR_6)
  return VAR_6;




 if (!VAR_4)
  return 0;
 VAR_7 = VAR_4->b_addr;
 VAR_5->d_ops->free_hdr_from_disk(&VAR_9, VAR_7);




 if (VAR_9.nused > 0) {
  FUNC_5(VAR_8, VAR_4);
  return 0;
 }



 VAR_6 = FUNC_4(VAR_1,
   FUNC_2(VAR_1->geo, (xfs_dablk_t)VAR_2), VAR_4);
 if (VAR_6) {





  FUNC_0(VAR_6 != -VAR_0);
  FUNC_5(VAR_8, VAR_4);
  return VAR_6;
 }



 *VAR_3 = 1;
 return 0;
}
