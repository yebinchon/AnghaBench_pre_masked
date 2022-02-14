
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int xfs_trans_t ;
struct TYPE_12__ {TYPE_1__* d_ops; } ;
typedef TYPE_2__ xfs_inode_t ;
typedef int xfs_dir2_leaf_t ;
struct xfs_dir2_leaf_entry {int address; } ;
typedef struct xfs_dir2_leaf_entry xfs_dir2_leaf_entry_t ;
struct TYPE_13__ {int namelen; int name; int inumber; } ;
typedef TYPE_3__ xfs_dir2_data_entry_t ;
struct TYPE_14__ {int filetype; int inumber; int geo; TYPE_2__* dp; int * trans; } ;
typedef TYPE_4__ xfs_da_args_t ;
struct xfs_buf {int * b_addr; } ;
struct TYPE_11__ {int (* data_get_ftype ) (TYPE_3__*) ;struct xfs_dir2_leaf_entry* (* leaf_ents_p ) (int *) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct xfs_dir2_leaf_entry* FUNC_2 (int *) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_4__*,struct xfs_buf**,int*,struct xfs_buf**) ;
 int FUNC_7 (TYPE_2__*,struct xfs_buf*) ;
 int FUNC_8 (TYPE_4__*,int ,int ) ;
 int FUNC_9 (int *,struct xfs_buf*) ;

int
FUNC_10(
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

 FUNC_4(VAR_0);




 if ((VAR_4 = FUNC_6(VAR_0, &VAR_6, &VAR_5, &VAR_1))) {
  return VAR_4;
 }
 VAR_9 = VAR_0->trans;
 VAR_3 = VAR_0->dp;
 FUNC_7(VAR_3, VAR_6);
 VAR_7 = VAR_6->b_addr;
 VAR_10 = VAR_3->d_ops->leaf_ents_p(VAR_7);



 VAR_8 = &VAR_10[VAR_5];




 VAR_2 = (xfs_dir2_data_entry_t *)
       ((char *)VAR_1->b_addr +
        FUNC_5(VAR_0->geo, FUNC_0(VAR_8->address)));



 VAR_0->inumber = FUNC_1(VAR_2->inumber);
 VAR_0->filetype = VAR_3->d_ops->data_get_ftype(VAR_2);
 VAR_4 = FUNC_8(VAR_0, VAR_2->name, VAR_2->namelen);
 FUNC_9(VAR_9, VAR_1);
 FUNC_9(VAR_9, VAR_6);
 return VAR_4;
}
