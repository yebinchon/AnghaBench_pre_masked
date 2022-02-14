
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ xfs_fileoff_t ;
typedef scalar_t__ xfs_filblks_t ;
struct xfs_inode {int i_cowfp; } ;
struct xfs_iext_cursor {int dummy; } ;
struct xfs_btree_cur {int dummy; } ;
struct xfs_bmbt_irec {scalar_t__ br_startoff; scalar_t__ br_state; int br_blockcount; int br_startblock; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,struct xfs_inode*,int ,struct xfs_iext_cursor*,struct xfs_btree_cur**,struct xfs_bmbt_irec*,int*) ;
 int FUNC_3 (struct xfs_inode*,int ,scalar_t__,struct xfs_iext_cursor*,struct xfs_bmbt_irec*) ;
 scalar_t__ FUNC_4 (int ,struct xfs_iext_cursor*,struct xfs_bmbt_irec*) ;
 int FUNC_5 (struct xfs_bmbt_irec*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_6(
 struct xfs_inode *VAR_3,
 xfs_fileoff_t VAR_4,
 xfs_filblks_t VAR_5)
{
 struct xfs_iext_cursor VAR_6;
 struct xfs_bmbt_irec VAR_7;
 struct xfs_btree_cur *VAR_8 = ((void*)0);
 int VAR_9;
 int VAR_10 = 0;

 if (!FUNC_3(VAR_3, VAR_3->i_cowfp, VAR_4, &VAR_6, &VAR_7))
  return 0;

 do {
  if (VAR_7.br_startoff >= VAR_4 + VAR_5)
   break;
  if (VAR_7.br_state == VAR_2)
   continue;
  if (FUNC_0(FUNC_1(VAR_7.br_startblock)))
   return -VAR_0;

  FUNC_5(&VAR_7, VAR_4, VAR_5);
  if (!VAR_7.br_blockcount)
   continue;

  VAR_7.br_state = VAR_2;
  VAR_10 = FUNC_2(((void*)0), VAR_3,
    VAR_1, &VAR_6, &VAR_8, &VAR_7,
    &VAR_9);
  if (VAR_10)
   return VAR_10;
 } while (FUNC_4(VAR_3->i_cowfp, &VAR_6, &VAR_7));

 return VAR_10;
}
