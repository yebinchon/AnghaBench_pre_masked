
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_9__ ;
typedef struct TYPE_30__ TYPE_8__ ;
typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_11__ ;
typedef struct TYPE_22__ TYPE_10__ ;


typedef scalar_t__ xfs_ino_t ;
struct TYPE_28__ {scalar_t__ magic; } ;
typedef TYPE_5__ xfs_dir2_leaf_t ;
struct xfs_dir2_leaf_entry {int address; } ;
typedef struct xfs_dir2_leaf_entry xfs_dir2_leaf_entry_t ;
typedef TYPE_5__ xfs_dir2_data_hdr_t ;
struct TYPE_29__ {int inumber; } ;
typedef TYPE_7__ xfs_dir2_data_entry_t ;
struct TYPE_27__ {int active; TYPE_9__* blk; } ;
struct TYPE_26__ {TYPE_11__* bp; } ;
struct TYPE_30__ {int extravalid; TYPE_4__ path; TYPE_3__ extrablk; int mp; TYPE_10__* args; } ;
typedef TYPE_8__ xfs_da_state_t ;
struct TYPE_31__ {scalar_t__ magic; size_t index; TYPE_11__* bp; } ;
typedef TYPE_9__ xfs_da_state_blk_t ;
struct TYPE_22__ {scalar_t__ inumber; int filetype; int trans; TYPE_2__* dp; int geo; } ;
typedef TYPE_10__ xfs_da_args_t ;
struct TYPE_25__ {TYPE_1__* d_ops; int i_mount; } ;
struct TYPE_24__ {int (* data_put_ftype ) (TYPE_7__*,int) ;struct xfs_dir2_leaf_entry* (* leaf_ents_p ) (TYPE_5__*) ;} ;
struct TYPE_23__ {TYPE_5__* b_addr; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 struct xfs_dir2_leaf_entry* FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_7__*,int) ;
 int FUNC_7 (TYPE_10__*) ;
 int FUNC_8 (TYPE_8__*,int*) ;
 TYPE_8__* FUNC_9 () ;
 int FUNC_10 (TYPE_8__*) ;
 int FUNC_11 (TYPE_10__*,TYPE_11__*,TYPE_7__*) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,TYPE_11__*) ;

int
FUNC_14(
 xfs_da_args_t *VAR_4)
{
 xfs_da_state_blk_t *VAR_5;
 xfs_dir2_data_hdr_t *VAR_6;
 xfs_dir2_data_entry_t *VAR_7;
 int VAR_8;
 int VAR_9;
 xfs_ino_t VAR_10;
 int VAR_11;
 xfs_dir2_leaf_t *VAR_12;
 xfs_dir2_leaf_entry_t *VAR_13;
 int VAR_14;
 xfs_da_state_t *VAR_15;

 FUNC_7(VAR_4);




 VAR_15 = FUNC_9();
 VAR_15->args = VAR_4;
 VAR_15->mp = VAR_4->dp->i_mount;





 VAR_10 = VAR_4->inumber;
 VAR_11 = VAR_4->filetype;




 VAR_8 = FUNC_8(VAR_15, &VAR_14);
 if (VAR_8) {
  VAR_14 = VAR_8;
 }




 if (VAR_14 == -VAR_0) {
  struct xfs_dir2_leaf_entry *VAR_16;



  VAR_5 = &VAR_15->path.blk[VAR_15->path.active - 1];
  FUNC_0(VAR_5->magic == VAR_2);
  VAR_12 = VAR_5->bp->b_addr;
  VAR_16 = VAR_4->dp->d_ops->leaf_ents_p(VAR_12);
  VAR_13 = &VAR_16[VAR_5->index];
  FUNC_0(VAR_15->extravalid);



  VAR_6 = VAR_15->extrablk.bp->b_addr;
  FUNC_0(VAR_6->magic == FUNC_3(VAR_1) ||
         VAR_6->magic == FUNC_3(VAR_3));
  VAR_7 = (xfs_dir2_data_entry_t *)
        ((char *)VAR_6 +
         FUNC_12(VAR_4->geo,
            FUNC_1(VAR_13->address)));
  FUNC_0(VAR_10 != FUNC_2(VAR_7->inumber));



  VAR_7->inumber = FUNC_4(VAR_10);
  VAR_4->dp->d_ops->data_put_ftype(VAR_7, VAR_11);
  FUNC_11(VAR_4, VAR_15->extrablk.bp, VAR_7);
  VAR_14 = 0;
 }



 else if (VAR_15->extravalid) {
  FUNC_13(VAR_4->trans, VAR_15->extrablk.bp);
  VAR_15->extrablk.bp = ((void*)0);
 }



 for (VAR_9 = 0; VAR_9 < VAR_15->path.active; VAR_9++) {
  FUNC_13(VAR_4->trans, VAR_15->path.blk[VAR_9].bp);
  VAR_15->path.blk[VAR_9].bp = ((void*)0);
 }
 FUNC_10(VAR_15);
 return VAR_14;
}
