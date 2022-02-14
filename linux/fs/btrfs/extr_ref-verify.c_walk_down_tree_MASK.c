
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct extent_buffer {int dummy; } ;
struct btrfs_root {struct btrfs_fs_info* fs_info; } ;
struct btrfs_path {int * locks; int * slots; struct extent_buffer** nodes; } ;
struct btrfs_key {int dummy; } ;
struct btrfs_fs_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct extent_buffer*) ;
 int FUNC_1 (struct extent_buffer*) ;
 int FUNC_2 (struct extent_buffer*,int ) ;
 int FUNC_3 (struct extent_buffer*,struct btrfs_key*,int ) ;
 int FUNC_4 (struct extent_buffer*,int ) ;
 int FUNC_5 (struct extent_buffer*) ;
 int FUNC_6 (struct extent_buffer*) ;
 int FUNC_7 (struct extent_buffer*) ;
 int FUNC_8 (struct extent_buffer*) ;
 int FUNC_9 (struct btrfs_root*,struct btrfs_path*,int *,int *) ;
 struct extent_buffer* FUNC_10 (struct btrfs_fs_info*,int ,int ,int,struct btrfs_key*) ;

__attribute__((used)) static int FUNC_11(struct btrfs_root *VAR_2, struct btrfs_path *VAR_3,
     int VAR_4, u64 *VAR_5, u64 *VAR_6)
{
 struct btrfs_fs_info *VAR_7 = VAR_2->fs_info;
 struct extent_buffer *VAR_8;
 u64 VAR_9, VAR_10;
 int VAR_11 = 0;

 while (VAR_4 >= 0) {
  if (VAR_4) {
   struct btrfs_key VAR_12;

   VAR_9 = FUNC_2(VAR_3->nodes[VAR_4],
          VAR_3->slots[VAR_4]);
   VAR_10 = FUNC_4(VAR_3->nodes[VAR_4],
       VAR_3->slots[VAR_4]);
   FUNC_3(VAR_3->nodes[VAR_4], &VAR_12,
           VAR_3->slots[VAR_4]);
   VAR_8 = FUNC_10(VAR_7, VAR_9, VAR_10,
          VAR_4 - 1, &VAR_12);
   if (FUNC_0(VAR_8))
    return FUNC_1(VAR_8);
   if (!FUNC_7(VAR_8)) {
    FUNC_8(VAR_8);
    return -VAR_1;
   }
   FUNC_6(VAR_8);
   FUNC_5(VAR_8);
   VAR_3->nodes[VAR_4-1] = VAR_8;
   VAR_3->slots[VAR_4-1] = 0;
   VAR_3->locks[VAR_4-1] = VAR_0;
  } else {
   VAR_11 = FUNC_9(VAR_2, VAR_3, VAR_5, VAR_6);
   if (VAR_11)
    break;
  }
  VAR_4--;
 }
 return VAR_11;
}
