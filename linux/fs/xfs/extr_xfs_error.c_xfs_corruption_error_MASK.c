
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_failaddr_t ;
struct xfs_mount {int dummy; } ;


 int FUNC_0 (struct xfs_mount*,char*) ;
 int VAR_0 ;
 int FUNC_1 (char const*,int,struct xfs_mount*,char const*,int,int ) ;
 int FUNC_2 (void*,size_t) ;

void
FUNC_3(
 const char *VAR_1,
 int VAR_2,
 struct xfs_mount *VAR_3,
 void *VAR_4,
 size_t VAR_5,
 const char *VAR_6,
 int VAR_7,
 xfs_failaddr_t VAR_8)
{
 if (VAR_2 <= VAR_0)
  FUNC_2(VAR_4, VAR_5);
 FUNC_1(VAR_1, VAR_2, VAR_3, VAR_6, VAR_7, VAR_8);
 FUNC_0(VAR_3, "Corruption detected. Unmount and run xfs_repair");
}
