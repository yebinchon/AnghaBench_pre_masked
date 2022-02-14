
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct extent_buffer {int dummy; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_path {int keep_locks; int lowest_level; int* slots; struct extent_buffer** nodes; void** locks; } ;
struct btrfs_key {int dummy; } ;
typedef int found_key ;


 void* VAR_0 ;
 scalar_t__ FUNC_0 (struct extent_buffer*) ;
 int FUNC_1 (struct extent_buffer*) ;
 int FUNC_2 (struct extent_buffer*) ;
 int FUNC_3 (struct extent_buffer*,struct btrfs_key*,int,int*) ;
 int FUNC_4 (struct btrfs_root*,struct btrfs_path*,struct btrfs_key*,int,scalar_t__) ;
 scalar_t__ FUNC_5 (struct extent_buffer*) ;
 int FUNC_6 (struct extent_buffer*) ;
 int FUNC_7 (struct extent_buffer*) ;
 int FUNC_8 (struct extent_buffer*,struct btrfs_key*,int) ;
 int FUNC_9 (struct extent_buffer*,struct btrfs_key*,int) ;
 scalar_t__ FUNC_10 (struct extent_buffer*,int) ;
 struct extent_buffer* FUNC_11 (struct btrfs_root*) ;
 struct extent_buffer* FUNC_12 (struct extent_buffer*,int) ;
 int FUNC_13 (struct btrfs_path*) ;
 int FUNC_14 (struct btrfs_path*) ;
 int FUNC_15 (struct extent_buffer*) ;
 int FUNC_16 (struct btrfs_path*,int) ;
 int FUNC_17 (struct btrfs_key*,struct btrfs_key*,int) ;
 int FUNC_18 (struct btrfs_path*,int,int,int ,int *) ;

int FUNC_19(struct btrfs_root *VAR_1, struct btrfs_key *VAR_2,
    struct btrfs_path *VAR_3,
    u64 VAR_4)
{
 struct extent_buffer *VAR_5;
 struct btrfs_key VAR_6;
 int VAR_7;
 int VAR_8;
 u32 VAR_9;
 int VAR_10;
 int VAR_11 = 1;
 int VAR_12 = VAR_3->keep_locks;

 VAR_3->keep_locks = 1;
again:
 VAR_5 = FUNC_11(VAR_1);
 VAR_10 = FUNC_6(VAR_5);
 FUNC_2(VAR_3->nodes[VAR_10]);
 VAR_3->nodes[VAR_10] = VAR_5;
 VAR_3->locks[VAR_10] = VAR_0;

 if (FUNC_5(VAR_5) < VAR_4) {
  VAR_11 = 1;
  goto out;
 }
 while (1) {
  VAR_9 = FUNC_7(VAR_5);
  VAR_10 = FUNC_6(VAR_5);
  VAR_8 = FUNC_3(VAR_5, VAR_2, VAR_10, &VAR_7);
  if (VAR_8 < 0) {
   VAR_11 = VAR_8;
   goto out;
  }


  if (VAR_10 == VAR_3->lowest_level) {
   if (VAR_7 >= VAR_9)
    goto find_next_key;
   VAR_11 = 0;
   VAR_3->slots[VAR_10] = VAR_7;
   FUNC_8(VAR_5, &VAR_6, VAR_7);
   goto out;
  }
  if (VAR_8 && VAR_7 > 0)
   VAR_7--;




  while (VAR_7 < VAR_9) {
   u64 VAR_13;

   VAR_13 = FUNC_10(VAR_5, VAR_7);
   if (VAR_13 < VAR_4) {
    VAR_7++;
    continue;
   }
   break;
  }
find_next_key:




  if (VAR_7 >= VAR_9) {
   VAR_3->slots[VAR_10] = VAR_7;
   FUNC_14(VAR_3);
   VAR_8 = FUNC_4(VAR_1, VAR_3, VAR_2, VAR_10,
        VAR_4);
   if (VAR_8 == 0) {
    FUNC_13(VAR_3);
    goto again;
   } else {
    goto out;
   }
  }

  FUNC_9(VAR_5, &VAR_6, VAR_7);
  VAR_3->slots[VAR_10] = VAR_7;
  if (VAR_10 == VAR_3->lowest_level) {
   VAR_11 = 0;
   goto out;
  }
  FUNC_14(VAR_3);
  VAR_5 = FUNC_12(VAR_5, VAR_7);
  if (FUNC_0(VAR_5)) {
   VAR_11 = FUNC_1(VAR_5);
   goto out;
  }

  FUNC_15(VAR_5);

  VAR_3->locks[VAR_10 - 1] = VAR_0;
  VAR_3->nodes[VAR_10 - 1] = VAR_5;
  FUNC_18(VAR_3, VAR_10, 1, 0, ((void*)0));
 }
out:
 VAR_3->keep_locks = VAR_12;
 if (VAR_11 == 0) {
  FUNC_16(VAR_3, VAR_3->lowest_level + 1);
  FUNC_14(VAR_3);
  FUNC_17(VAR_2, &VAR_6, sizeof(VAR_6));
 }
 return VAR_11;
}
