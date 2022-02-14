
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u64 ;
struct btrfs_trans_handle {TYPE_1__* fs_info; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_path {int * slots; int * nodes; } ;
struct btrfs_key {scalar_t__ objectid; scalar_t__ type; scalar_t__ offset; } ;
struct btrfs_block_group_cache {int dummy; } ;
struct TYPE_2__ {struct btrfs_root* free_space_root; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_path*) ;
 int FUNC_2 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_path*,struct btrfs_key*,int ) ;
 int FUNC_3 (int ,struct btrfs_key*,int ) ;
 int FUNC_4 (struct btrfs_path*) ;
 int FUNC_5 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_key*,struct btrfs_path*,int,int) ;
 int FUNC_6 (struct btrfs_trans_handle*,struct btrfs_block_group_cache*,struct btrfs_path*,int) ;

__attribute__((used)) static int FUNC_7(struct btrfs_trans_handle *VAR_1,
        struct btrfs_block_group_cache *VAR_2,
        struct btrfs_path *VAR_3,
        u64 VAR_4, u64 VAR_5)
{
 struct btrfs_root *VAR_6 = VAR_1->fs_info->free_space_root;
 struct btrfs_key VAR_7;
 u64 VAR_8, VAR_9;
 u64 VAR_10 = VAR_4 + VAR_5;
 int VAR_11 = -1;
 int VAR_12;

 VAR_7.objectid = VAR_4;
 VAR_7.type = (u8)-1;
 VAR_7.offset = (u64)-1;

 VAR_12 = FUNC_5(VAR_1, VAR_6, &VAR_7, VAR_3, -1, 1);
 if (VAR_12)
  goto out;

 FUNC_3(VAR_3->nodes[0], &VAR_7, VAR_3->slots[0]);

 FUNC_0(VAR_7.type == VAR_0);

 VAR_8 = VAR_7.objectid;
 VAR_9 = VAR_7.objectid + VAR_7.offset;
 FUNC_0(VAR_4 >= VAR_8 && VAR_10 <= VAR_9);
 VAR_12 = FUNC_1(VAR_1, VAR_6, VAR_3);
 if (VAR_12)
  goto out;


 if (VAR_4 > VAR_8) {
  VAR_7.objectid = VAR_8;
  VAR_7.type = VAR_0;
  VAR_7.offset = VAR_4 - VAR_8;

  FUNC_4(VAR_3);
  VAR_12 = FUNC_2(VAR_1, VAR_6, VAR_3, &VAR_7, 0);
  if (VAR_12)
   goto out;
  VAR_11++;
 }


 if (VAR_10 < VAR_9) {
  VAR_7.objectid = VAR_10;
  VAR_7.type = VAR_0;
  VAR_7.offset = VAR_9 - VAR_10;

  FUNC_4(VAR_3);
  VAR_12 = FUNC_2(VAR_1, VAR_6, VAR_3, &VAR_7, 0);
  if (VAR_12)
   goto out;
  VAR_11++;
 }

 FUNC_4(VAR_3);
 VAR_12 = FUNC_6(VAR_1, VAR_2, VAR_3,
          VAR_11);

out:
 return VAR_12;
}
