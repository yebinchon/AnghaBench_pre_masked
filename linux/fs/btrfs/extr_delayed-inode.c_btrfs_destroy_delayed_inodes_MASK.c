
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_fs_info {int delayed_root; } ;
struct btrfs_delayed_node {int dummy; } ;


 int FUNC_0 (struct btrfs_delayed_node*) ;
 struct btrfs_delayed_node* FUNC_1 (int ) ;
 struct btrfs_delayed_node* FUNC_2 (struct btrfs_delayed_node*) ;
 int FUNC_3 (struct btrfs_delayed_node*) ;

void FUNC_4(struct btrfs_fs_info *VAR_0)
{
 struct btrfs_delayed_node *VAR_1, *VAR_2;

 VAR_1 = FUNC_1(VAR_0->delayed_root);
 while (VAR_1) {
  FUNC_0(VAR_1);

  VAR_2 = VAR_1;
  VAR_1 = FUNC_2(VAR_1);
  FUNC_3(VAR_2);
 }
}
