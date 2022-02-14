
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_acl_entry {scalar_t__ e_tag; int e_gid; int e_uid; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;

__attribute__((used)) static int
FUNC_4(const void *VAR_2, const void *VAR_3)
{
 const struct posix_acl_entry *VAR_4 = VAR_2, *VAR_5 = VAR_3;

 if (VAR_4->e_tag != VAR_5->e_tag)
  return VAR_4->e_tag - VAR_5->e_tag;
 else if ((VAR_4->e_tag == VAR_1) && FUNC_2(VAR_4->e_uid, VAR_5->e_uid))
  return 1;
 else if ((VAR_4->e_tag == VAR_1) && FUNC_3(VAR_4->e_uid, VAR_5->e_uid))
  return -1;
 else if ((VAR_4->e_tag == VAR_0) && FUNC_0(VAR_4->e_gid, VAR_5->e_gid))
  return 1;
 else if ((VAR_4->e_tag == VAR_0) && FUNC_1(VAR_4->e_gid, VAR_5->e_gid))
  return -1;
 else
  return 0;
}
