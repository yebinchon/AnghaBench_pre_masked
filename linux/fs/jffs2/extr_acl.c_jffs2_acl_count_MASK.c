
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jffs2_acl_header {int dummy; } ;
struct jffs2_acl_entry_short {int dummy; } ;
struct jffs2_acl_entry {int dummy; } ;



__attribute__((used)) static int FUNC_0(size_t VAR_0)
{
 size_t VAR_1;

 VAR_0 -= sizeof(struct jffs2_acl_header);
 if (VAR_0 < 4 * sizeof(struct jffs2_acl_entry_short)) {
  if (VAR_0 % sizeof(struct jffs2_acl_entry_short))
   return -1;
  return VAR_0 / sizeof(struct jffs2_acl_entry_short);
 } else {
  VAR_1 = VAR_0 - 4 * sizeof(struct jffs2_acl_entry_short);
  if (VAR_1 % sizeof(struct jffs2_acl_entry))
   return -1;
  return VAR_1 / sizeof(struct jffs2_acl_entry) + 4;
 }
}
