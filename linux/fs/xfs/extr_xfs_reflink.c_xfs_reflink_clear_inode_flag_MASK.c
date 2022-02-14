
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfs_trans {int dummy; } ;
struct TYPE_2__ {int di_flags2; } ;
struct xfs_inode {TYPE_1__ i_d; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct xfs_inode*) ;
 int FUNC_2 (struct xfs_inode*) ;
 int FUNC_3 (struct xfs_inode*) ;
 int FUNC_4 (struct xfs_inode*,struct xfs_trans**,int ,int ,int) ;
 int FUNC_5 (struct xfs_trans*,struct xfs_inode*,int*) ;
 int FUNC_6 (struct xfs_trans*,struct xfs_inode*,int ) ;

int
FUNC_7(
 struct xfs_inode *VAR_3,
 struct xfs_trans **VAR_4)
{
 bool VAR_5;
 int VAR_6 = 0;

 FUNC_0(FUNC_3(VAR_3));

 VAR_6 = FUNC_5(*VAR_4, VAR_3, &VAR_5);
 if (VAR_6 || VAR_5)
  return VAR_6;





 VAR_6 = FUNC_4(VAR_3, VAR_4, 0, VAR_0, 1);
 if (VAR_6)
  return VAR_6;


 FUNC_1(VAR_3);
 VAR_3->i_d.di_flags2 &= ~VAR_1;
 FUNC_2(VAR_3);
 FUNC_6(*VAR_4, VAR_3, VAR_2);

 return VAR_6;
}
