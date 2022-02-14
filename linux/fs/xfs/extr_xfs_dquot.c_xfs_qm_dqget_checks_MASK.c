
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
struct xfs_mount {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;



 int FUNC_1 (struct xfs_mount*) ;
 int FUNC_2 (struct xfs_mount*) ;
 int FUNC_3 (struct xfs_mount*) ;
 int FUNC_4 (struct xfs_mount*) ;

__attribute__((used)) static int
FUNC_5(
 struct xfs_mount *VAR_2,
 uint VAR_3)
{
 if (FUNC_0(!FUNC_3(VAR_2)))
  return -VAR_1;

 switch (VAR_3) {
 case 128:
  if (!FUNC_4(VAR_2))
   return -VAR_1;
  return 0;
 case 130:
  if (!FUNC_1(VAR_2))
   return -VAR_1;
  return 0;
 case 129:
  if (!FUNC_2(VAR_2))
   return -VAR_1;
  return 0;
 default:
  FUNC_0(0);
  return -VAR_0;
 }
}
