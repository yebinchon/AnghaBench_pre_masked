
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_mount {int m_fail_unmount; } ;
struct kobject {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct xfs_mount* FUNC_0 (struct kobject*) ;
 int FUNC_1 (char*,int ,char*,int) ;

__attribute__((used)) static ssize_t
FUNC_2(
 struct kobject *VAR_1,
 char *VAR_2)
{
 struct xfs_mount *VAR_3 = FUNC_0(VAR_1);

 return FUNC_1(VAR_2, VAR_0, "%d\n", VAR_3->m_fail_unmount);
}
