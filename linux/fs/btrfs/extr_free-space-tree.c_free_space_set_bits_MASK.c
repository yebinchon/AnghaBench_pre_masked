
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct extent_buffer {int dummy; } ;
struct btrfs_path {int * slots; struct extent_buffer** nodes; } ;
struct btrfs_key {scalar_t__ type; scalar_t__ objectid; scalar_t__ offset; } ;
struct btrfs_fs_info {int sectorsize; } ;
struct btrfs_block_group_cache {struct btrfs_fs_info* fs_info; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct extent_buffer*,struct btrfs_key*,int ) ;
 unsigned long FUNC_2 (struct extent_buffer*,int ) ;
 int FUNC_3 (struct extent_buffer*) ;
 unsigned long FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (struct extent_buffer*,unsigned long,unsigned long,unsigned long) ;
 int FUNC_6 (struct extent_buffer*,unsigned long,unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct btrfs_block_group_cache *VAR_1,
    struct btrfs_path *VAR_2, u64 *VAR_3, u64 *VAR_4,
    int VAR_5)
{
 struct btrfs_fs_info *VAR_6 = VAR_1->fs_info;
 struct extent_buffer *VAR_7;
 struct btrfs_key VAR_8;
 u64 VAR_9 = *VAR_3 + *VAR_4;
 u64 VAR_10, VAR_11;
 unsigned long VAR_12, VAR_13, VAR_14;

 VAR_7 = VAR_2->nodes[0];
 FUNC_1(VAR_7, &VAR_8, VAR_2->slots[0]);
 FUNC_0(VAR_8.type == VAR_0);

 VAR_10 = VAR_8.objectid;
 VAR_11 = VAR_8.objectid + VAR_8.offset;
 FUNC_0(*VAR_3 >= VAR_10 && *VAR_3 < VAR_11);
 FUNC_0(VAR_9 > VAR_10);

 if (VAR_9 > VAR_11)
  VAR_9 = VAR_11;

 VAR_12 = FUNC_2(VAR_7, VAR_2->slots[0]);
 VAR_13 = FUNC_4(*VAR_3 - VAR_10, VAR_6->sectorsize);
 VAR_14 = FUNC_4(VAR_9 - VAR_10, VAR_6->sectorsize);
 if (VAR_5)
  FUNC_6(VAR_7, VAR_12, VAR_13, VAR_14 - VAR_13);
 else
  FUNC_5(VAR_7, VAR_12, VAR_13, VAR_14 - VAR_13);
 FUNC_3(VAR_7);

 *VAR_4 -= VAR_9 - *VAR_3;
 *VAR_3 = VAR_9;
}
