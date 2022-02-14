
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_extlen_t ;
typedef int xfs_agnumber_t ;
typedef scalar_t__ xfs_agblock_t ;
struct xfs_trans {int dummy; } ;
struct xfs_mount {int dummy; } ;
struct xfs_inode {struct xfs_mount* i_mount; } ;
struct xfs_ifork {int if_flags; } ;
struct xfs_iext_cursor {int dummy; } ;
struct xfs_bmbt_irec {scalar_t__ br_state; int br_blockcount; int br_startblock; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct xfs_mount*,int ) ;
 int FUNC_1 (struct xfs_mount*,int ) ;
 int VAR_3 ;
 struct xfs_ifork* FUNC_2 (struct xfs_inode*,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct xfs_inode*,struct xfs_ifork*,int ,struct xfs_iext_cursor*,struct xfs_bmbt_irec*) ;
 int FUNC_5 (struct xfs_ifork*,struct xfs_iext_cursor*,struct xfs_bmbt_irec*) ;
 int FUNC_6 (struct xfs_trans*,struct xfs_inode*,int ) ;
 int FUNC_7 (struct xfs_mount*,struct xfs_trans*,int ,scalar_t__,int ,scalar_t__*,int *,int) ;

int
FUNC_8(
 struct xfs_trans *VAR_4,
 struct xfs_inode *VAR_5,
 bool *VAR_6)
{
 struct xfs_bmbt_irec VAR_7;
 struct xfs_mount *VAR_8 = VAR_5->i_mount;
 struct xfs_ifork *VAR_9;
 xfs_agnumber_t VAR_10;
 xfs_agblock_t VAR_11;
 xfs_extlen_t VAR_12;
 xfs_agblock_t VAR_13;
 xfs_extlen_t VAR_14;
 struct xfs_iext_cursor VAR_15;
 bool VAR_16;
 int VAR_17;

 VAR_9 = FUNC_2(VAR_5, VAR_1);
 if (!(VAR_9->if_flags & VAR_3)) {
  VAR_17 = FUNC_6(VAR_4, VAR_5, VAR_1);
  if (VAR_17)
   return VAR_17;
 }

 *VAR_6 = 0;
 VAR_16 = FUNC_4(VAR_5, VAR_9, 0, &VAR_15, &VAR_7);
 while (VAR_16) {
  if (FUNC_3(VAR_7.br_startblock) ||
      VAR_7.br_state != VAR_2)
   goto next;
  VAR_10 = FUNC_1(VAR_8, VAR_7.br_startblock);
  VAR_11 = FUNC_0(VAR_8, VAR_7.br_startblock);
  VAR_12 = VAR_7.br_blockcount;

  VAR_17 = FUNC_7(VAR_8, VAR_4, VAR_10, VAR_11, VAR_12,
    &VAR_13, &VAR_14, 0);
  if (VAR_17)
   return VAR_17;

  if (VAR_13 != VAR_0) {
   *VAR_6 = 1;
   return 0;
  }
next:
  VAR_16 = FUNC_5(VAR_9, &VAR_15, &VAR_7);
 }

 return 0;
}
