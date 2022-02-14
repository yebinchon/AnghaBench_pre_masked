
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct extent_buffer {int dummy; } ;
struct btrfs_trans_handle {int dirty; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_path {int lowest_level; int* slots; int skip_release_on_error; int leave_spinning; int search_for_split; struct extent_buffer** nodes; scalar_t__* locks; int skip_locking; scalar_t__ keep_locks; } ;
struct btrfs_key {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct extent_buffer*) ;
 int FUNC_2 (struct extent_buffer*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct btrfs_trans_handle*,struct btrfs_root*,struct extent_buffer*,struct extent_buffer*,int,struct extent_buffer**) ;
 int FUNC_5 (struct extent_buffer*) ;
 int FUNC_6 (struct extent_buffer*) ;
 int FUNC_7 (struct btrfs_path*) ;
 struct extent_buffer* FUNC_8 (struct btrfs_root*,struct btrfs_path*,int) ;
 int FUNC_9 (struct btrfs_path*) ;
 int FUNC_10 (struct extent_buffer*) ;
 int FUNC_11 (struct extent_buffer*) ;
 int FUNC_12 (struct extent_buffer*) ;
 int FUNC_13 (struct extent_buffer*,scalar_t__) ;
 int FUNC_14 (struct extent_buffer*) ;
 int FUNC_15 (struct extent_buffer*,struct btrfs_key const*,int,int*,int*) ;
 int FUNC_16 (struct btrfs_root*,struct btrfs_path*,struct extent_buffer**,int,int,struct btrfs_key const*) ;
 int FUNC_17 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_path*,struct extent_buffer*,int,int,int*) ;
 int FUNC_18 (struct btrfs_trans_handle*,struct btrfs_root*,struct extent_buffer*) ;
 int FUNC_19 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_key const*,struct btrfs_path*,int,int) ;
 int FUNC_20 (struct btrfs_path*,int,int,int,int*) ;

int FUNC_21(struct btrfs_trans_handle *VAR_4, struct btrfs_root *VAR_5,
        const struct btrfs_key *VAR_6, struct btrfs_path *VAR_7,
        int VAR_8, int VAR_9)
{
 struct extent_buffer *VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15 = 1;

 int VAR_16 = 0;
 u8 VAR_17 = 0;
 int VAR_18;
 int VAR_19;

 VAR_17 = VAR_7->lowest_level;
 FUNC_3(VAR_17 && VAR_8 > 0);
 FUNC_3(VAR_7->nodes[0] != ((void*)0));
 FUNC_0(!VAR_9 && VAR_8);

 if (VAR_8 < 0) {
  VAR_15 = 2;





  VAR_16 = 2;
 } else if (VAR_8 > 0) {




  VAR_16 = 1;
 }

 if (!VAR_9)
  VAR_16 = -1;

 if (VAR_9 && (VAR_7->keep_locks || VAR_7->lowest_level))
  VAR_16 = VAR_0;

 VAR_18 = VAR_16;

again:
 VAR_19 = -1;
 VAR_10 = FUNC_8(VAR_5, VAR_7, VAR_16);
 if (FUNC_1(VAR_10)) {
  VAR_12 = FUNC_2(VAR_10);
  goto done;
 }

 while (VAR_10) {
  VAR_14 = FUNC_5(VAR_10);





  if (VAR_9) {
   bool VAR_20 = (VAR_14 == (VAR_0 - 1));






   if (!FUNC_18(VAR_4, VAR_5, VAR_10)) {
    VAR_4->dirty = 1;
    goto cow_done;
   }





   if (VAR_14 > VAR_16 ||
       (VAR_14 + 1 > VAR_16 &&
       VAR_14 + 1 < VAR_0 &&
       VAR_7->nodes[VAR_14 + 1])) {
    VAR_16 = VAR_14 + 1;
    FUNC_7(VAR_7);
    goto again;
   }

   FUNC_9(VAR_7);
   if (VAR_20)
    VAR_13 = FUNC_4(VAR_4, VAR_5, VAR_10, ((void*)0), 0,
            &VAR_10);
   else
    VAR_13 = FUNC_4(VAR_4, VAR_5, VAR_10,
            VAR_7->nodes[VAR_14 + 1],
            VAR_7->slots[VAR_14 + 1], &VAR_10);
   if (VAR_13) {
    VAR_12 = VAR_13;
    goto done;
   }
  }
cow_done:
  VAR_7->nodes[VAR_14] = VAR_10;
  if (!VAR_8 && !VAR_7->keep_locks) {
   int VAR_21 = VAR_14 + 1;

   if (VAR_21 < VAR_0 && VAR_7->locks[VAR_21]) {
    FUNC_13(VAR_7->nodes[VAR_21], VAR_7->locks[VAR_21]);
    VAR_7->locks[VAR_21] = 0;
   }
  }

  VAR_12 = FUNC_15(VAR_10, VAR_6, VAR_14, &VAR_19, &VAR_11);
  if (VAR_12 < 0)
   goto done;

  if (VAR_14 != 0) {
   int VAR_22 = 0;
   if (VAR_12 && VAR_11 > 0) {
    VAR_22 = 1;
    VAR_11 -= 1;
   }
   VAR_7->slots[VAR_14] = VAR_11;
   VAR_13 = FUNC_17(VAR_4, VAR_5, VAR_7, VAR_10, VAR_14,
          VAR_8, &VAR_16);
   if (VAR_13 == -VAR_3)
    goto again;
   if (VAR_13) {
    VAR_12 = VAR_13;
    goto done;
   }
   VAR_10 = VAR_7->nodes[VAR_14];
   VAR_11 = VAR_7->slots[VAR_14];







   if (VAR_11 == 0 && VAR_8 &&
       VAR_16 < VAR_14 + 1) {
    VAR_16 = VAR_14 + 1;
    FUNC_7(VAR_7);
    goto again;
   }

   FUNC_20(VAR_7, VAR_14, VAR_15,
      VAR_18, &VAR_16);

   if (VAR_14 == VAR_17) {
    if (VAR_22)
     VAR_7->slots[VAR_14]++;
    goto done;
   }

   VAR_13 = FUNC_16(VAR_5, VAR_7, &VAR_10, VAR_14,
          VAR_11, VAR_6);
   if (VAR_13 == -VAR_3)
    goto again;
   if (VAR_13) {
    VAR_12 = VAR_13;
    goto done;
   }

   if (!VAR_7->skip_locking) {
    VAR_14 = FUNC_5(VAR_10);
    if (VAR_14 <= VAR_16) {
     if (!FUNC_14(VAR_10)) {
      FUNC_9(VAR_7);
      FUNC_10(VAR_10);
     }
     VAR_7->locks[VAR_14] = VAR_2;
    } else {
     if (!FUNC_12(VAR_10)) {
      FUNC_9(VAR_7);
      FUNC_11(VAR_10);
     }
     VAR_7->locks[VAR_14] = VAR_1;
    }
    VAR_7->nodes[VAR_14] = VAR_10;
   }
  } else {
   VAR_7->slots[VAR_14] = VAR_11;
   if (VAR_8 > 0 &&
       FUNC_6(VAR_10) < VAR_8) {
    if (VAR_16 < 1) {
     VAR_16 = 1;
     FUNC_7(VAR_7);
     goto again;
    }

    FUNC_9(VAR_7);
    VAR_13 = FUNC_19(VAR_4, VAR_5, VAR_6,
       VAR_7, VAR_8, VAR_12 == 0);

    FUNC_0(VAR_13 > 0);
    if (VAR_13) {
     VAR_12 = VAR_13;
     goto done;
    }
   }
   if (!VAR_7->search_for_split)
    FUNC_20(VAR_7, VAR_14, VAR_15,
       VAR_18, ((void*)0));
   goto done;
  }
 }
 VAR_12 = 1;
done:




 if (!VAR_7->leave_spinning)
  FUNC_9(VAR_7);
 if (VAR_12 < 0 && !VAR_7->skip_release_on_error)
  FUNC_7(VAR_7);
 return VAR_12;
}
