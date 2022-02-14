
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct posix_acl {int a_count; TYPE_1__* a_entries; } ;
struct f2fs_sb_info {int dummy; } ;
struct f2fs_acl_header {void* a_version; } ;
struct f2fs_acl_entry_short {int dummy; } ;
struct f2fs_acl_entry {void* e_id; void* e_perm; void* e_tag; } ;
struct TYPE_2__ {int e_tag; int e_perm; int e_gid; int e_uid; } ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (int ) ;
 size_t FUNC_3 (int) ;
 struct f2fs_acl_header* FUNC_4 (struct f2fs_sb_info*,int,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int VAR_4 ;
 int FUNC_7 (struct f2fs_acl_header*) ;

__attribute__((used)) static void *FUNC_8(struct f2fs_sb_info *VAR_5,
    const struct posix_acl *VAR_6, size_t *VAR_7)
{
 struct f2fs_acl_header *VAR_8;
 struct f2fs_acl_entry *VAR_9;
 int VAR_10;

 VAR_8 = FUNC_4(VAR_5, sizeof(struct f2fs_acl_header) +
   VAR_6->a_count * sizeof(struct f2fs_acl_entry),
   VAR_3);
 if (!VAR_8)
  return FUNC_0(-VAR_1);

 VAR_8->a_version = FUNC_2(VAR_2);
 VAR_9 = (struct f2fs_acl_entry *)(VAR_8 + 1);

 for (VAR_10 = 0; VAR_10 < VAR_6->a_count; VAR_10++) {

  VAR_9->e_tag = FUNC_1(VAR_6->a_entries[VAR_10].e_tag);
  VAR_9->e_perm = FUNC_1(VAR_6->a_entries[VAR_10].e_perm);

  switch (VAR_6->a_entries[VAR_10].e_tag) {
  case 129:
   VAR_9->e_id = FUNC_2(
     FUNC_6(&VAR_4,
      VAR_6->a_entries[VAR_10].e_uid));
   VAR_9 = (struct f2fs_acl_entry *)((char *)VAR_9 +
     sizeof(struct f2fs_acl_entry));
   break;
  case 133:
   VAR_9->e_id = FUNC_2(
     FUNC_5(&VAR_4,
      VAR_6->a_entries[VAR_10].e_gid));
   VAR_9 = (struct f2fs_acl_entry *)((char *)VAR_9 +
     sizeof(struct f2fs_acl_entry));
   break;
  case 128:
  case 132:
  case 131:
  case 130:
   VAR_9 = (struct f2fs_acl_entry *)((char *)VAR_9 +
     sizeof(struct f2fs_acl_entry_short));
   break;
  default:
   goto fail;
  }
 }
 *VAR_7 = FUNC_3(VAR_6->a_count);
 return (void *)VAR_8;

fail:
 FUNC_7(VAR_8);
 return FUNC_0(-VAR_0);
}
