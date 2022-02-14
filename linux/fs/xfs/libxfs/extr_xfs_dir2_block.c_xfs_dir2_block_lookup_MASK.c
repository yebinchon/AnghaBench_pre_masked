
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {TYPE_1__* d_ops; } ;
typedef TYPE_2__ xfs_inode_t ;
struct TYPE_15__ {int address; } ;
typedef TYPE_3__ xfs_dir2_leaf_entry_t ;
typedef int xfs_dir2_data_hdr_t ;
struct TYPE_16__ {int namelen; int name; int inumber; } ;
typedef TYPE_4__ xfs_dir2_data_entry_t ;
typedef int xfs_dir2_block_tail_t ;
struct TYPE_17__ {int trans; int filetype; int inumber; int geo; TYPE_2__* dp; } ;
typedef TYPE_5__ xfs_da_args_t ;
struct xfs_buf {int * b_addr; } ;
struct TYPE_13__ {int (* data_get_ftype ) (TYPE_4__*) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_5__*) ;
 TYPE_3__* FUNC_4 (int *) ;
 int FUNC_5 (TYPE_5__*,struct xfs_buf**,int*) ;
 int * FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (TYPE_2__*,struct xfs_buf*) ;
 int FUNC_9 (TYPE_5__*,int ,int ) ;
 int FUNC_10 (int ,struct xfs_buf*) ;

int
FUNC_11(
 xfs_da_args_t *VAR_0)
{
 xfs_dir2_data_hdr_t *VAR_1;
 xfs_dir2_leaf_entry_t *VAR_2;
 struct xfs_buf *VAR_3;
 xfs_dir2_block_tail_t *VAR_4;
 xfs_dir2_data_entry_t *VAR_5;
 xfs_inode_t *VAR_6;
 int VAR_7;
 int VAR_8;

 FUNC_3(VAR_0);





 if ((VAR_8 = FUNC_5(VAR_0, &VAR_3, &VAR_7)))
  return VAR_8;
 VAR_6 = VAR_0->dp;
 VAR_1 = VAR_3->b_addr;
 FUNC_8(VAR_6, VAR_3);
 VAR_4 = FUNC_6(VAR_0->geo, VAR_1);
 VAR_2 = FUNC_4(VAR_4);



 VAR_5 = (xfs_dir2_data_entry_t *)((char *)VAR_1 +
   FUNC_7(VAR_0->geo,
      FUNC_0(VAR_2[VAR_7].address)));



 VAR_0->inumber = FUNC_1(VAR_5->inumber);
 VAR_0->filetype = VAR_6->d_ops->data_get_ftype(VAR_5);
 VAR_8 = FUNC_9(VAR_0, VAR_5->name, VAR_5->namelen);
 FUNC_10(VAR_0->trans, VAR_3);
 return VAR_8;
}
