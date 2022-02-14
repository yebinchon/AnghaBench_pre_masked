
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct inode {int i_sb; } ;
struct extent_map {int dummy; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_key {int offset; int objectid; } ;
struct btrfs_fs_info {int sectorsize; } ;
struct TYPE_2__ {struct btrfs_root* root; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 struct extent_map* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct extent_map*) ;
 struct extent_map* FUNC_3 (struct inode*,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_4 (struct btrfs_fs_info*,int ) ;
 int FUNC_5 (struct btrfs_fs_info*,int ,int ,int) ;
 int FUNC_6 (struct btrfs_root*,int ,int ,int ,int ,int ,struct btrfs_key*,int,int) ;
 struct btrfs_fs_info* FUNC_7 (int ) ;
 int FUNC_8 (struct inode*,int ,int ) ;

__attribute__((used)) static struct extent_map *FUNC_9(struct inode *VAR_1,
        u64 VAR_2, u64 VAR_3)
{
 struct btrfs_fs_info *VAR_4 = FUNC_7(VAR_1->i_sb);
 struct btrfs_root *VAR_5 = FUNC_0(VAR_1)->root;
 struct extent_map *VAR_6;
 struct btrfs_key VAR_7;
 u64 VAR_8;
 int VAR_9;

 VAR_8 = FUNC_8(VAR_1, VAR_2, VAR_3);
 VAR_9 = FUNC_6(VAR_5, VAR_3, VAR_3, VAR_4->sectorsize,
       0, VAR_8, &VAR_7, 1, 1);
 if (VAR_9)
  return FUNC_1(VAR_9);

 VAR_6 = FUNC_3(VAR_1, VAR_2, VAR_7.offset, VAR_2,
         VAR_7.objectid, VAR_7.offset, VAR_7.offset,
         VAR_7.offset, VAR_0);
 FUNC_4(VAR_4, VAR_7.objectid);
 if (FUNC_2(VAR_6))
  FUNC_5(VAR_4, VAR_7.objectid,
        VAR_7.offset, 1);

 return VAR_6;
}
