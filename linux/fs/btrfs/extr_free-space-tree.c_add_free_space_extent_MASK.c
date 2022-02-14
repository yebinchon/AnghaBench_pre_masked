
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u8 ;
typedef scalar_t__ u64 ;
struct btrfs_trans_handle {TYPE_1__* fs_info; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_path {int * slots; int * nodes; } ;
struct btrfs_key {scalar_t__ objectid; scalar_t__ type; scalar_t__ offset; } ;
struct TYPE_4__ {scalar_t__ objectid; scalar_t__ offset; } ;
struct btrfs_block_group_cache {TYPE_2__ key; } ;
struct TYPE_3__ {struct btrfs_root* free_space_root; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_path*) ;
 int FUNC_2 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_path*,struct btrfs_key*,int ) ;
 int FUNC_3 (int ,struct btrfs_key*,int ) ;
 int FUNC_4 (struct btrfs_path*) ;
 int FUNC_5 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_key*,struct btrfs_path*,int,int) ;
 int FUNC_6 (struct btrfs_trans_handle*,struct btrfs_block_group_cache*,struct btrfs_path*,int) ;

__attribute__((used)) static int FUNC_7(struct btrfs_trans_handle *VAR_2,
     struct btrfs_block_group_cache *VAR_3,
     struct btrfs_path *VAR_4,
     u64 VAR_5, u64 VAR_6)
{
 struct btrfs_root *VAR_7 = VAR_2->fs_info->free_space_root;
 struct btrfs_key VAR_8, VAR_9;
 u64 VAR_10, VAR_11;
 u64 VAR_12 = VAR_5 + VAR_6;
 int VAR_13 = 1;
 int VAR_14;
 VAR_9.objectid = VAR_5;
 VAR_9.type = VAR_0;
 VAR_9.offset = VAR_6;


 if (VAR_5 == VAR_3->key.objectid)
  goto right;
 VAR_8.objectid = VAR_5 - 1;
 VAR_8.type = (u8)-1;
 VAR_8.offset = (u64)-1;

 VAR_14 = FUNC_5(VAR_2, VAR_7, &VAR_8, VAR_4, -1, 1);
 if (VAR_14)
  goto out;

 FUNC_3(VAR_4->nodes[0], &VAR_8, VAR_4->slots[0]);

 if (VAR_8.type != VAR_0) {
  FUNC_0(VAR_8.type == VAR_1);
  FUNC_4(VAR_4);
  goto right;
 }

 VAR_10 = VAR_8.objectid;
 VAR_11 = VAR_8.objectid + VAR_8.offset;
 FUNC_0(VAR_10 >= VAR_3->key.objectid &&
        VAR_11 > VAR_3->key.objectid);
 FUNC_0(VAR_10 < VAR_5 && VAR_11 <= VAR_5);





 if (VAR_11 == VAR_5) {
  VAR_14 = FUNC_1(VAR_2, VAR_7, VAR_4);
  if (VAR_14)
   goto out;
  VAR_9.objectid = VAR_10;
  VAR_9.offset += VAR_8.offset;
  VAR_13--;
 }
 FUNC_4(VAR_4);

right:

 if (VAR_12 == VAR_3->key.objectid + VAR_3->key.offset)
  goto insert;
 VAR_8.objectid = VAR_12;
 VAR_8.type = (u8)-1;
 VAR_8.offset = (u64)-1;

 VAR_14 = FUNC_5(VAR_2, VAR_7, &VAR_8, VAR_4, -1, 1);
 if (VAR_14)
  goto out;

 FUNC_3(VAR_4->nodes[0], &VAR_8, VAR_4->slots[0]);

 if (VAR_8.type != VAR_0) {
  FUNC_0(VAR_8.type == VAR_1);
  FUNC_4(VAR_4);
  goto insert;
 }

 VAR_10 = VAR_8.objectid;
 VAR_11 = VAR_8.objectid + VAR_8.offset;
 FUNC_0(VAR_10 >= VAR_3->key.objectid &&
        VAR_11 > VAR_3->key.objectid);
 FUNC_0((VAR_10 < VAR_5 && VAR_11 <= VAR_5) ||
        (VAR_10 >= VAR_12 && VAR_11 > VAR_12));





 if (VAR_10 == VAR_12) {
  VAR_14 = FUNC_1(VAR_2, VAR_7, VAR_4);
  if (VAR_14)
   goto out;
  VAR_9.offset += VAR_8.offset;
  VAR_13--;
 }
 FUNC_4(VAR_4);

insert:

 VAR_14 = FUNC_2(VAR_2, VAR_7, VAR_4, &VAR_9, 0);
 if (VAR_14)
  goto out;

 FUNC_4(VAR_4);
 VAR_14 = FUNC_6(VAR_2, VAR_3, VAR_4,
          VAR_13);

out:
 return VAR_14;
}
