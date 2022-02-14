
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct extent_map_tree {int lock; } ;
struct extent_map {unsigned long flags; scalar_t__ generation; scalar_t__ start; scalar_t__ len; scalar_t__ block_start; scalar_t__ orig_start; scalar_t__ block_len; scalar_t__ ram_bytes; void* orig_block_len; int compress_type; int bdev; int list; } ;
struct btrfs_inode {struct extent_map_tree extent_tree; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct extent_map_tree*,struct extent_map*,int) ;
 struct extent_map* FUNC_3 () ;
 int FUNC_4 (int ,unsigned long*) ;
 scalar_t__ FUNC_5 (struct extent_map*) ;
 int FUNC_6 (struct extent_map*) ;
 int FUNC_7 (int *) ;
 struct extent_map* FUNC_8 (struct extent_map_tree*,scalar_t__,scalar_t__) ;
 void* FUNC_9 (scalar_t__,void*) ;
 int FUNC_10 (struct extent_map_tree*,struct extent_map*) ;
 int FUNC_11 (struct extent_map_tree*,struct extent_map*,struct extent_map*,int) ;
 int FUNC_12 (int ,unsigned long*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

void FUNC_15(struct btrfs_inode *VAR_4, u64 VAR_5, u64 VAR_6,
        int VAR_7)
{
 struct extent_map *VAR_8;
 struct extent_map *VAR_9 = ((void*)0);
 struct extent_map *VAR_10 = ((void*)0);
 struct extent_map_tree *VAR_11 = &VAR_4->extent_tree;
 u64 VAR_12 = VAR_6 - VAR_5 + 1;
 u64 VAR_13;
 int VAR_14;
 int VAR_15 = 1;
 unsigned long VAR_16;
 int VAR_17 = 0;
 bool VAR_18;

 FUNC_1(VAR_6 < VAR_5);
 if (VAR_6 == (u64)-1) {
  VAR_12 = (u64)-1;
  VAR_15 = 0;
 }
 while (1) {
  int VAR_19 = 0;

  VAR_18 = 0;
  if (!VAR_9)
   VAR_9 = FUNC_3();
  if (!VAR_10)
   VAR_10 = FUNC_3();
  if (!VAR_9 || !VAR_10)
   VAR_19 = 1;

  FUNC_13(&VAR_11->lock);
  VAR_8 = FUNC_8(VAR_11, VAR_5, VAR_12);
  if (!VAR_8) {
   FUNC_14(&VAR_11->lock);
   break;
  }
  VAR_16 = VAR_8->flags;
  VAR_13 = VAR_8->generation;
  if (VAR_7 && FUNC_12(VAR_2, &VAR_8->flags)) {
   if (VAR_15 && VAR_8->start + VAR_8->len >= VAR_5 + VAR_12) {
    FUNC_6(VAR_8);
    FUNC_14(&VAR_11->lock);
    break;
   }
   VAR_5 = VAR_8->start + VAR_8->len;
   if (VAR_15)
    VAR_12 = VAR_5 + VAR_12 - (VAR_8->start + VAR_8->len);
   FUNC_6(VAR_8);
   FUNC_14(&VAR_11->lock);
   continue;
  }
  VAR_17 = FUNC_12(VAR_0, &VAR_8->flags);
  FUNC_4(VAR_2, &VAR_8->flags);
  FUNC_4(VAR_1, &VAR_16);
  VAR_18 = !FUNC_7(&VAR_8->list);
  if (VAR_19)
   goto next;

  if (VAR_8->start < VAR_5) {
   VAR_9->start = VAR_8->start;
   VAR_9->len = VAR_5 - VAR_8->start;

   if (VAR_8->block_start < VAR_3) {
    VAR_9->orig_start = VAR_8->orig_start;
    VAR_9->block_start = VAR_8->block_start;

    if (VAR_17)
     VAR_9->block_len = VAR_8->block_len;
    else
     VAR_9->block_len = VAR_9->len;
    VAR_9->orig_block_len = FUNC_9(VAR_9->block_len,
      VAR_8->orig_block_len);
    VAR_9->ram_bytes = VAR_8->ram_bytes;
   } else {
    VAR_9->orig_start = VAR_9->start;
    VAR_9->block_len = 0;
    VAR_9->block_start = VAR_8->block_start;
    VAR_9->orig_block_len = 0;
    VAR_9->ram_bytes = VAR_9->len;
   }

   VAR_9->generation = VAR_13;
   VAR_9->bdev = VAR_8->bdev;
   VAR_9->flags = VAR_16;
   VAR_9->compress_type = VAR_8->compress_type;
   FUNC_11(VAR_11, VAR_8, VAR_9, VAR_18);
   FUNC_6(VAR_9);
   VAR_9 = VAR_10;
   VAR_10 = ((void*)0);
  }
  if (VAR_15 && VAR_8->start + VAR_8->len > VAR_5 + VAR_12) {
   u64 VAR_20 = VAR_5 + VAR_12 - VAR_8->start;

   VAR_9->start = VAR_5 + VAR_12;
   VAR_9->len = VAR_8->start + VAR_8->len - (VAR_5 + VAR_12);
   VAR_9->bdev = VAR_8->bdev;
   VAR_9->flags = VAR_16;
   VAR_9->compress_type = VAR_8->compress_type;
   VAR_9->generation = VAR_13;

   if (VAR_8->block_start < VAR_3) {
    VAR_9->orig_block_len = FUNC_9(VAR_8->block_len,
          VAR_8->orig_block_len);

    VAR_9->ram_bytes = VAR_8->ram_bytes;
    if (VAR_17) {
     VAR_9->block_len = VAR_8->block_len;
     VAR_9->block_start = VAR_8->block_start;
     VAR_9->orig_start = VAR_8->orig_start;
    } else {
     VAR_9->block_len = VAR_9->len;
     VAR_9->block_start = VAR_8->block_start
      + VAR_20;
     VAR_9->orig_start = VAR_8->orig_start;
    }
   } else {
    VAR_9->ram_bytes = VAR_9->len;
    VAR_9->orig_start = VAR_9->start;
    VAR_9->block_len = 0;
    VAR_9->block_start = VAR_8->block_start;
    VAR_9->orig_block_len = 0;
   }

   if (FUNC_5(VAR_8)) {
    FUNC_11(VAR_11, VAR_8, VAR_9,
             VAR_18);
   } else {
    VAR_14 = FUNC_2(VAR_11, VAR_9,
        VAR_18);
    FUNC_0(VAR_14 == 0);
   }
   FUNC_6(VAR_9);
   VAR_9 = ((void*)0);
  }
next:
  if (FUNC_5(VAR_8))
   FUNC_10(VAR_11, VAR_8);
  FUNC_14(&VAR_11->lock);


  FUNC_6(VAR_8);

  FUNC_6(VAR_8);
 }
 if (VAR_9)
  FUNC_6(VAR_9);
 if (VAR_10)
  FUNC_6(VAR_10);
}
