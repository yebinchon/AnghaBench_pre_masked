
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int * xfs_failaddr_t ;
struct TYPE_3__ {scalar_t__ di_format; } ;
struct xfs_inode {TYPE_1__ i_d; } ;
struct xfs_ifork_ops {int * (* verify_symlink ) (struct xfs_inode*) ;int * (* verify_dir ) (struct xfs_inode*) ;} ;
struct TYPE_4__ {int i_mode; } ;




 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct xfs_inode*) ;
 scalar_t__ VAR_1 ;
 int * FUNC_1 (struct xfs_inode*) ;
 int * FUNC_2 (struct xfs_inode*) ;

xfs_failaddr_t
FUNC_3(
 struct xfs_inode *VAR_2,
 struct xfs_ifork_ops *VAR_3)
{

 if (VAR_2->i_d.di_format != VAR_1)
  return ((void*)0);


 switch (FUNC_0(VAR_2)->i_mode & VAR_0) {
 case 129:
  return VAR_3->verify_dir(VAR_2);
 case 128:
  return VAR_3->verify_symlink(VAR_2);
 default:
  return ((void*)0);
 }
}
