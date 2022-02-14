
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_trans {int t_flags; int t_mountp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xfs_trans**) ;
 int FUNC_1 (struct xfs_trans*) ;
 int FUNC_2 (struct xfs_trans**) ;
 int FUNC_3 (int ,int ) ;

int
FUNC_4(
 struct xfs_trans **VAR_2)
{
 int VAR_3;





 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3)
  return VAR_3;
 if ((*VAR_2)->t_flags & VAR_1) {
  VAR_3 = FUNC_2(VAR_2);
  if (VAR_3) {
   FUNC_3((*VAR_2)->t_mountp,
        VAR_0);
   return VAR_3;
  }
 }
 FUNC_1(*VAR_2);
 return 0;
}
