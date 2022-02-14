
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ xfs_fileoff_t ;
typedef scalar_t__ xfs_filblks_t ;
struct xfs_inode {int i_cowfp; } ;
struct xfs_iext_cursor {int dummy; } ;
struct xfs_bmbt_irec {scalar_t__ br_startoff; scalar_t__ br_blockcount; int br_startblock; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct xfs_inode*,int ,scalar_t__,struct xfs_iext_cursor*,struct xfs_bmbt_irec*) ;
 int FUNC_2 (struct xfs_inode*,struct xfs_bmbt_irec*,int*) ;
 int FUNC_3 (struct xfs_bmbt_irec*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_4(
 struct xfs_inode *VAR_0,
 struct xfs_bmbt_irec *VAR_1,
 bool *VAR_2,
 bool *VAR_3)
{
 xfs_fileoff_t VAR_4 = VAR_1->br_startoff;
 xfs_filblks_t VAR_5 = VAR_1->br_blockcount;
 struct xfs_iext_cursor VAR_6;
 struct xfs_bmbt_irec VAR_7;

 *VAR_3 = 0;





 if (!FUNC_1(VAR_0, VAR_0->i_cowfp, VAR_4, &VAR_6, &VAR_7))
  VAR_7.br_startoff = VAR_4 + VAR_5;
 if (VAR_7.br_startoff > VAR_4) {
  FUNC_3(VAR_1, VAR_1->br_startoff,
    VAR_7.br_startoff - VAR_1->br_startoff);
  return FUNC_2(VAR_0, VAR_1, VAR_2);
 }

 *VAR_2 = 1;
 if (FUNC_0(VAR_7.br_startblock)) {
  FUNC_3(VAR_1, VAR_7.br_startoff, VAR_7.br_blockcount);
  return 0;
 }


 FUNC_3(&VAR_7, VAR_4, VAR_5);
 *VAR_1 = VAR_7;
 *VAR_3 = 1;
 return 0;
}
