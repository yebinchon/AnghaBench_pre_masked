
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u8 ;
typedef scalar_t__ u64 ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_path {int * slots; int * nodes; } ;
struct btrfs_key {scalar_t__ objectid; scalar_t__ offset; void* type; } ;
struct TYPE_4__ {scalar_t__ objectid; scalar_t__ offset; } ;
struct btrfs_block_group_cache {TYPE_2__ key; TYPE_1__* fs_info; } ;
struct TYPE_3__ {scalar_t__ sectorsize; struct btrfs_root* free_space_root; } ;


 int FUNC_0 (int ,struct btrfs_key*,int ) ;
 int FUNC_1 (struct btrfs_path*) ;
 int FUNC_2 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_key*,struct btrfs_path*,int ,int) ;
 int FUNC_3 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_path*) ;
 int FUNC_4 (struct btrfs_block_group_cache*,struct btrfs_path*,scalar_t__*,scalar_t__*,int) ;
 int FUNC_5 (struct btrfs_block_group_cache*,struct btrfs_path*,scalar_t__) ;
 int FUNC_6 (struct btrfs_trans_handle*,struct btrfs_block_group_cache*,struct btrfs_path*,int) ;

__attribute__((used)) static int FUNC_7(struct btrfs_trans_handle *VAR_0,
        struct btrfs_block_group_cache *VAR_1,
        struct btrfs_path *VAR_2,
        u64 VAR_3, u64 VAR_4, int VAR_5)
{
 struct btrfs_root *VAR_6 = VAR_1->fs_info->free_space_root;
 struct btrfs_key VAR_7;
 u64 VAR_8 = VAR_3 + VAR_4;
 u64 VAR_9, VAR_10;
 int VAR_11, VAR_12;
 int VAR_13;
 int VAR_14;





 if (VAR_3 > VAR_1->key.objectid) {
  u64 VAR_15 = VAR_3 - VAR_1->fs_info->sectorsize;

  VAR_7.objectid = VAR_15;
  VAR_7.type = (u8)-1;
  VAR_7.offset = (u64)-1;

  VAR_14 = FUNC_2(VAR_0, VAR_6, &VAR_7, VAR_2, 0, 1);
  if (VAR_14)
   goto out;

  VAR_11 = FUNC_5(VAR_1, VAR_2, VAR_15);


  FUNC_0(VAR_2->nodes[0], &VAR_7, VAR_2->slots[0]);
  if (VAR_3 >= VAR_7.objectid + VAR_7.offset) {
   VAR_14 = FUNC_3(VAR_0, VAR_6, VAR_2);
   if (VAR_14)
    goto out;
  }
 } else {
  VAR_7.objectid = VAR_3;
  VAR_7.type = (u8)-1;
  VAR_7.offset = (u64)-1;

  VAR_14 = FUNC_2(VAR_0, VAR_6, &VAR_7, VAR_2, 0, 1);
  if (VAR_14)
   goto out;

  VAR_11 = -1;
 }





 VAR_9 = VAR_3;
 VAR_10 = VAR_4;
 while (1) {
  FUNC_4(VAR_1, VAR_2, &VAR_9, &VAR_10,
        !VAR_5);
  if (VAR_10 == 0)
   break;
  VAR_14 = FUNC_3(VAR_0, VAR_6, VAR_2);
  if (VAR_14)
   goto out;
 }





 if (VAR_8 < VAR_1->key.objectid + VAR_1->key.offset) {

  FUNC_0(VAR_2->nodes[0], &VAR_7, VAR_2->slots[0]);
  if (VAR_8 >= VAR_7.objectid + VAR_7.offset) {
   VAR_14 = FUNC_3(VAR_0, VAR_6, VAR_2);
   if (VAR_14)
    goto out;
  }

  VAR_12 = FUNC_5(VAR_1, VAR_2, VAR_8);
 } else {
  VAR_12 = -1;
 }

 if (VAR_5) {
  VAR_13 = -1;
  if (VAR_11 == 1) {

   VAR_13++;
  }
  if (VAR_12 == 1) {

   VAR_13++;
  }
 } else {
  VAR_13 = 1;
  if (VAR_11 == 1) {

   VAR_13--;
  }
  if (VAR_12 == 1) {

   VAR_13--;
  }
 }

 FUNC_1(VAR_2);
 VAR_14 = FUNC_6(VAR_0, VAR_1, VAR_2,
          VAR_13);

out:
 return VAR_14;
}
