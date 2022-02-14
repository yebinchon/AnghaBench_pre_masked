
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ di_aformat; } ;
struct xfs_inode {TYPE_2__* i_afp; TYPE_1__ i_d; } ;
struct xfs_da_args {struct xfs_inode* dp; } ;
struct TYPE_4__ {int if_flags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct xfs_da_args*) ;
 int FUNC_2 (struct xfs_da_args*) ;
 int FUNC_3 (struct xfs_da_args*) ;
 scalar_t__ FUNC_4 (struct xfs_inode*,int ) ;
 int FUNC_5 (struct xfs_inode*) ;

int
FUNC_6(
 struct xfs_da_args *VAR_4)
{
 struct xfs_inode *VAR_5 = VAR_4->dp;
 int VAR_6;

 if (!FUNC_5(VAR_5)) {
  VAR_6 = -VAR_0;
 } else if (VAR_5->i_d.di_aformat == VAR_2) {
  FUNC_0(VAR_5->i_afp->if_flags & VAR_3);
  VAR_6 = FUNC_3(VAR_4);
 } else if (FUNC_4(VAR_5, VAR_1)) {
  VAR_6 = FUNC_1(VAR_4);
 } else {
  VAR_6 = FUNC_2(VAR_4);
 }

 return VAR_6;
}
