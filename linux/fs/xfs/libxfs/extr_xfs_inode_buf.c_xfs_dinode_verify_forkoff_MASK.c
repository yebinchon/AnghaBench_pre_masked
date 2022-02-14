
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * xfs_failaddr_t ;
typedef int xfs_dev_t ;
struct xfs_mount {int dummy; } ;
struct xfs_dinode {int di_format; int di_forkoff; int di_version; } ;


 int FUNC_0 (struct xfs_dinode*) ;




 int FUNC_1 (struct xfs_mount*,int ) ;
 int * VAR_0 ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static xfs_failaddr_t
FUNC_3(
 struct xfs_dinode *VAR_1,
 struct xfs_mount *VAR_2)
{
 if (!FUNC_0(VAR_1))
  return ((void*)0);

 switch (VAR_1->di_format) {
 case 130:
  if (VAR_1->di_forkoff != (FUNC_2(sizeof(xfs_dev_t), 8) >> 3))
   return VAR_0;
  break;
 case 128:
 case 129:
 case 131:
  if (VAR_1->di_forkoff >= (FUNC_1(VAR_2, VAR_1->di_version) >> 3))
   return VAR_0;
  break;
 default:
  return VAR_0;
 }
 return ((void*)0);
}
