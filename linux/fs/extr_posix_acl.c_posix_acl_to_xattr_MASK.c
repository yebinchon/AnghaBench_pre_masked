
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_namespace {int dummy; } ;
struct posix_acl_xattr_header {void* a_version; } ;
struct posix_acl_xattr_entry {void* e_id; void* e_perm; void* e_tag; } ;
struct posix_acl_entry {int e_tag; int e_perm; int e_gid; int e_uid; } ;
struct posix_acl {int a_count; struct posix_acl_entry* a_entries; } ;



 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct user_namespace*,int ) ;
 int FUNC_3 (struct user_namespace*,int ) ;
 int FUNC_4 (int) ;

int
FUNC_5(struct user_namespace *VAR_3, const struct posix_acl *VAR_4,
     void *VAR_5, size_t VAR_6)
{
 struct posix_acl_xattr_header *VAR_7 = VAR_5;
 struct posix_acl_xattr_entry *VAR_8;
 int VAR_9, VAR_10;

 VAR_9 = FUNC_4(VAR_4->a_count);
 if (!VAR_5)
  return VAR_9;
 if (VAR_9 > VAR_6)
  return -VAR_1;

 VAR_8 = (void *)(VAR_7 + 1);
 VAR_7->a_version = FUNC_1(VAR_2);

 for (VAR_10=0; VAR_10 < VAR_4->a_count; VAR_10++, VAR_8++) {
  const struct posix_acl_entry *VAR_11 = &VAR_4->a_entries[VAR_10];
  VAR_8->e_tag = FUNC_0(VAR_11->e_tag);
  VAR_8->e_perm = FUNC_0(VAR_11->e_perm);
  switch(VAR_11->e_tag) {
  case 128:
   VAR_8->e_id =
    FUNC_1(FUNC_3(VAR_3, VAR_11->e_uid));
   break;
  case 129:
   VAR_8->e_id =
    FUNC_1(FUNC_2(VAR_3, VAR_11->e_gid));
   break;
  default:
   VAR_8->e_id = FUNC_1(VAR_0);
   break;
  }
 }
 return VAR_9;
}
