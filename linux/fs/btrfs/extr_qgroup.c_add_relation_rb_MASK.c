
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct btrfs_qgroup_list {int next_member; int next_group; struct btrfs_qgroup* member; struct btrfs_qgroup* group; } ;
struct btrfs_qgroup {int members; int groups; } ;
struct btrfs_fs_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct btrfs_qgroup* FUNC_0 (struct btrfs_fs_info*,int ) ;
 struct btrfs_qgroup_list* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static int FUNC_3(struct btrfs_fs_info *VAR_3,
      u64 VAR_4, u64 VAR_5)
{
 struct btrfs_qgroup *VAR_6;
 struct btrfs_qgroup *VAR_7;
 struct btrfs_qgroup_list *VAR_8;

 VAR_6 = FUNC_0(VAR_3, VAR_4);
 VAR_7 = FUNC_0(VAR_3, VAR_5);
 if (!VAR_6 || !VAR_7)
  return -VAR_0;

 VAR_8 = FUNC_1(sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_8->group = VAR_7;
 VAR_8->member = VAR_6;
 FUNC_2(&VAR_8->next_group, &VAR_6->groups);
 FUNC_2(&VAR_8->next_member, &VAR_7->members);

 return 0;
}
