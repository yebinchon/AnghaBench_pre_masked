
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_acl_header {int dummy; } ;
struct f2fs_acl_entry_short {int dummy; } ;
struct f2fs_acl_entry {int dummy; } ;
typedef int ssize_t ;



__attribute__((used)) static inline int FUNC_0(size_t VAR_0)
{
 ssize_t VAR_1;
 VAR_0 -= sizeof(struct f2fs_acl_header);
 VAR_1 = VAR_0 - 4 * sizeof(struct f2fs_acl_entry_short);
 if (VAR_1 < 0) {
  if (VAR_0 % sizeof(struct f2fs_acl_entry_short))
   return -1;
  return VAR_0 / sizeof(struct f2fs_acl_entry_short);
 } else {
  if (VAR_1 % sizeof(struct f2fs_acl_entry))
   return -1;
  return VAR_1 / sizeof(struct f2fs_acl_entry) + 4;
 }
}
