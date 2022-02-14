
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_mount {scalar_t__ m_fsname; } ;
struct va_format {int dummy; } ;


 int FUNC_0 (char*,char const*,struct va_format*,...) ;

__attribute__((used)) static void
FUNC_1(
 const char *VAR_0,
 const struct xfs_mount *VAR_1,
 struct va_format *VAR_2)
{
 if (VAR_1 && VAR_1->m_fsname) {
  FUNC_0("%sXFS (%s): %pV\n", VAR_0, VAR_1->m_fsname, VAR_2);
  return;
 }
 FUNC_0("%sXFS: %pV\n", VAR_0, VAR_2);
}
