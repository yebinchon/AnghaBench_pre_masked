
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ xfs_fileoff_t ;
struct xfs_inode {int dummy; } ;
struct xfs_bmbt_irec {scalar_t__ br_startoff; scalar_t__ br_blockcount; } ;


 int FUNC_0 (int *,struct xfs_inode*,int,struct xfs_bmbt_irec*,int*) ;

int
FUNC_1(
 struct xfs_inode *VAR_0,
 xfs_fileoff_t VAR_1,
 int VAR_2,
 int *VAR_3)
{
 struct xfs_bmbt_irec VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(((void*)0), VAR_0, VAR_2, &VAR_4, VAR_3);
 if (VAR_5 || *VAR_3)
  return VAR_5;

 *VAR_3 = VAR_1 >= VAR_4.br_startoff + VAR_4.br_blockcount;
 return 0;
}
