
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_acl_entry {scalar_t__ e_tag; int e_gid; int e_uid; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static bool
FUNC_2(struct posix_acl_entry *VAR_2, struct posix_acl_entry *VAR_3)
{
 if (VAR_2->e_tag != VAR_3->e_tag)
  return VAR_2->e_tag > VAR_3->e_tag;
 if (VAR_2->e_tag == VAR_1)
  return FUNC_1(VAR_2->e_uid, VAR_3->e_uid);
 if (VAR_2->e_tag == VAR_0)
  return FUNC_0(VAR_2->e_gid, VAR_3->e_gid);
 return 0;
}
