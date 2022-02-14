
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_namespace {int dummy; } ;
struct posix_acl_xattr_header {scalar_t__ a_version; } ;
struct posix_acl_xattr_entry {scalar_t__ e_id; int e_tag; } ;
typedef int kuid_t ;
typedef int kgid_t ;




 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct user_namespace*,int ) ;
 int FUNC_2 (struct user_namespace*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct user_namespace*,int ) ;
 int FUNC_6 (struct user_namespace*,int ) ;
 int FUNC_7 (size_t) ;

__attribute__((used)) static void FUNC_8(
 struct user_namespace *VAR_1, struct user_namespace *VAR_2,
 void *VAR_3, size_t VAR_4)
{
 struct posix_acl_xattr_header *VAR_5 = VAR_3;
 struct posix_acl_xattr_entry *VAR_6 = (void *)(VAR_5 + 1), *VAR_7;
 int VAR_8;
 kuid_t VAR_9;
 kgid_t VAR_10;

 if (!VAR_3)
  return;
 if (VAR_4 < sizeof(struct posix_acl_xattr_header))
  return;
 if (VAR_5->a_version != FUNC_0(VAR_0))
  return;

 VAR_8 = FUNC_7(VAR_4);
 if (VAR_8 < 0)
  return;
 if (VAR_8 == 0)
  return;

 for (VAR_7 = VAR_6 + VAR_8; VAR_6 != VAR_7; VAR_6++) {
  switch(FUNC_3(VAR_6->e_tag)) {
  case 128:
   VAR_9 = FUNC_6(VAR_2, FUNC_4(VAR_6->e_id));
   VAR_6->e_id = FUNC_0(FUNC_2(VAR_1, VAR_9));
   break;
  case 129:
   VAR_10 = FUNC_5(VAR_2, FUNC_4(VAR_6->e_id));
   VAR_6->e_id = FUNC_0(FUNC_1(VAR_1, VAR_10));
   break;
  default:
   break;
  }
 }
}
