
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ext2_acl_header ;
typedef int ext2_acl_entry_short ;
typedef int ext2_acl_entry ;



__attribute__((used)) static inline size_t FUNC_0(int VAR_0)
{
 if (VAR_0 <= 4) {
  return sizeof(ext2_acl_header) +
         VAR_0 * sizeof(ext2_acl_entry_short);
 } else {
  return sizeof(ext2_acl_header) +
         4 * sizeof(ext2_acl_entry_short) +
         (VAR_0 - 4) * sizeof(ext2_acl_entry);
 }
}
