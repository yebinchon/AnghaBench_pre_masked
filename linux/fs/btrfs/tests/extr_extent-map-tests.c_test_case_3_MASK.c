
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct extent_map_tree {int dummy; } ;
struct btrfs_fs_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct btrfs_fs_info*,struct extent_map_tree*,int) ;

__attribute__((used)) static int FUNC_1(struct btrfs_fs_info *VAR_2,
  struct extent_map_tree *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_3, 0);
 if (VAR_4)
  return VAR_4;
 VAR_4 = FUNC_0(VAR_2, VAR_3, VAR_1);
 if (VAR_4)
  return VAR_4;
 VAR_4 = FUNC_0(VAR_2, VAR_3, (12 * VAR_0));

 return VAR_4;
}
