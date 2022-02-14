
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int * xfs_failaddr_t ;
struct TYPE_2__ {scalar_t__ di_aformat; } ;
struct xfs_inode {TYPE_1__ i_d; } ;
struct xfs_ifork_ops {int * (* verify_attr ) (struct xfs_inode*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct xfs_inode*,int ) ;
 int * VAR_2 ;
 int * FUNC_1 (struct xfs_inode*) ;

xfs_failaddr_t
FUNC_2(
 struct xfs_inode *VAR_3,
 struct xfs_ifork_ops *VAR_4)
{

 if (VAR_3->i_d.di_aformat != VAR_1)
  return ((void*)0);
 if (!FUNC_0(VAR_3, VAR_0))
  return VAR_2;
 return VAR_4->verify_attr(VAR_3);
}
