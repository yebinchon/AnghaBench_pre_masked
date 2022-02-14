
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_filecheck_sysfs_entry {int dummy; } ;


 scalar_t__ FUNC_0 (struct ocfs2_filecheck_sysfs_entry*) ;

__attribute__((used)) static int
FUNC_1(struct ocfs2_filecheck_sysfs_entry *VAR_0,
         unsigned int VAR_1)
{
 unsigned int VAR_2 = 0;
 unsigned int VAR_3 = 0;

 while (VAR_2++ < VAR_1) {
  if (FUNC_0(VAR_0))
   VAR_3++;
  else
   break;
 }

 return (VAR_3 == VAR_1 ? 1 : 0);
}
