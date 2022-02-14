
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_7__ {int tv_nsec; int tv_sec; } ;
struct TYPE_6__ {int tv_nsec; int tv_sec; } ;
struct TYPE_5__ {int tv_nsec; int tv_sec; } ;
struct inode {int i_rdev; TYPE_3__ i_ctime; TYPE_2__ i_mtime; TYPE_1__ i_atime; int i_nlink; int i_mode; int i_size; } ;
struct extent_buffer {int dummy; } ;
struct btrfs_trans_handle {int transid; } ;
struct btrfs_map_token {int dummy; } ;
struct btrfs_inode_item {int ctime; int mtime; int atime; } ;
struct TYPE_8__ {int flags; int generation; } ;


 TYPE_4__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct btrfs_map_token*,struct extent_buffer*) ;
 int FUNC_2 (struct extent_buffer*,struct btrfs_inode_item*,int ,struct btrfs_map_token*) ;
 int FUNC_3 (struct extent_buffer*,struct btrfs_inode_item*,int ,struct btrfs_map_token*) ;
 int FUNC_4 (struct extent_buffer*,struct btrfs_inode_item*,int ,struct btrfs_map_token*) ;
 int FUNC_5 (struct extent_buffer*,struct btrfs_inode_item*,int ,struct btrfs_map_token*) ;
 int FUNC_6 (struct extent_buffer*,struct btrfs_inode_item*,int ,struct btrfs_map_token*) ;
 int FUNC_7 (struct extent_buffer*,struct btrfs_inode_item*,int ,struct btrfs_map_token*) ;
 int FUNC_8 (struct extent_buffer*,struct btrfs_inode_item*,int ,struct btrfs_map_token*) ;
 int FUNC_9 (struct extent_buffer*,struct btrfs_inode_item*,int ,struct btrfs_map_token*) ;
 int FUNC_10 (struct extent_buffer*,struct btrfs_inode_item*,int ,struct btrfs_map_token*) ;
 int FUNC_11 (struct extent_buffer*,struct btrfs_inode_item*,int ,struct btrfs_map_token*) ;
 int FUNC_12 (struct extent_buffer*,struct btrfs_inode_item*,int ,struct btrfs_map_token*) ;
 int FUNC_13 (struct extent_buffer*,struct btrfs_inode_item*,int ,struct btrfs_map_token*) ;
 int FUNC_14 (struct extent_buffer*,int *,int ,struct btrfs_map_token*) ;
 int FUNC_15 (struct extent_buffer*,int *,int ,struct btrfs_map_token*) ;
 int FUNC_16 (struct inode*) ;
 int FUNC_17 (struct inode*) ;
 int FUNC_18 (struct inode*) ;
 int FUNC_19 (struct inode*) ;

__attribute__((used)) static void FUNC_20(struct btrfs_trans_handle *VAR_0,
       struct extent_buffer *VAR_1,
       struct btrfs_inode_item *VAR_2,
       struct inode *VAR_3, int VAR_4,
       u64 VAR_5)
{
 struct btrfs_map_token VAR_6;

 FUNC_1(&VAR_6, VAR_1);

 if (VAR_4) {





  FUNC_4(VAR_1, VAR_2, 0, &VAR_6);
  FUNC_11(VAR_1, VAR_2, VAR_5, &VAR_6);
 } else {
  FUNC_4(VAR_1, VAR_2,
       FUNC_0(VAR_3)->generation,
       &VAR_6);
  FUNC_11(VAR_1, VAR_2, VAR_3->i_size, &VAR_6);
 }

 FUNC_13(VAR_1, VAR_2, FUNC_17(VAR_3), &VAR_6);
 FUNC_5(VAR_1, VAR_2, FUNC_16(VAR_3), &VAR_6);
 FUNC_6(VAR_1, VAR_2, VAR_3->i_mode, &VAR_6);
 FUNC_8(VAR_1, VAR_2, VAR_3->i_nlink, &VAR_6);

 FUNC_15(VAR_1, &VAR_2->atime,
         VAR_3->i_atime.tv_sec, &VAR_6);
 FUNC_14(VAR_1, &VAR_2->atime,
          VAR_3->i_atime.tv_nsec, &VAR_6);

 FUNC_15(VAR_1, &VAR_2->mtime,
         VAR_3->i_mtime.tv_sec, &VAR_6);
 FUNC_14(VAR_1, &VAR_2->mtime,
          VAR_3->i_mtime.tv_nsec, &VAR_6);

 FUNC_15(VAR_1, &VAR_2->ctime,
         VAR_3->i_ctime.tv_sec, &VAR_6);
 FUNC_14(VAR_1, &VAR_2->ctime,
          VAR_3->i_ctime.tv_nsec, &VAR_6);

 FUNC_7(VAR_1, VAR_2, FUNC_18(VAR_3),
         &VAR_6);

 FUNC_10(VAR_1, VAR_2,
           FUNC_19(VAR_3), &VAR_6);
 FUNC_12(VAR_1, VAR_2, VAR_0->transid, &VAR_6);
 FUNC_9(VAR_1, VAR_2, VAR_3->i_rdev, &VAR_6);
 FUNC_3(VAR_1, VAR_2, FUNC_0(VAR_3)->flags, &VAR_6);
 FUNC_2(VAR_1, VAR_2, 0, &VAR_6);
}
