
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfs_mount {int dummy; } ;
struct xfs_inode {TYPE_1__* i_itemp; struct xfs_mount* i_mount; } ;
struct xfs_bmbt_irec {scalar_t__ br_startblock; scalar_t__ br_state; int br_blockcount; int br_startoff; } ;
struct iomap {int flags; int dax_dev; int bdev; void* length; void* offset; int type; void* addr; } ;
struct TYPE_2__ {int ili_fsync_fields; } ;


 void* FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct xfs_inode*) ;
 scalar_t__ VAR_9 ;
 void* FUNC_2 (struct xfs_mount*,int ) ;
 int VAR_10 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct xfs_inode*,struct xfs_bmbt_irec*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct xfs_inode*,scalar_t__) ;
 scalar_t__ FUNC_9 (struct xfs_inode*) ;
 int FUNC_10 (struct xfs_inode*,scalar_t__) ;

int
FUNC_11(
 struct xfs_inode *VAR_11,
 struct iomap *VAR_12,
 struct xfs_bmbt_irec *VAR_13,
 bool VAR_14)
{
 struct xfs_mount *VAR_15 = VAR_11->i_mount;

 if (FUNC_4(!FUNC_10(VAR_11, VAR_13->br_startblock)))
  return FUNC_5(VAR_11, VAR_13);

 if (VAR_13->br_startblock == VAR_1) {
  VAR_12->addr = VAR_7;
  VAR_12->type = VAR_5;
 } else if (VAR_13->br_startblock == VAR_0 ||
     FUNC_3(VAR_13->br_startblock)) {
  VAR_12->addr = VAR_7;
  VAR_12->type = VAR_2;
 } else {
  VAR_12->addr = FUNC_0(FUNC_8(VAR_11, VAR_13->br_startblock));
  if (VAR_13->br_state == VAR_9)
   VAR_12->type = VAR_8;
  else
   VAR_12->type = VAR_6;
 }
 VAR_12->offset = FUNC_2(VAR_15, VAR_13->br_startoff);
 VAR_12->length = FUNC_2(VAR_15, VAR_13->br_blockcount);
 VAR_12->bdev = FUNC_6(FUNC_1(VAR_11));
 VAR_12->dax_dev = FUNC_7(FUNC_1(VAR_11));

 if (FUNC_9(VAR_11) &&
     (VAR_11->i_itemp->ili_fsync_fields & ~VAR_10))
  VAR_12->flags |= VAR_3;
 if (VAR_14)
  VAR_12->flags |= VAR_4;
 return 0;
}
