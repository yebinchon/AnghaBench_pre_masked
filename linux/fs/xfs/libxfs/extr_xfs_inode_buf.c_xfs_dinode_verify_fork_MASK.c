
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * xfs_failaddr_t ;
typedef int uint32_t ;
struct xfs_mount {int dummy; } ;
struct xfs_dinode {int di_size; int di_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct xfs_dinode*,int) ;
 int FUNC_2 (struct xfs_dinode*,struct xfs_mount*,int) ;
 int FUNC_3 (struct xfs_dinode*,int) ;
 int FUNC_4 (struct xfs_dinode*,struct xfs_mount*,int) ;



 int * VAR_4 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static xfs_failaddr_t
FUNC_7(
 struct xfs_dinode *VAR_5,
 struct xfs_mount *VAR_6,
 int VAR_7)
{
 uint32_t VAR_8 = FUNC_3(VAR_5, VAR_7);

 switch (FUNC_1(VAR_5, VAR_7)) {
 case 128:



  if (VAR_7 == VAR_3) {
   if (FUNC_0(FUNC_5(VAR_5->di_mode)))
    return VAR_4;
   if (FUNC_6(VAR_5->di_size) >
     FUNC_4(VAR_5, VAR_6, VAR_7))
    return VAR_4;
  }
  if (VAR_8)
   return VAR_4;
  break;
 case 129:
  if (VAR_8 > FUNC_2(VAR_5, VAR_6, VAR_7))
   return VAR_4;
  break;
 case 130:
  if (VAR_7 == VAR_2) {
   if (VAR_8 > VAR_0)
    return VAR_4;
  } else if (VAR_8 > VAR_1) {
   return VAR_4;
  }
  break;
 default:
  return VAR_4;
 }
 return ((void*)0);
}
