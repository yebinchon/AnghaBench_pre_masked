
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_namespace {int dummy; } ;
struct posix_acl_xattr_header {scalar_t__ a_version; } ;
struct posix_acl_xattr_entry {int e_id; int e_perm; int e_tag; } ;
struct posix_acl_entry {int e_tag; int e_gid; int e_uid; void* e_perm; } ;
struct posix_acl {struct posix_acl_entry* a_entries; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct posix_acl* FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct user_namespace*,int ) ;
 int FUNC_6 (struct user_namespace*,int ) ;
 struct posix_acl* FUNC_7 (int,int ) ;
 int FUNC_8 (struct posix_acl*) ;
 int FUNC_9 (size_t) ;
 int FUNC_10 (int ) ;

struct posix_acl *
FUNC_11(struct user_namespace *VAR_5,
       const void *VAR_6, size_t VAR_7)
{
 const struct posix_acl_xattr_header *VAR_8 = VAR_6;
 const struct posix_acl_xattr_entry *VAR_9 = (const void *)(VAR_8 + 1), *VAR_10;
 int VAR_11;
 struct posix_acl *VAR_12;
 struct posix_acl_entry *VAR_13;

 if (!VAR_6)
  return ((void*)0);
 if (VAR_7 < sizeof(struct posix_acl_xattr_header))
   return FUNC_0(-VAR_0);
 if (VAR_8->a_version != FUNC_1(VAR_4))
  return FUNC_0(-VAR_2);

 VAR_11 = FUNC_9(VAR_7);
 if (VAR_11 < 0)
  return FUNC_0(-VAR_0);
 if (VAR_11 == 0)
  return ((void*)0);

 VAR_12 = FUNC_7(VAR_11, VAR_3);
 if (!VAR_12)
  return FUNC_0(-VAR_1);
 VAR_13 = VAR_12->a_entries;

 for (VAR_10 = VAR_9 + VAR_11; VAR_9 != VAR_10; VAR_13++, VAR_9++) {
  VAR_13->e_tag = FUNC_3(VAR_9->e_tag);
  VAR_13->e_perm = FUNC_3(VAR_9->e_perm);

  switch(VAR_13->e_tag) {
   case 128:
   case 132:
   case 131:
   case 130:
    break;

   case 129:
    VAR_13->e_uid =
     FUNC_6(VAR_5,
        FUNC_4(VAR_9->e_id));
    if (!FUNC_10(VAR_13->e_uid))
     goto fail;
    break;
   case 133:
    VAR_13->e_gid =
     FUNC_5(VAR_5,
        FUNC_4(VAR_9->e_id));
    if (!FUNC_2(VAR_13->e_gid))
     goto fail;
    break;

   default:
    goto fail;
  }
 }
 return VAR_12;

fail:
 FUNC_8(VAR_12);
 return FUNC_0(-VAR_0);
}
