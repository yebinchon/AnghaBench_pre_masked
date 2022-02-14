
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct extent_buffer {int dummy; } ;
struct btrfs_trans_handle {struct btrfs_fs_info* fs_info; } ;
struct btrfs_path {int* slots; struct extent_buffer** nodes; scalar_t__* locks; } ;
struct btrfs_key {int dummy; } ;
struct btrfs_fs_info {int nodesize; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct extent_buffer*) ;
 int FUNC_2 (struct extent_buffer*) ;
 int FUNC_3 (struct btrfs_path*,int) ;
 struct btrfs_path* FUNC_4 () ;
 int FUNC_5 (struct btrfs_path*) ;
 int FUNC_6 (struct extent_buffer*,int) ;
 int FUNC_7 (struct extent_buffer*,struct btrfs_key*,int) ;
 int FUNC_8 (struct extent_buffer*,int) ;
 int FUNC_9 (struct btrfs_trans_handle*,int ,int ,int ) ;
 int FUNC_10 (struct btrfs_trans_handle*,struct extent_buffer*) ;
 int FUNC_11 (struct extent_buffer*,int ,int,int *) ;
 int FUNC_12 (struct extent_buffer*) ;
 int FUNC_13 (struct extent_buffer*) ;
 int FUNC_14 (struct extent_buffer*) ;
 int FUNC_15 (struct extent_buffer*) ;
 int FUNC_16 (struct extent_buffer*) ;
 struct extent_buffer* FUNC_17 (struct btrfs_fs_info*,int ,int ,int,struct btrfs_key*) ;
 int FUNC_18 (int ,int *) ;

int FUNC_19(struct btrfs_trans_handle *VAR_6,
          struct extent_buffer *VAR_7,
          u64 VAR_8, int VAR_9)
{
 struct btrfs_fs_info *VAR_10 = VAR_6->fs_info;
 int VAR_11 = 0;
 int VAR_12;
 struct extent_buffer *VAR_13 = VAR_7;
 struct btrfs_path *VAR_14 = ((void*)0);

 FUNC_0(VAR_9 < 0 || VAR_9 >= VAR_1);
 FUNC_0(VAR_7 == ((void*)0));

 if (!FUNC_18(VAR_0, &VAR_10->flags))
  return 0;

 if (!FUNC_15(VAR_7)) {
  VAR_11 = FUNC_11(VAR_7, VAR_8, VAR_9, ((void*)0));
  if (VAR_11)
   goto out;
 }

 if (VAR_9 == 0) {
  VAR_11 = FUNC_10(VAR_6, VAR_7);
  goto out;
 }

 VAR_14 = FUNC_4();
 if (!VAR_14)
  return -VAR_4;
 FUNC_14(VAR_7);
 VAR_14->nodes[VAR_9] = VAR_7;
 VAR_14->slots[VAR_9] = 0;
 VAR_14->locks[VAR_9] = 0;
walk_down:
 VAR_12 = VAR_9;
 while (VAR_12 >= 0) {
  if (VAR_14->nodes[VAR_12] == ((void*)0)) {
   struct btrfs_key VAR_15;
   int VAR_16;
   u64 VAR_17;
   u64 VAR_18;





   VAR_13 = VAR_14->nodes[VAR_12 + 1];
   VAR_16 = VAR_14->slots[VAR_12 + 1];
   VAR_18 = FUNC_6(VAR_13, VAR_16);
   VAR_17 = FUNC_8(VAR_13, VAR_16);
   FUNC_7(VAR_13, &VAR_15, VAR_16);

   VAR_13 = FUNC_17(VAR_10, VAR_18, VAR_17,
          VAR_12, &VAR_15);
   if (FUNC_1(VAR_13)) {
    VAR_11 = FUNC_2(VAR_13);
    goto out;
   } else if (!FUNC_15(VAR_13)) {
    FUNC_16(VAR_13);
    VAR_11 = -VAR_3;
    goto out;
   }

   VAR_14->nodes[VAR_12] = VAR_13;
   VAR_14->slots[VAR_12] = 0;

   FUNC_13(VAR_13);
   FUNC_12(VAR_13);
   VAR_14->locks[VAR_12] = VAR_2;

   VAR_11 = FUNC_9(VAR_6, VAR_18,
       VAR_10->nodesize,
       VAR_5);
   if (VAR_11)
    goto out;
  }

  if (VAR_12 == 0) {
   VAR_11 = FUNC_10(VAR_6,
           VAR_14->nodes[VAR_12]);
   if (VAR_11)
    goto out;


   VAR_11 = FUNC_3(VAR_14, VAR_9);
   if (VAR_11)
    break;


   goto walk_down;
  }

  VAR_12--;
 }

 VAR_11 = 0;
out:
 FUNC_5(VAR_14);

 return VAR_11;
}
