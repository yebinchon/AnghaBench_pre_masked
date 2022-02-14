
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct extent_buffer {int start; } ;
struct btrfs_trans_handle {struct btrfs_fs_info* fs_info; } ;
struct btrfs_path {int* slots; struct extent_buffer** nodes; scalar_t__* locks; } ;
struct btrfs_key {int dummy; } ;
struct btrfs_fs_info {int nodesize; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct extent_buffer*) ;
 int FUNC_2 (struct extent_buffer*) ;
 struct btrfs_path* FUNC_3 () ;
 scalar_t__ FUNC_4 (struct btrfs_key*,struct btrfs_key*) ;
 int FUNC_5 (struct btrfs_path*) ;
 int FUNC_6 (struct extent_buffer*) ;
 int FUNC_7 (struct extent_buffer*,struct btrfs_key*,int) ;
 int FUNC_8 (struct extent_buffer*,int) ;
 int FUNC_9 (struct extent_buffer*,struct btrfs_key*,int) ;
 int FUNC_10 (struct extent_buffer*,int) ;
 int FUNC_11 (struct btrfs_trans_handle*,int ,int ,int ) ;
 int FUNC_12 (struct btrfs_trans_handle*,struct extent_buffer*) ;
 int FUNC_13 (struct extent_buffer*) ;
 int FUNC_14 (struct extent_buffer*) ;
 int FUNC_15 (struct extent_buffer*) ;
 int FUNC_16 (struct extent_buffer*) ;
 int FUNC_17 (struct extent_buffer*) ;
 struct extent_buffer* FUNC_18 (struct btrfs_fs_info*,int ,int ,int,struct btrfs_key*) ;

__attribute__((used)) static int FUNC_19(struct btrfs_trans_handle* VAR_6,
        struct extent_buffer *VAR_7,
        struct btrfs_path *VAR_8,
        int VAR_9, int VAR_10,
        bool VAR_11)
{
 struct btrfs_key VAR_12;
 struct btrfs_path *VAR_13;
 struct btrfs_fs_info *VAR_14 = VAR_6->fs_info;
 u32 VAR_15 = VAR_14->nodesize;
 int VAR_16 = VAR_10;
 int VAR_17;

 FUNC_0(VAR_9 > VAR_10);

 if (FUNC_6(VAR_7) != VAR_10)
  return -VAR_1;

 VAR_13 = FUNC_3();
 if (!VAR_13) {
  VAR_17 = -VAR_4;
  goto out;
 }

 if (VAR_9)
  FUNC_9(VAR_8->nodes[VAR_9], &VAR_12, 0);
 else
  FUNC_7(VAR_8->nodes[VAR_9], &VAR_12, 0);


 FUNC_15(VAR_7);
 VAR_13->nodes[VAR_10] = VAR_7;
 VAR_13->slots[VAR_10] = VAR_8->slots[VAR_10];
 VAR_13->locks[VAR_10] = 0;


 while (VAR_16 >= VAR_9) {
  struct btrfs_key VAR_18;
  struct btrfs_key VAR_19;

  if (VAR_13->nodes[VAR_16] == ((void*)0)) {
   struct btrfs_key VAR_20;
   struct extent_buffer *VAR_21;
   int VAR_22;
   u64 VAR_23;
   u64 VAR_24;

   VAR_21 = VAR_13->nodes[VAR_16 + 1];
   VAR_22 = VAR_13->slots[VAR_16 + 1];
   VAR_24 = FUNC_8(VAR_21, VAR_22);
   VAR_23 = FUNC_10(VAR_21, VAR_22);
   FUNC_9(VAR_21, &VAR_20, VAR_22);

   VAR_21 = FUNC_18(VAR_14, VAR_24, VAR_23,
          VAR_16, &VAR_20);
   if (FUNC_1(VAR_21)) {
    VAR_17 = FUNC_2(VAR_21);
    goto out;
   } else if (!FUNC_16(VAR_21)) {
    FUNC_17(VAR_21);
    VAR_17 = -VAR_2;
    goto out;
   }

   VAR_13->nodes[VAR_16] = VAR_21;

   FUNC_14(VAR_21);
   FUNC_13(VAR_21);
   VAR_13->locks[VAR_16] = VAR_0;
  }

  VAR_13->slots[VAR_16] = VAR_8->slots[VAR_16];
  if (VAR_16) {
   FUNC_9(VAR_8->nodes[VAR_16],
     &VAR_19, VAR_8->slots[VAR_16]);
   FUNC_9(VAR_13->nodes[VAR_16],
     &VAR_18, VAR_13->slots[VAR_16]);
  } else {
   FUNC_7(VAR_8->nodes[VAR_16],
     &VAR_19, VAR_8->slots[VAR_16]);
   FUNC_7(VAR_13->nodes[VAR_16],
     &VAR_18, VAR_13->slots[VAR_16]);
  }

  if (FUNC_4(&VAR_19, &VAR_18)) {
   VAR_17 = -VAR_3;
   goto out;
  }
  VAR_16--;
 }





 VAR_17 = FUNC_11(VAR_6, VAR_13->nodes[VAR_9]->start,
   VAR_15, VAR_5);
 if (VAR_17 < 0)
  goto out;
 VAR_17 = FUNC_11(VAR_6,
   VAR_8->nodes[VAR_9]->start,
   VAR_15, VAR_5);
 if (VAR_17 < 0)
  goto out;


 if (VAR_9 == 0 && VAR_11) {
  VAR_17 = FUNC_12(VAR_6, VAR_13->nodes[0]);
  if (VAR_17 < 0)
   goto out;
  VAR_17 = FUNC_12(VAR_6, VAR_8->nodes[0]);
 }
out:
 FUNC_5(VAR_13);
 return VAR_17;
}
