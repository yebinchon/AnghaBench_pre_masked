
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int xfs_trans_t ;
struct TYPE_13__ {TYPE_1__* d_ops; } ;
typedef TYPE_2__ xfs_inode_t ;
typedef int xfs_dir2_leaf_t ;
struct xfs_dir2_leaf_entry {int address; } ;
typedef struct xfs_dir2_leaf_entry xfs_dir2_leaf_entry_t ;
struct TYPE_14__ {int inumber; } ;
typedef TYPE_3__ xfs_dir2_data_entry_t ;
struct TYPE_15__ {scalar_t__ inumber; int * trans; int filetype; int geo; TYPE_2__* dp; } ;
typedef TYPE_4__ xfs_da_args_t ;
struct xfs_buf {int * b_addr; } ;
struct TYPE_12__ {int (* data_put_ftype ) (TYPE_3__*,int ) ;struct xfs_dir2_leaf_entry* (* leaf_ents_p ) (int *) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 struct xfs_dir2_leaf_entry* FUNC_4 (int *) ;
 int FUNC_5 (TYPE_3__*,int ) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*,struct xfs_buf*,TYPE_3__*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (TYPE_4__*,struct xfs_buf**,int*,struct xfs_buf**) ;
 int FUNC_10 (TYPE_2__*,struct xfs_buf*) ;
 int FUNC_11 (int *,struct xfs_buf*) ;

int
FUNC_12(
 xfs_da_args_t *VAR_0)
{
 struct xfs_buf *VAR_1;
 xfs_dir2_data_entry_t *VAR_2;
 xfs_inode_t *VAR_3;
 int VAR_4;
 int VAR_5;
 struct xfs_buf *VAR_6;
 xfs_dir2_leaf_t *VAR_7;
 xfs_dir2_leaf_entry_t *VAR_8;
 xfs_trans_t *VAR_9;
 struct xfs_dir2_leaf_entry *VAR_10;

 FUNC_6(VAR_0);




 if ((VAR_4 = FUNC_9(VAR_0, &VAR_6, &VAR_5, &VAR_1))) {
  return VAR_4;
 }
 VAR_3 = VAR_0->dp;
 VAR_7 = VAR_6->b_addr;
 VAR_10 = VAR_3->d_ops->leaf_ents_p(VAR_7);



 VAR_8 = &VAR_10[VAR_5];



 VAR_2 = (xfs_dir2_data_entry_t *)
       ((char *)VAR_1->b_addr +
        FUNC_8(VAR_0->geo, FUNC_1(VAR_8->address)));
 FUNC_0(VAR_0->inumber != FUNC_2(VAR_2->inumber));



 VAR_2->inumber = FUNC_3(VAR_0->inumber);
 VAR_3->d_ops->data_put_ftype(VAR_2, VAR_0->filetype);
 VAR_9 = VAR_0->trans;
 FUNC_7(VAR_0, VAR_1, VAR_2);
 FUNC_10(VAR_3, VAR_6);
 FUNC_11(VAR_9, VAR_6);
 return 0;
}
