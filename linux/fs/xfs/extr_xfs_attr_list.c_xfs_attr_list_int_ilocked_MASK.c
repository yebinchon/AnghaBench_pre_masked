
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ di_aformat; } ;
struct xfs_inode {TYPE_1__ i_d; } ;
struct xfs_attr_list_context {struct xfs_inode* dp; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct xfs_attr_list_context*) ;
 int FUNC_2 (struct xfs_attr_list_context*) ;
 int FUNC_3 (struct xfs_attr_list_context*) ;
 scalar_t__ FUNC_4 (struct xfs_inode*,int ) ;
 int FUNC_5 (struct xfs_inode*) ;
 int FUNC_6 (struct xfs_inode*,int) ;

int
FUNC_7(
 struct xfs_attr_list_context *VAR_4)
{
 struct xfs_inode *VAR_5 = VAR_4->dp;

 FUNC_0(FUNC_6(VAR_5, VAR_3 | VAR_2));




 if (!FUNC_5(VAR_5))
  return 0;
 else if (VAR_5->i_d.di_aformat == VAR_1)
  return FUNC_3(VAR_4);
 else if (FUNC_4(VAR_5, VAR_0))
  return FUNC_1(VAR_4);
 return FUNC_2(VAR_4);
}
