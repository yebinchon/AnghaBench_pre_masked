
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_mount {int m_fail_unmount; } ;
struct kobject {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct xfs_mount* FUNC_0 (struct kobject*) ;
 int FUNC_1 (char const*,int ,int*) ;

__attribute__((used)) static ssize_t
FUNC_2(
 struct kobject *VAR_1,
 const char *VAR_2,
 size_t VAR_3)
{
 struct xfs_mount *VAR_4 = FUNC_0(VAR_1);
 int VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1(VAR_2, 0, &VAR_6);
 if (VAR_5)
  return VAR_5;

 if (VAR_6 < 0 || VAR_6 > 1)
  return -VAR_0;

 VAR_4->m_fail_unmount = VAR_6;
 return VAR_3;
}
