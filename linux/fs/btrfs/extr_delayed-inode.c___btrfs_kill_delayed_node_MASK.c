
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_root {struct btrfs_fs_info* fs_info; } ;
struct btrfs_fs_info {int dummy; } ;
struct btrfs_delayed_node {int mutex; int flags; struct btrfs_root* root; } ;
struct btrfs_delayed_item {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct btrfs_delayed_item* FUNC_0 (struct btrfs_delayed_node*) ;
 struct btrfs_delayed_item* FUNC_1 (struct btrfs_delayed_node*) ;
 struct btrfs_delayed_item* FUNC_2 (struct btrfs_delayed_item*) ;
 int FUNC_3 (struct btrfs_fs_info*,struct btrfs_delayed_node*,int) ;
 int FUNC_4 (struct btrfs_root*,struct btrfs_delayed_item*) ;
 int FUNC_5 (struct btrfs_delayed_node*) ;
 int FUNC_6 (struct btrfs_delayed_node*) ;
 int FUNC_7 (struct btrfs_delayed_item*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int ,int *) ;

__attribute__((used)) static void FUNC_11(struct btrfs_delayed_node *VAR_2)
{
 struct btrfs_root *VAR_3 = VAR_2->root;
 struct btrfs_fs_info *VAR_4 = VAR_3->fs_info;
 struct btrfs_delayed_item *VAR_5, *VAR_6;

 FUNC_8(&VAR_2->mutex);
 VAR_5 = FUNC_1(VAR_2);
 while (VAR_5) {
  FUNC_4(VAR_3, VAR_5);
  VAR_6 = VAR_5;
  VAR_5 = FUNC_2(VAR_6);
  FUNC_7(VAR_6);
 }

 VAR_5 = FUNC_0(VAR_2);
 while (VAR_5) {
  FUNC_4(VAR_3, VAR_5);
  VAR_6 = VAR_5;
  VAR_5 = FUNC_2(VAR_6);
  FUNC_7(VAR_6);
 }

 if (FUNC_10(VAR_0, &VAR_2->flags))
  FUNC_6(VAR_2);

 if (FUNC_10(VAR_1, &VAR_2->flags)) {
  FUNC_3(VAR_4, VAR_2, 0);
  FUNC_5(VAR_2);
 }
 FUNC_9(&VAR_2->mutex);
}
