
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xfs_dqid_t ;
typedef int uint ;
struct TYPE_2__ {int di_gid; int di_uid; } ;
struct xfs_inode {TYPE_1__ i_d; } ;


 int FUNC_0 (int ) ;



 int FUNC_1 (struct xfs_inode*) ;

xfs_dqid_t
FUNC_2(
 struct xfs_inode *VAR_0,
 uint VAR_1)
{
 switch (VAR_1) {
 case 128:
  return VAR_0->i_d.di_uid;
 case 130:
  return VAR_0->i_d.di_gid;
 case 129:
  return FUNC_1(VAR_0);
 }
 FUNC_0(0);
 return 0;
}
