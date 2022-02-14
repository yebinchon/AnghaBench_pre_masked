
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_mount {int dummy; } ;


 int VAR_0 ;



 int FUNC_0 (struct xfs_mount*) ;
 int FUNC_1 (struct xfs_mount*) ;
 int FUNC_2 (struct xfs_mount*) ;

__attribute__((used)) static inline int FUNC_3(struct xfs_mount *VAR_1, int VAR_2)
{
 switch (VAR_2 & VAR_0) {
 case 128:
  return FUNC_2(VAR_1);
 case 130:
  return FUNC_0(VAR_1);
 case 129:
  return FUNC_1(VAR_1);
 default:
  return 0;
 }
}
