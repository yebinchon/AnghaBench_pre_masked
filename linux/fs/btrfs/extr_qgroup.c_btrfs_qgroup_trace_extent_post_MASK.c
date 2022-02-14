
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ulist {int dummy; } ;
struct btrfs_qgroup_extent_record {struct ulist* old_roots; int bytenr; } ;
struct btrfs_fs_info {int qgroup_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct btrfs_fs_info*,int ,int ,struct ulist**,int) ;
 int FUNC_1 (struct btrfs_fs_info*,char*,int) ;

int FUNC_2(struct btrfs_fs_info *VAR_1,
       struct btrfs_qgroup_extent_record *VAR_2)
{
 struct ulist *VAR_3;
 u64 VAR_4 = VAR_2->bytenr;
 int VAR_5;

 VAR_5 = FUNC_0(((void*)0), VAR_1, VAR_4, 0, &VAR_3, 0);
 if (VAR_5 < 0) {
  VAR_1->qgroup_flags |= VAR_0;
  FUNC_1(VAR_1,
"error accounting new delayed refs extent (err code: %d), quota inconsistent",
   VAR_5);
  return 0;
 }
 VAR_2->old_roots = VAR_3;
 return 0;
}
