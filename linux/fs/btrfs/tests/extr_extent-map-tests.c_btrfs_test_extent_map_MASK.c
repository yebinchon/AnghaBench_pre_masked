
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct extent_map_tree {int dummy; } ;
struct btrfs_fs_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct btrfs_fs_info* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct btrfs_fs_info*) ;
 int FUNC_2 (struct extent_map_tree*) ;
 int FUNC_3 (struct extent_map_tree*) ;
 struct extent_map_tree* FUNC_4 (int,int ) ;
 int FUNC_5 (struct btrfs_fs_info*,struct extent_map_tree*) ;
 int FUNC_6 (struct btrfs_fs_info*,struct extent_map_tree*) ;
 int FUNC_7 (struct btrfs_fs_info*,struct extent_map_tree*) ;
 int FUNC_8 (struct btrfs_fs_info*,struct extent_map_tree*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int ) ;

int FUNC_11(void)
{
 struct btrfs_fs_info *VAR_4 = ((void*)0);
 struct extent_map_tree *VAR_5;
 int VAR_6 = 0;

 FUNC_9("running extent_map tests");





 VAR_4 = FUNC_0(VAR_2, VAR_2);
 if (!VAR_4) {
  FUNC_10(VAR_3);
  return -VAR_0;
 }

 VAR_5 = FUNC_4(sizeof(*VAR_5), VAR_1);
 if (!VAR_5) {
  VAR_6 = -VAR_0;
  goto out;
 }

 FUNC_2(VAR_5);

 VAR_6 = FUNC_5(VAR_4, VAR_5);
 if (VAR_6)
  goto out;
 VAR_6 = FUNC_6(VAR_4, VAR_5);
 if (VAR_6)
  goto out;
 VAR_6 = FUNC_7(VAR_4, VAR_5);
 if (VAR_6)
  goto out;
 VAR_6 = FUNC_8(VAR_4, VAR_5);

out:
 FUNC_3(VAR_5);
 FUNC_1(VAR_4);

 return VAR_6;
}
