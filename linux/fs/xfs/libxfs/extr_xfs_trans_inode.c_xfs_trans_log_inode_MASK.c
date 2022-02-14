
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int t_flags; } ;
typedef TYPE_3__ xfs_trans_t ;
struct TYPE_12__ {TYPE_2__* i_itemp; } ;
typedef TYPE_4__ xfs_inode_t ;
typedef int uint ;
struct inode {int i_state; int i_lock; } ;
struct TYPE_9__ {int li_flags; } ;
struct TYPE_10__ {int ili_fsync_fields; int ili_last_fields; int ili_fields; TYPE_1__ ili_item; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct inode* FUNC_2 (TYPE_4__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (struct inode*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (TYPE_4__*,int ) ;

void
FUNC_8(
 xfs_trans_t *VAR_6,
 xfs_inode_t *VAR_7,
 uint VAR_8)
{
 struct inode *VAR_9 = FUNC_2(VAR_7);

 FUNC_0(VAR_7->i_itemp != ((void*)0));
 FUNC_0(FUNC_7(VAR_7, VAR_2));







 if (VAR_9->i_state & (VAR_0 | VAR_1)) {
  FUNC_4(&VAR_9->i_lock);
  VAR_9->i_state &= ~(VAR_0 | VAR_1);
  FUNC_5(&VAR_9->i_lock);
 }
 VAR_7->i_itemp->ili_fsync_fields |= VAR_8;
 if (!FUNC_6(VAR_4, &VAR_7->i_itemp->ili_item.li_flags) &&
     FUNC_1(FUNC_2(VAR_7))) {
  if (FUNC_3(FUNC_2(VAR_7), VAR_8 & VAR_3))
   VAR_8 |= VAR_3;
 }

 VAR_6->t_flags |= VAR_5;
 VAR_8 |= VAR_7->i_itemp->ili_last_fields;
 VAR_7->i_itemp->ili_fields |= VAR_8;
}
