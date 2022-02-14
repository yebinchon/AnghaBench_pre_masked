
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_acl_header {int dummy; } ;
struct f2fs_acl_entry_short {int dummy; } ;
struct f2fs_acl_entry {int dummy; } ;



__attribute__((used)) static inline size_t FUNC_0(int VAR_0)
{
 if (VAR_0 <= 4) {
  return sizeof(struct f2fs_acl_header) +
   VAR_0 * sizeof(struct f2fs_acl_entry_short);
 } else {
  return sizeof(struct f2fs_acl_header) +
   4 * sizeof(struct f2fs_acl_entry_short) +
   (VAR_0 - 4) * sizeof(struct f2fs_acl_entry);
 }
}
