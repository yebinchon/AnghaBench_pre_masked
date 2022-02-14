
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {int state; struct btrfs_fs_info* fs_info; } ;
struct btrfs_fs_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct btrfs_trans_handle*) ;
 int FUNC_1 (struct btrfs_trans_handle*) ;
 int FUNC_2 (struct btrfs_fs_info*) ;
 int FUNC_3 (struct btrfs_fs_info*,char*) ;
 scalar_t__ FUNC_4 (struct btrfs_fs_info*) ;
 int FUNC_5 (struct btrfs_trans_handle*,struct btrfs_root*) ;
 int FUNC_6 (struct btrfs_trans_handle*) ;
 scalar_t__ FUNC_7 (struct btrfs_fs_info*) ;
 struct btrfs_trans_handle* FUNC_8 (struct btrfs_root*,int ) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 () ;
 scalar_t__ FUNC_11 (int ,int *) ;

int FUNC_12(struct btrfs_root *VAR_2)
{
 struct btrfs_fs_info *VAR_3 = VAR_2->fs_info;
 struct btrfs_trans_handle *VAR_4;
 int VAR_5;

 if (FUNC_11(VAR_0, &VAR_2->state))
  return 0;

 while (1) {
  VAR_4 = FUNC_8(VAR_2, 0);
  if (FUNC_0(VAR_4))
   return FUNC_1(VAR_4);

  VAR_5 = FUNC_5(VAR_4, VAR_2);

  FUNC_6(VAR_4);
  FUNC_2(VAR_3);
  FUNC_10();

  if (FUNC_7(VAR_3) || VAR_5 != -VAR_1)
   break;

  if (FUNC_4(VAR_3)) {
   FUNC_3(VAR_3, "defrag_root cancelled");
   VAR_5 = -VAR_1;
   break;
  }
 }
 FUNC_9(VAR_0, &VAR_2->state);
 return VAR_5;
}
