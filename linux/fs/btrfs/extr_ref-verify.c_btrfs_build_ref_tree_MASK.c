
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct extent_buffer {int dummy; } ;
struct btrfs_path {int * locks; scalar_t__* slots; struct extent_buffer** nodes; } ;
struct btrfs_fs_info {int mount_opt; int extent_root; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct btrfs_path* FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct btrfs_path*) ;
 int FUNC_3 (struct btrfs_fs_info*) ;
 int FUNC_4 (struct extent_buffer*) ;
 struct extent_buffer* FUNC_5 (int ) ;
 int FUNC_6 (struct extent_buffer*) ;
 int FUNC_7 (struct btrfs_fs_info*,int ) ;
 int FUNC_8 (int ,struct btrfs_path*,int,int *,int *) ;
 int FUNC_9 (struct btrfs_path*,int*) ;

int FUNC_10(struct btrfs_fs_info *VAR_3)
{
 struct btrfs_path *VAR_4;
 struct extent_buffer *VAR_5;
 u64 VAR_6 = 0, VAR_7 = 0;
 int VAR_8, VAR_9;

 if (!FUNC_7(VAR_3, VAR_2))
  return 0;

 VAR_4 = FUNC_0();
 if (!VAR_4)
  return -VAR_1;

 VAR_5 = FUNC_5(VAR_3->extent_root);
 FUNC_6(VAR_5);
 VAR_9 = FUNC_4(VAR_5);
 VAR_4->nodes[VAR_9] = VAR_5;
 VAR_4->slots[VAR_9] = 0;
 VAR_4->locks[VAR_9] = VAR_0;

 while (1) {






  VAR_8 = FUNC_8(VAR_3->extent_root, VAR_4, VAR_9,
         &VAR_6, &VAR_7);
  if (VAR_8)
   break;
  VAR_8 = FUNC_9(VAR_4, &VAR_9);
  if (VAR_8 < 0)
   break;
  if (VAR_8 > 0) {
   VAR_8 = 0;
   break;
  }
 }
 if (VAR_8) {
  FUNC_1(VAR_3->mount_opt, VAR_2);
  FUNC_3(VAR_3);
 }
 FUNC_2(VAR_4);
 return VAR_8;
}
