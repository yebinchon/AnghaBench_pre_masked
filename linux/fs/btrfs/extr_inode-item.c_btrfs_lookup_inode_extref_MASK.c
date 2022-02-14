
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_path {int * slots; int * nodes; } ;
struct btrfs_key {int offset; int type; int objectid; } ;
struct btrfs_inode_extref {int dummy; } ;


 int VAR_0 ;
 struct btrfs_inode_extref* FUNC_0 (int) ;
 int FUNC_1 (int ,char const*,int) ;
 struct btrfs_inode_extref* FUNC_2 (int ,int ,int ,char const*,int) ;
 int FUNC_3 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_key*,struct btrfs_path*,int,int) ;

struct btrfs_inode_extref *
FUNC_4(struct btrfs_trans_handle *VAR_1,
     struct btrfs_root *VAR_2,
     struct btrfs_path *VAR_3,
     const char *VAR_4, int VAR_5,
     u64 VAR_6, u64 VAR_7, int VAR_8,
     int VAR_9)
{
 int VAR_10;
 struct btrfs_key VAR_11;

 VAR_11.objectid = VAR_6;
 VAR_11.type = VAR_0;
 VAR_11.offset = FUNC_1(VAR_7, VAR_4, VAR_5);

 VAR_10 = FUNC_3(VAR_1, VAR_2, &VAR_11, VAR_3, VAR_8, VAR_9);
 if (VAR_10 < 0)
  return FUNC_0(VAR_10);
 if (VAR_10 > 0)
  return ((void*)0);
 return FUNC_2(VAR_3->nodes[0], VAR_3->slots[0],
           VAR_7, VAR_4, VAR_5);

}
