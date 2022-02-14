
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_sb; } ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_fs_info {int dummy; } ;
struct TYPE_2__ {scalar_t__ delayed_node; int runtime_flags; struct btrfs_root* root; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct btrfs_trans_handle*) ;
 int FUNC_2 (struct btrfs_trans_handle*) ;
 int FUNC_3 (struct btrfs_fs_info*) ;
 int FUNC_4 (struct btrfs_trans_handle*) ;
 struct btrfs_trans_handle* FUNC_5 (struct btrfs_root*) ;
 struct btrfs_fs_info* FUNC_6 (int ) ;
 struct btrfs_trans_handle* FUNC_7 (struct btrfs_root*,int) ;
 int FUNC_8 (struct btrfs_trans_handle*,struct btrfs_root*,struct inode*) ;
 scalar_t__ FUNC_9 (int ,int *) ;

__attribute__((used)) static int FUNC_10(struct inode *VAR_2)
{
 struct btrfs_fs_info *VAR_3 = FUNC_6(VAR_2->i_sb);
 struct btrfs_root *VAR_4 = FUNC_0(VAR_2)->root;
 struct btrfs_trans_handle *VAR_5;
 int VAR_6;

 if (FUNC_9(VAR_0, &FUNC_0(VAR_2)->runtime_flags))
  return 0;

 VAR_5 = FUNC_5(VAR_4);
 if (FUNC_1(VAR_5))
  return FUNC_2(VAR_5);

 VAR_6 = FUNC_8(VAR_5, VAR_4, VAR_2);
 if (VAR_6 && VAR_6 == -VAR_1) {

  FUNC_4(VAR_5);
  VAR_5 = FUNC_7(VAR_4, 1);
  if (FUNC_1(VAR_5))
   return FUNC_2(VAR_5);

  VAR_6 = FUNC_8(VAR_5, VAR_4, VAR_2);
 }
 FUNC_4(VAR_5);
 if (FUNC_0(VAR_2)->delayed_node)
  FUNC_3(VAR_3);

 return VAR_6;
}
