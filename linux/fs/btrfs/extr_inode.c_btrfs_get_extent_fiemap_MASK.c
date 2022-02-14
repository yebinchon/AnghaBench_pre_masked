
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct extent_map {scalar_t__ block_start; scalar_t__ start; scalar_t__ block_len; scalar_t__ orig_start; scalar_t__ len; int flags; int * bdev; } ;
struct btrfs_inode {int io_tree; } ;


 int FUNC_0 (struct extent_map*) ;
 int VAR_0 ;
 struct extent_map* FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (struct extent_map*) ;
 struct extent_map* FUNC_3 () ;
 struct extent_map* FUNC_4 (struct btrfs_inode*,int *,int ,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_5 (int *,scalar_t__*,scalar_t__,scalar_t__,int ,int) ;
 scalar_t__ FUNC_6 (struct extent_map*) ;
 int FUNC_7 (struct extent_map*) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__) ;
 int FUNC_10 (int ,int *) ;
 scalar_t__ FUNC_11 (int ,int *) ;

struct extent_map *FUNC_12(struct btrfs_inode *VAR_5,
        u64 VAR_6, u64 VAR_7)
{
 struct extent_map *VAR_8;
 struct extent_map *VAR_9 = ((void*)0);
 u64 VAR_10 = VAR_6;
 u64 VAR_11;
 u64 VAR_12;
 u64 VAR_13;
 int VAR_14 = 0;

 VAR_8 = FUNC_4(VAR_5, ((void*)0), 0, VAR_6, VAR_7, 0);
 if (FUNC_2(VAR_8))
  return VAR_8;






 if (VAR_8->block_start != VAR_4 &&
     !FUNC_11(VAR_2, &VAR_8->flags))
  return VAR_8;
 else
  VAR_9 = VAR_8;


 VAR_11 = VAR_6 + VAR_7;
 if (VAR_11 < VAR_6)
  VAR_11 = (u64)-1;
 else
  VAR_11 -= 1;

 VAR_8 = ((void*)0);


 VAR_12 = FUNC_5(&VAR_5->io_tree, &VAR_10,
     VAR_11, VAR_7, VAR_1, 1);
 VAR_13 = VAR_10 + VAR_12;
 if (VAR_13 < VAR_10)
  VAR_13 = (u64)-1;





 if (VAR_10 > VAR_11 || VAR_13 <= VAR_6) {
  VAR_8 = VAR_9;
  VAR_9 = ((void*)0);
  goto out;
 }





 VAR_10 = FUNC_8(VAR_6, VAR_10);
 VAR_12 = VAR_13 - VAR_10;

 if (VAR_12 > 0) {
  u64 VAR_15;
  u64 VAR_16;
  const u64 VAR_17 = FUNC_6(VAR_9);

  VAR_8 = FUNC_3();
  if (!VAR_8) {
   VAR_14 = -VAR_0;
   goto out;
  }
  VAR_8->bdev = ((void*)0);

  FUNC_0(VAR_9);







  if (VAR_17 <= VAR_6 || VAR_9->start > VAR_11) {
         FUNC_7(VAR_9);
         VAR_9 = ((void*)0);
  } else {
         VAR_15 = FUNC_8(VAR_9->start, VAR_6);
         VAR_16 = VAR_17 - VAR_15;
  }

  if (VAR_9 && VAR_10 > VAR_15) {





   VAR_8->len = FUNC_9(VAR_16, VAR_10 - VAR_15);
   VAR_8->start = VAR_15;
   VAR_8->orig_start = VAR_15;




   VAR_8->block_start = VAR_9->block_start;
   VAR_8->block_len = VAR_16;
   if (FUNC_11(VAR_2, &VAR_9->flags))
    FUNC_10(VAR_2, &VAR_8->flags);
  } else {




   VAR_8->start = VAR_10;
   VAR_8->len = VAR_12;
   VAR_8->orig_start = VAR_10;
   VAR_8->block_start = VAR_3;
   VAR_8->block_len = VAR_12;
  }
 } else {
  return VAR_9;
 }
out:

 FUNC_7(VAR_9);
 if (VAR_14) {
  FUNC_7(VAR_8);
  return FUNC_1(VAR_14);
 }
 return VAR_8;
}
