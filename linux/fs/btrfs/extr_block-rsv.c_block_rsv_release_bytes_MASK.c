
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct btrfs_space_info {int dummy; } ;
struct btrfs_fs_info {int dummy; } ;
struct btrfs_block_rsv {scalar_t__ size; scalar_t__ qgroup_rsv_size; scalar_t__ reserved; int full; scalar_t__ qgroup_rsv_reserved; int lock; struct btrfs_space_info* space_info; } ;


 int FUNC_0 (struct btrfs_fs_info*,struct btrfs_space_info*,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static u64 FUNC_4(struct btrfs_fs_info *VAR_0,
        struct btrfs_block_rsv *VAR_1,
        struct btrfs_block_rsv *VAR_2, u64 VAR_3,
        u64 *VAR_4)
{
 struct btrfs_space_info *VAR_5 = VAR_1->space_info;
 u64 VAR_6 = 0;
 u64 VAR_7;

 FUNC_2(&VAR_1->lock);
 if (VAR_3 == (u64)-1) {
  VAR_3 = VAR_1->size;
  VAR_6 = VAR_1->qgroup_rsv_size;
 }
 VAR_1->size -= VAR_3;
 if (VAR_1->reserved >= VAR_1->size) {
  VAR_3 = VAR_1->reserved - VAR_1->size;
  VAR_1->reserved = VAR_1->size;
  VAR_1->full = 1;
 } else {
  VAR_3 = 0;
 }
 if (VAR_1->qgroup_rsv_reserved >= VAR_1->qgroup_rsv_size) {
  VAR_6 = VAR_1->qgroup_rsv_reserved -
        VAR_1->qgroup_rsv_size;
  VAR_1->qgroup_rsv_reserved = VAR_1->qgroup_rsv_size;
 } else {
  VAR_6 = 0;
 }
 FUNC_3(&VAR_1->lock);

 VAR_7 = VAR_3;
 if (VAR_3 > 0) {
  if (VAR_2) {
   FUNC_2(&VAR_2->lock);
   if (!VAR_2->full) {
    u64 VAR_8;

    VAR_8 = VAR_2->size - VAR_2->reserved;
    VAR_8 = FUNC_1(VAR_3, VAR_8);
    VAR_2->reserved += VAR_8;
    if (VAR_2->reserved >= VAR_2->size)
     VAR_2->full = 1;
    VAR_3 -= VAR_8;
   }
   FUNC_3(&VAR_2->lock);
  }
  if (VAR_3)
   FUNC_0(VAR_0,
           VAR_5,
           VAR_3);
 }
 if (VAR_4)
  *VAR_4 = VAR_6;
 return VAR_7;
}
