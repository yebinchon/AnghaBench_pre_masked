
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct walk_control {int (* process_func ) (struct btrfs_root*,struct extent_buffer*,struct walk_control*,int ,int) ;scalar_t__ free; } ;
struct extent_buffer {int len; int start; int bflags; } ;
struct btrfs_trans_handle {int dummy; } ;
struct TYPE_2__ {scalar_t__ objectid; } ;
struct btrfs_root {TYPE_1__ root_key; struct extent_buffer* node; struct btrfs_fs_info* fs_info; } ;
struct btrfs_path {struct extent_buffer** nodes; scalar_t__* slots; } ;
struct btrfs_fs_info {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 struct btrfs_path* FUNC_1 () ;
 int FUNC_2 (struct extent_buffer*) ;
 int FUNC_3 (struct btrfs_fs_info*,int ,int ) ;
 int FUNC_4 (struct btrfs_path*) ;
 int FUNC_5 (struct extent_buffer*) ;
 int FUNC_6 (struct extent_buffer*) ;
 int FUNC_7 (struct extent_buffer*) ;
 int FUNC_8 (struct extent_buffer*) ;
 int FUNC_9 (struct extent_buffer*) ;
 int FUNC_10 (struct extent_buffer*) ;
 int FUNC_11 (struct extent_buffer*) ;
 int FUNC_12 (struct extent_buffer*) ;
 int FUNC_13 (struct btrfs_root*,struct extent_buffer*,struct walk_control*,int ,int) ;
 scalar_t__ FUNC_14 (int ,int *) ;
 int FUNC_15 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_path*,int*,struct walk_control*) ;
 int FUNC_16 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_path*,int*,struct walk_control*) ;

__attribute__((used)) static int FUNC_17(struct btrfs_trans_handle *VAR_3,
    struct btrfs_root *VAR_4, struct walk_control *VAR_5)
{
 struct btrfs_fs_info *VAR_6 = VAR_4->fs_info;
 int VAR_7 = 0;
 int VAR_8;
 int VAR_9;
 struct btrfs_path *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_1();
 if (!VAR_10)
  return -VAR_1;

 VAR_9 = FUNC_6(VAR_4->node);
 VAR_11 = VAR_9;
 VAR_10->nodes[VAR_9] = VAR_4->node;
 FUNC_12(VAR_4->node);
 VAR_10->slots[VAR_9] = 0;

 while (1) {
  VAR_8 = FUNC_15(VAR_3, VAR_4, VAR_10, &VAR_9, VAR_5);
  if (VAR_8 > 0)
   break;
  if (VAR_8 < 0) {
   VAR_7 = VAR_8;
   goto out;
  }

  VAR_8 = FUNC_16(VAR_3, VAR_4, VAR_10, &VAR_9, VAR_5);
  if (VAR_8 > 0)
   break;
  if (VAR_8 < 0) {
   VAR_7 = VAR_8;
   goto out;
  }
 }


 if (VAR_10->nodes[VAR_11]) {
  VAR_7 = VAR_5->process_func(VAR_4, VAR_10->nodes[VAR_11], VAR_5,
    FUNC_5(VAR_10->nodes[VAR_11]),
    VAR_11);
  if (VAR_7)
   goto out;
  if (VAR_5->free) {
   struct extent_buffer *VAR_12;

   VAR_12 = VAR_10->nodes[VAR_11];

   if (VAR_3) {
    FUNC_8(VAR_12);
    FUNC_7(VAR_12);
    FUNC_2(VAR_12);
    FUNC_10(VAR_12);
    FUNC_9(VAR_12);
   } else {
    if (FUNC_14(VAR_2, &VAR_12->bflags))
     FUNC_11(VAR_12);
   }

   FUNC_0(VAR_4->root_key.objectid !=
    VAR_0);
   VAR_7 = FUNC_3(VAR_6,
       VAR_12->start, VAR_12->len);
   if (VAR_7)
    goto out;
  }
 }

out:
 FUNC_4(VAR_10);
 return VAR_7;
}
