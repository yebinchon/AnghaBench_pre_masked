
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int xfs_dablk_t ;
struct TYPE_16__ {scalar_t__ inleaf; TYPE_3__* args; } ;
typedef TYPE_1__ xfs_da_state_t ;
struct TYPE_17__ {scalar_t__ magic; int bp; void* hashval; int index; int blkno; } ;
typedef TYPE_2__ xfs_da_state_blk_t ;
struct TYPE_18__ {int geo; struct xfs_inode* dp; } ;
typedef TYPE_3__ xfs_da_args_t ;
struct xfs_inode {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_3__*,int *) ;
 int FUNC_3 (int ,int ) ;
 void* FUNC_4 (struct xfs_inode*,int ,int *) ;
 int FUNC_5 (int ,TYPE_3__*,int ) ;
 int FUNC_6 (TYPE_1__*,TYPE_2__*,TYPE_2__*) ;
 int FUNC_7 (struct xfs_inode*,int ) ;
 int FUNC_8 (TYPE_3__*,int ,int *,scalar_t__) ;

int
FUNC_9(
 xfs_da_state_t *VAR_1,
 xfs_da_state_blk_t *VAR_2,
 xfs_da_state_blk_t *VAR_3)
{
 xfs_da_args_t *VAR_4;
 xfs_dablk_t VAR_5;
 int VAR_6;
 struct xfs_inode *VAR_7;




 VAR_4 = VAR_1->args;
 VAR_7 = VAR_4->dp;
 FUNC_0(VAR_2->magic == VAR_0);
 VAR_6 = FUNC_2(VAR_4, &VAR_5);
 if (VAR_6) {
  return VAR_6;
 }



 VAR_6 = FUNC_8(VAR_4, FUNC_3(VAR_4->geo, VAR_5),
          &VAR_3->bp, VAR_0);
 if (VAR_6)
  return VAR_6;

 VAR_3->blkno = VAR_5;
 VAR_3->magic = VAR_0;




 FUNC_6(VAR_1, VAR_2, VAR_3);
 VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_3);
 if (VAR_6) {
  return VAR_6;
 }



 if (VAR_1->inleaf)
  VAR_6 = FUNC_5(VAR_2->bp, VAR_4, VAR_2->index);
 else
  VAR_6 = FUNC_5(VAR_3->bp, VAR_4, VAR_3->index);



 VAR_2->hashval = FUNC_4(VAR_7, VAR_2->bp, ((void*)0));
 VAR_3->hashval = FUNC_4(VAR_7, VAR_3->bp, ((void*)0));
 FUNC_7(VAR_7, VAR_2->bp);
 FUNC_7(VAR_7, VAR_3->bp);
 return VAR_6;
}
