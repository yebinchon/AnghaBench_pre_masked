
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct extent_buffer {int dummy; } ;
struct btrfs_root {struct btrfs_fs_info* fs_info; } ;
struct btrfs_path {int lowest_level; int* slots; int leave_spinning; struct extent_buffer** nodes; void** locks; scalar_t__ search_commit_root; } ;
struct btrfs_key {int dummy; } ;
struct btrfs_fs_info {int dummy; } ;


 void* VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct extent_buffer*) ;
 int FUNC_3 (struct btrfs_path*) ;
 int FUNC_4 (int *,struct btrfs_root*,struct btrfs_key const*,struct btrfs_path*,int ,int ) ;
 int FUNC_5 (struct btrfs_path*) ;
 int FUNC_6 (struct extent_buffer*) ;
 int FUNC_7 (struct extent_buffer*) ;
 int FUNC_8 (struct btrfs_path*,int) ;
 struct extent_buffer* FUNC_9 (struct btrfs_root*,int ) ;
 int FUNC_10 (struct extent_buffer*,struct btrfs_key const*,int,int*,int*) ;
 int FUNC_11 (struct btrfs_root*,struct btrfs_path*,struct extent_buffer**,int,int,struct btrfs_key const*) ;
 struct extent_buffer* FUNC_12 (struct btrfs_fs_info*,struct btrfs_path*,struct extent_buffer*,int ) ;
 int FUNC_13 (struct btrfs_path*,int,int,int ,int *) ;

int FUNC_14(struct btrfs_root *VAR_4, const struct btrfs_key *VAR_5,
     struct btrfs_path *VAR_6, u64 VAR_7)
{
 struct btrfs_fs_info *VAR_8 = VAR_4->fs_info;
 struct extent_buffer *VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14 = 1;
 u8 VAR_15 = 0;
 int VAR_16 = -1;

 VAR_15 = VAR_6->lowest_level;
 FUNC_1(VAR_6->nodes[0] != ((void*)0));

 if (VAR_6->search_commit_root) {
  FUNC_0(VAR_7);
  return FUNC_4(((void*)0), VAR_4, VAR_5, VAR_6, 0, 0);
 }

again:
 VAR_9 = FUNC_9(VAR_4, VAR_7);
 if (!VAR_9) {
  VAR_11 = -VAR_2;
  goto done;
 }
 VAR_13 = FUNC_2(VAR_9);
 VAR_6->locks[VAR_13] = VAR_0;

 while (VAR_9) {
  VAR_13 = FUNC_2(VAR_9);
  VAR_6->nodes[VAR_13] = VAR_9;







  FUNC_8(VAR_6, VAR_13 + 1);





  VAR_16 = -1;
  VAR_11 = FUNC_10(VAR_9, VAR_5, VAR_13, &VAR_16, &VAR_10);
  if (VAR_11 < 0)
   goto done;

  if (VAR_13 != 0) {
   int VAR_17 = 0;
   if (VAR_11 && VAR_10 > 0) {
    VAR_17 = 1;
    VAR_10 -= 1;
   }
   VAR_6->slots[VAR_13] = VAR_10;
   FUNC_13(VAR_6, VAR_13, VAR_14, 0, ((void*)0));

   if (VAR_13 == VAR_15) {
    if (VAR_17)
     VAR_6->slots[VAR_13]++;
    goto done;
   }

   VAR_12 = FUNC_11(VAR_4, VAR_6, &VAR_9, VAR_13,
          VAR_10, VAR_5);
   if (VAR_12 == -VAR_1)
    goto again;
   if (VAR_12) {
    VAR_11 = VAR_12;
    goto done;
   }

   VAR_13 = FUNC_2(VAR_9);
   if (!FUNC_7(VAR_9)) {
    FUNC_5(VAR_6);
    FUNC_6(VAR_9);
   }
   VAR_9 = FUNC_12(VAR_8, VAR_6, VAR_9, VAR_7);
   if (!VAR_9) {
    VAR_11 = -VAR_3;
    goto done;
   }
   VAR_6->locks[VAR_13] = VAR_0;
   VAR_6->nodes[VAR_13] = VAR_9;
  } else {
   VAR_6->slots[VAR_13] = VAR_10;
   FUNC_13(VAR_6, VAR_13, VAR_14, 0, ((void*)0));
   goto done;
  }
 }
 VAR_11 = 1;
done:
 if (!VAR_6->leave_spinning)
  FUNC_5(VAR_6);
 if (VAR_11 < 0)
  FUNC_3(VAR_6);

 return VAR_11;
}
