
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ di_aformat; } ;
struct xfs_inode {TYPE_1__ i_d; } ;
struct xfs_da_args {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct xfs_da_args*) ;
 int FUNC_2 (struct xfs_da_args*) ;
 int FUNC_3 (struct xfs_da_args*) ;
 scalar_t__ FUNC_4 (struct xfs_inode*,int ) ;
 int FUNC_5 (struct xfs_inode*) ;
 int FUNC_6 (struct xfs_inode*,int) ;

int
FUNC_7(
 struct xfs_inode *VAR_5,
 struct xfs_da_args *VAR_6)
{
 FUNC_0(FUNC_6(VAR_5, VAR_4 | VAR_3));

 if (!FUNC_5(VAR_5))
  return -VAR_0;
 else if (VAR_5->i_d.di_aformat == VAR_2)
  return FUNC_3(VAR_6);
 else if (FUNC_4(VAR_5, VAR_1))
  return FUNC_1(VAR_6);
 else
  return FUNC_2(VAR_6);
}
