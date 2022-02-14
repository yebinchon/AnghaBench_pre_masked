
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct inode {int dummy; } ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_path {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct btrfs_trans_handle*,struct btrfs_root*,struct inode*,struct btrfs_path*,int ,int ,int *,int,int ,int ,int *) ;
 struct btrfs_path* FUNC_1 () ;
 int FUNC_2 (struct btrfs_path*) ;

int FUNC_3(struct btrfs_trans_handle *VAR_1,
         struct btrfs_root *VAR_2, struct inode *VAR_3, u64 VAR_4,
         u64 VAR_5, int VAR_6)
{
 struct btrfs_path *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_1();
 if (!VAR_7)
  return -VAR_0;
 VAR_8 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_7, VAR_4, VAR_5, ((void*)0),
       VAR_6, 0, 0, ((void*)0));
 FUNC_2(VAR_7);
 return VAR_8;
}
