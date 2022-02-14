
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_ifork {int dummy; } ;
struct xfs_inode {struct xfs_ifork i_df; struct xfs_ifork* i_afp; struct xfs_ifork* i_cowfp; } ;


 int VAR_0 ;
 int VAR_1 ;

struct xfs_ifork *
FUNC_0(
 struct xfs_inode *VAR_2,
 int VAR_3)
{
 if (VAR_3 & VAR_1)
  return VAR_2->i_cowfp;
 else if (VAR_3 & VAR_0)
  return VAR_2->i_afp;
 return &VAR_2->i_df;
}
