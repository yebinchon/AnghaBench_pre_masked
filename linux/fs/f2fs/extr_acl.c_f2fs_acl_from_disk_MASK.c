
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct posix_acl {TYPE_1__* a_entries; } ;
struct f2fs_acl_header {scalar_t__ a_version; } ;
struct f2fs_acl_entry_short {int dummy; } ;
struct f2fs_acl_entry {int e_id; int e_perm; int e_tag; } ;
struct TYPE_2__ {int e_tag; int e_gid; int e_uid; void* e_perm; } ;
 int VAR_0 ;
 int VAR_1 ;
 struct posix_acl* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (size_t) ;
 int VAR_4 ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 struct posix_acl* FUNC_7 (int,int ) ;
 int FUNC_8 (struct posix_acl*) ;

__attribute__((used)) static struct posix_acl *FUNC_9(const char *VAR_5, size_t VAR_6)
{
 int VAR_7, VAR_8;
 struct posix_acl *VAR_9;
 struct f2fs_acl_header *VAR_10 = (struct f2fs_acl_header *)VAR_5;
 struct f2fs_acl_entry *VAR_11 = (struct f2fs_acl_entry *)(VAR_10 + 1);
 const char *VAR_12 = VAR_5 + VAR_6;

 if (VAR_6 < sizeof(struct f2fs_acl_header))
  return FUNC_0(-VAR_0);

 if (VAR_10->a_version != FUNC_1(VAR_2))
  return FUNC_0(-VAR_0);

 VAR_8 = FUNC_2(VAR_6);
 if (VAR_8 < 0)
  return FUNC_0(-VAR_0);
 if (VAR_8 == 0)
  return ((void*)0);

 VAR_9 = FUNC_7(VAR_8, VAR_3);
 if (!VAR_9)
  return FUNC_0(-VAR_1);

 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {

  if ((char *)VAR_11 > VAR_12)
   goto fail;

  VAR_9->a_entries[VAR_7].e_tag = FUNC_3(VAR_11->e_tag);
  VAR_9->a_entries[VAR_7].e_perm = FUNC_3(VAR_11->e_perm);

  switch (VAR_9->a_entries[VAR_7].e_tag) {
  case 128:
  case 132:
  case 131:
  case 130:
   VAR_11 = (struct f2fs_acl_entry *)((char *)VAR_11 +
     sizeof(struct f2fs_acl_entry_short));
   break;

  case 129:
   VAR_9->a_entries[VAR_7].e_uid =
    FUNC_6(&VAR_4,
      FUNC_4(VAR_11->e_id));
   VAR_11 = (struct f2fs_acl_entry *)((char *)VAR_11 +
     sizeof(struct f2fs_acl_entry));
   break;
  case 133:
   VAR_9->a_entries[VAR_7].e_gid =
    FUNC_5(&VAR_4,
      FUNC_4(VAR_11->e_id));
   VAR_11 = (struct f2fs_acl_entry *)((char *)VAR_11 +
     sizeof(struct f2fs_acl_entry));
   break;
  default:
   goto fail;
  }
 }
 if ((char *)VAR_11 != VAR_12)
  goto fail;
 return VAR_9;
fail:
 FUNC_8(VAR_9);
 return FUNC_0(-VAR_0);
}
