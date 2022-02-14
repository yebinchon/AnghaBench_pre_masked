
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct btrfs_qgroup {int node; } ;
struct btrfs_fs_info {int qgroup_tree; } ;


 int VAR_0 ;
 int FUNC_0 (struct btrfs_qgroup*) ;
 struct btrfs_qgroup* FUNC_1 (struct btrfs_fs_info*,int ) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static int FUNC_3(struct btrfs_fs_info *VAR_1, u64 VAR_2)
{
 struct btrfs_qgroup *VAR_3 = FUNC_1(VAR_1, VAR_2);

 if (!VAR_3)
  return -VAR_0;

 FUNC_2(&VAR_3->node, &VAR_1->qgroup_tree);
 FUNC_0(VAR_3);
 return 0;
}
