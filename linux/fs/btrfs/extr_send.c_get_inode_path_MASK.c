
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct fs_path {int dummy; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_path {int * slots; int * nodes; } ;
struct btrfs_key {scalar_t__ objectid; scalar_t__ type; scalar_t__ offset; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct btrfs_path* FUNC_0 () ;
 int FUNC_1 (struct btrfs_path*) ;
 int FUNC_2 (int ,struct btrfs_key*,int ) ;
 int FUNC_3 (struct btrfs_root*,struct btrfs_key*,struct btrfs_path*,int,int ) ;
 int FUNC_4 (struct fs_path*) ;
 int FUNC_5 (struct btrfs_root*,struct btrfs_path*,struct btrfs_key*,int,int ,struct fs_path*) ;

__attribute__((used)) static int FUNC_6(struct btrfs_root *VAR_5,
     u64 VAR_6, struct fs_path *VAR_7)
{
 int VAR_8;
 struct btrfs_key VAR_9, VAR_10;
 struct btrfs_path *VAR_11;

 VAR_11 = FUNC_0();
 if (!VAR_11)
  return -VAR_3;

 FUNC_4(VAR_7);

 VAR_9.objectid = VAR_6;
 VAR_9.type = VAR_1;
 VAR_9.offset = 0;

 VAR_8 = FUNC_3(VAR_5, &VAR_9, VAR_11, 1, 0);
 if (VAR_8 < 0)
  goto out;
 if (VAR_8) {
  VAR_8 = 1;
  goto out;
 }
 FUNC_2(VAR_11->nodes[0], &VAR_10, VAR_11->slots[0]);
 if (VAR_10.objectid != VAR_6 ||
     (VAR_10.type != VAR_1 &&
      VAR_10.type != VAR_0)) {
  VAR_8 = -VAR_2;
  goto out;
 }

 VAR_8 = FUNC_5(VAR_5, VAR_11, &VAR_10, 1,
    VAR_4, VAR_7);
 if (VAR_8 < 0)
  goto out;
 VAR_8 = 0;

out:
 FUNC_1(VAR_11);
 return VAR_8;
}
