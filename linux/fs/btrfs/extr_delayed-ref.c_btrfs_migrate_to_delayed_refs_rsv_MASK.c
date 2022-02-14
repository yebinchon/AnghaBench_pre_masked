
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct btrfs_block_rsv {scalar_t__ reserved; scalar_t__ size; int full; int space_info; int lock; } ;
struct btrfs_fs_info {struct btrfs_block_rsv delayed_refs_rsv; } ;


 int FUNC_0 (struct btrfs_fs_info*,int ,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct btrfs_fs_info*,char*,int ,scalar_t__,int) ;

void FUNC_4(struct btrfs_fs_info *VAR_0,
           struct btrfs_block_rsv *VAR_1,
           u64 VAR_2)
{
 struct btrfs_block_rsv *VAR_3 = &VAR_0->delayed_refs_rsv;
 u64 VAR_4 = 0;

 FUNC_1(&VAR_1->lock);
 VAR_1->reserved -= VAR_2;
 VAR_1->size -= VAR_2;
 FUNC_2(&VAR_1->lock);

 FUNC_1(&VAR_3->lock);
 if (VAR_3->size > VAR_3->reserved) {
  u64 VAR_5 = VAR_3->size -
   VAR_3->reserved;
  if (VAR_2 > VAR_5) {
   VAR_4 = VAR_2 - VAR_5;
   VAR_2 = VAR_5;
  }
 } else {
  VAR_4 = VAR_2;
  VAR_2 = 0;
 }

 if (VAR_2)
  VAR_3->reserved += VAR_2;
 if (VAR_3->reserved >= VAR_3->size)
  VAR_3->full = 1;
 FUNC_2(&VAR_3->lock);

 if (VAR_2)
  FUNC_3(VAR_0, "delayed_refs_rsv",
           0, VAR_2, 1);
 if (VAR_4)
  FUNC_0(VAR_0,
    VAR_3->space_info, VAR_4);
}
