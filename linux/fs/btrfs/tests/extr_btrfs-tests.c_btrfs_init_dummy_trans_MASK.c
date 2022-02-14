
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_trans_handle {int transid; struct btrfs_fs_info* fs_info; int type; } ;
struct btrfs_fs_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct btrfs_trans_handle*,int ,int) ;

void FUNC_1(struct btrfs_trans_handle *VAR_1,
       struct btrfs_fs_info *VAR_2)
{
 FUNC_0(VAR_1, 0, sizeof(*VAR_1));
 VAR_1->transid = 1;
 VAR_1->type = VAR_0;
 VAR_1->fs_info = VAR_2;
}
