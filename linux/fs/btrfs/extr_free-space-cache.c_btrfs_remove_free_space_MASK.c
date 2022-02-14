
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct btrfs_free_space_ctl {int tree_lock; } ;
struct btrfs_free_space {scalar_t__ offset; scalar_t__ bytes; int bitmap; } ;
struct btrfs_block_group_cache {struct btrfs_free_space_ctl* free_space_ctl; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct btrfs_block_group_cache*,scalar_t__,scalar_t__) ;
 int VAR_1 ;
 int FUNC_2 (int ,struct btrfs_free_space*) ;
 int FUNC_3 (struct btrfs_free_space_ctl*,struct btrfs_free_space*) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (struct btrfs_free_space_ctl*,scalar_t__) ;
 int FUNC_6 (struct btrfs_free_space_ctl*,struct btrfs_free_space*,scalar_t__*,scalar_t__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct btrfs_free_space* FUNC_9 (struct btrfs_free_space_ctl*,scalar_t__,int,int ) ;
 int FUNC_10 (struct btrfs_free_space_ctl*,struct btrfs_free_space*) ;

int FUNC_11(struct btrfs_block_group_cache *VAR_2,
       u64 VAR_3, u64 VAR_4)
{
 struct btrfs_free_space_ctl *VAR_5 = VAR_2->free_space_ctl;
 struct btrfs_free_space *VAR_6;
 int VAR_7;
 bool VAR_8 = 0;

 FUNC_7(&VAR_5->tree_lock);

again:
 VAR_7 = 0;
 if (!VAR_4)
  goto out_lock;

 VAR_6 = FUNC_9(VAR_5, VAR_3, 0, 0);
 if (!VAR_6) {




  VAR_6 = FUNC_9(VAR_5, FUNC_5(VAR_5, VAR_3),
       1, 0);
  if (!VAR_6) {





   FUNC_0(VAR_8);
   goto out_lock;
  }
 }

 VAR_8 = 0;
 if (!VAR_6->bitmap) {
  FUNC_10(VAR_5, VAR_6);
  if (VAR_3 == VAR_6->offset) {
   u64 VAR_9 = FUNC_4(VAR_4, VAR_6->bytes);

   VAR_6->bytes -= VAR_9;
   VAR_6->offset += VAR_9;
   if (VAR_6->bytes) {
    VAR_7 = FUNC_3(VAR_5, VAR_6);
    FUNC_0(VAR_7);
   } else {
    FUNC_2(VAR_1, VAR_6);
   }

   VAR_3 += VAR_9;
   VAR_4 -= VAR_9;
   goto again;
  } else {
   u64 VAR_10 = VAR_6->bytes + VAR_6->offset;

   VAR_6->bytes = VAR_3 - VAR_6->offset;
   VAR_7 = FUNC_3(VAR_5, VAR_6);
   FUNC_0(VAR_7);
   if (VAR_7)
    goto out_lock;


   if (VAR_10 < VAR_3 + VAR_4) {
    VAR_4 -= VAR_10 - VAR_3;
    VAR_3 = VAR_10;
    goto again;
   } else if (VAR_10 == VAR_3 + VAR_4) {

    goto out_lock;
   }
   FUNC_8(&VAR_5->tree_lock);

   VAR_7 = FUNC_1(VAR_2, VAR_3 + VAR_4,
         VAR_10 - (VAR_3 + VAR_4));
   FUNC_0(VAR_7);
   goto out;
  }
 }

 VAR_7 = FUNC_6(VAR_5, VAR_6, &VAR_3, &VAR_4);
 if (VAR_7 == -VAR_0) {
  VAR_8 = 1;
  goto again;
 }
out_lock:
 FUNC_8(&VAR_5->tree_lock);
out:
 return VAR_7;
}
