
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ xfs_fileoff_t ;
struct xfs_ifork {int if_flags; } ;
struct xfs_inode {struct xfs_ifork i_df; } ;
struct xfs_iext_cursor {int dummy; } ;
struct xfs_bmbt_irec {int br_startblock; scalar_t__ br_blockcount; scalar_t__ br_startoff; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct xfs_inode*,int ,struct xfs_iext_cursor*,struct xfs_bmbt_irec*,struct xfs_bmbt_irec*) ;
 int FUNC_3 (struct xfs_ifork*,struct xfs_iext_cursor*,struct xfs_bmbt_irec*) ;
 int FUNC_4 (struct xfs_inode*,struct xfs_ifork*,scalar_t__*,struct xfs_iext_cursor*,struct xfs_bmbt_irec*) ;
 int FUNC_5 (struct xfs_ifork*,struct xfs_iext_cursor*,struct xfs_bmbt_irec*) ;
 int FUNC_6 (struct xfs_inode*,int ) ;
 int FUNC_7 (struct xfs_inode*,int ) ;
 int FUNC_8 (struct xfs_bmbt_irec*,scalar_t__,scalar_t__) ;

int
FUNC_9(
 struct xfs_inode *VAR_3,
 xfs_fileoff_t VAR_4,
 xfs_fileoff_t VAR_5)
{
 struct xfs_ifork *VAR_6 = &VAR_3->i_df;
 xfs_fileoff_t VAR_7 = VAR_4 + VAR_5;
 struct xfs_bmbt_irec VAR_8, VAR_9;
 struct xfs_iext_cursor VAR_10;
 int VAR_11 = 0;

 FUNC_0(VAR_6->if_flags & VAR_1);

 FUNC_6(VAR_3, VAR_2);
 if (!FUNC_4(VAR_3, VAR_6, &VAR_7, &VAR_10, &VAR_8))
  goto out_unlock;

 while (VAR_8.br_startoff + VAR_8.br_blockcount > VAR_4) {
  VAR_9 = VAR_8;
  FUNC_8(&VAR_9, VAR_4, VAR_5);






  if (!VAR_9.br_blockcount ||
      !FUNC_1(VAR_9.br_startblock)) {
   if (!FUNC_5(VAR_6, &VAR_10, &VAR_8))
    break;
   continue;
  }

  VAR_11 = FUNC_2(VAR_3, VAR_0, &VAR_10,
        &VAR_8, &VAR_9);
  if (VAR_11 || !FUNC_3(VAR_6, &VAR_10, &VAR_8))
   break;
 }

out_unlock:
 FUNC_7(VAR_3, VAR_2);
 return VAR_11;
}
