
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct btrfs_root {int dummy; } ;
struct btrfs_path {int * nodes; } ;
struct btrfs_key {scalar_t__ type; int objectid; } ;
struct btrfs_dir_item {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct btrfs_dir_item*) ;
 int FUNC_1 (struct btrfs_dir_item*) ;
 struct btrfs_path* FUNC_2 () ;
 int FUNC_3 (int ,struct btrfs_dir_item*,struct btrfs_key*) ;
 int FUNC_4 (int ,struct btrfs_dir_item*) ;
 int FUNC_5 (struct btrfs_path*) ;
 struct btrfs_dir_item* FUNC_6 (int *,struct btrfs_root*,struct btrfs_path*,int ,char const*,int,int ) ;

__attribute__((used)) static int FUNC_7(struct btrfs_root *VAR_3,
     u64 VAR_4, const char *VAR_5, int VAR_6,
     u64 *VAR_7,
     u8 *VAR_8)
{
 int VAR_9 = 0;
 struct btrfs_dir_item *VAR_10;
 struct btrfs_key VAR_11;
 struct btrfs_path *VAR_12;

 VAR_12 = FUNC_2();
 if (!VAR_12)
  return -VAR_2;

 VAR_10 = FUNC_6(((void*)0), VAR_3, VAR_12,
   VAR_4, VAR_5, VAR_6, 0);
 if (FUNC_0(VAR_10)) {
  VAR_9 = VAR_10 ? FUNC_1(VAR_10) : -VAR_1;
  goto out;
 }
 FUNC_3(VAR_12->nodes[0], VAR_10, &VAR_11);
 if (VAR_11.type == VAR_0) {
  VAR_9 = -VAR_1;
  goto out;
 }
 *VAR_7 = VAR_11.objectid;
 *VAR_8 = FUNC_4(VAR_12->nodes[0], VAR_10);

out:
 FUNC_5(VAR_12);
 return VAR_9;
}
