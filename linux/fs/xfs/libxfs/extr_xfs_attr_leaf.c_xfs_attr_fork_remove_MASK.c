
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfs_trans {int dummy; } ;
struct TYPE_2__ {scalar_t__ di_anextents; int di_aformat; scalar_t__ di_forkoff; } ;
struct xfs_inode {int * i_afp; TYPE_1__ i_d; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct xfs_inode*,int ) ;
 int FUNC_2 (struct xfs_trans*,struct xfs_inode*,int ) ;

void
FUNC_3(
 struct xfs_inode *VAR_3,
 struct xfs_trans *VAR_4)
{
 FUNC_1(VAR_3, VAR_0);
 VAR_3->i_d.di_forkoff = 0;
 VAR_3->i_d.di_aformat = VAR_1;

 FUNC_0(VAR_3->i_d.di_anextents == 0);
 FUNC_0(VAR_3->i_afp == ((void*)0));

 FUNC_2(VAR_4, VAR_3, VAR_2);
}
