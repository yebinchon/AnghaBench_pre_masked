
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct extent_buffer {int dummy; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_path {int* slots; int lowest_level; struct extent_buffer** nodes; scalar_t__ skip_locking; scalar_t__* locks; int keep_locks; } ;
struct btrfs_key {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct extent_buffer*) ;
 int FUNC_2 (struct extent_buffer*,struct btrfs_key*,int) ;
 int FUNC_3 (struct extent_buffer*,struct btrfs_key*,int) ;
 scalar_t__ FUNC_4 (struct extent_buffer*,int) ;
 int FUNC_5 (struct btrfs_path*) ;
 int FUNC_6 (int *,struct btrfs_root*,struct btrfs_key*,struct btrfs_path*,int ,int ) ;

int FUNC_7(struct btrfs_root *VAR_1, struct btrfs_path *VAR_2,
   struct btrfs_key *VAR_3, int VAR_4, u64 VAR_5)
{
 int VAR_6;
 struct extent_buffer *VAR_7;

 FUNC_0(!VAR_2->keep_locks && !VAR_2->skip_locking);
 while (VAR_4 < VAR_0) {
  if (!VAR_2->nodes[VAR_4])
   return 1;

  VAR_6 = VAR_2->slots[VAR_4] + 1;
  VAR_7 = VAR_2->nodes[VAR_4];
next:
  if (VAR_6 >= FUNC_1(VAR_7)) {
   int VAR_8;
   int VAR_9;
   struct btrfs_key VAR_10;
   if (VAR_4 + 1 >= VAR_0 ||
       !VAR_2->nodes[VAR_4 + 1])
    return 1;

   if (VAR_2->locks[VAR_4 + 1] || VAR_2->skip_locking) {
    VAR_4++;
    continue;
   }

   VAR_6 = FUNC_1(VAR_7) - 1;
   if (VAR_4 == 0)
    FUNC_2(VAR_7, &VAR_10, VAR_6);
   else
    FUNC_3(VAR_7, &VAR_10, VAR_6);

   VAR_9 = VAR_2->lowest_level;
   FUNC_5(VAR_2);
   VAR_2->lowest_level = VAR_4;
   VAR_8 = FUNC_6(((void*)0), VAR_1, &VAR_10, VAR_2,
      0, 0);
   VAR_2->lowest_level = VAR_9;
   if (VAR_8 < 0)
    return VAR_8;

   VAR_7 = VAR_2->nodes[VAR_4];
   VAR_6 = VAR_2->slots[VAR_4];
   if (VAR_8 == 0)
    VAR_6++;
   goto next;
  }

  if (VAR_4 == 0)
   FUNC_2(VAR_7, VAR_3, VAR_6);
  else {
   u64 VAR_11 = FUNC_4(VAR_7, VAR_6);

   if (VAR_11 < VAR_5) {
    VAR_6++;
    goto next;
   }
   FUNC_3(VAR_7, VAR_3, VAR_6);
  }
  return 0;
 }
 return 1;
}
